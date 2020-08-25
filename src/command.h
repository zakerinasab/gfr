/*
 Copyright 2018 Google Inc.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#ifndef GFR_COMMAND_H
#define GFR_COMMAND_H

#define NOMINMAX
#include <vulkan/vulkan.h>

#include <memory>
#include <mutex>
#include <vector>

#include "command_common.h"
#include "command_tracker.h"
#include "descriptor_set.h"
#include "marker.h"
#include "util.h"

namespace gfr {

class Device;

// Options when dumping a command buffer to a log file.
typedef uint32_t CommandBufferDumpOptions;

struct CommandBufferDumpOption {
  static constexpr int kDefault = 0;
  static constexpr int kDumpAllCommands = 1 << 0;
};

// =================================================================================================
// CommandBuffer
// =================================================================================================
class CommandBuffer {
 public:
  CommandBuffer(Device* p_device, VkCommandPool vk_command_pool,
                VkCommandBuffer vk_command_buffer,
                VkCommandBuffer wrapped_command_buffer,
                const VkCommandBufferAllocateInfo* allocate_info,
                bool has_buffer_marker);
  ~CommandBuffer();

  VkCommandBuffer GetWrappedCommandBuffer() const {
    return wrapped_command_buffer_;
  }

  Device* GetDevice() const { return device_; }
  VkQueue GetSubmittedQueue() const { return submitted_queue_; }
  VkFence GetSubmittedFence() const { return submitted_fence_; }
  VkCommandPool GetVkCommandPool() { return vk_command_pool_; }
  VkCommandBuffer GetVkCommandBuffer() { return vk_command_buffer_; }

  bool IsPrimaryCommandBuffer() {
    return cb_level_ == VK_COMMAND_BUFFER_LEVEL_PRIMARY;
  }
  bool HasBufferMarker() const { return has_buffer_marker_; }

  void SetSubmitInfoId(uint64_t submit_info_id);
  uint64_t GetSubmitInfoId() { return submit_info_id_; }
  void SetInstrumentAllCommands(bool all) { instrument_all_commands_ = all; }

  bool WasSubmittedToQueue() const;
  bool StartedExecution() const;
  bool CompletedExecution() const;

  void Reset();
  void QueueSubmit(VkQueue queue, VkFence fence);

  void DumpContents(std::ostream& os, CommandBufferDumpOptions options,
                    const std::string& indent = gfr::Indent(2));

  bool DumpCmdExecuteCommands(const Command& command, std::ostream& os,
                              CommandBufferDumpOptions options,
                              const std::string& indent);

  // custom command buffer functions (not autogenerated)
  VkResult PreBeginCommandBuffer(VkCommandBuffer wrappedCommandBuffer,
                                 VkCommandBuffer commandBuffer,
                                 VkCommandBufferBeginInfo const* pBeginInfo);

  VkResult PostBeginCommandBuffer(VkCommandBuffer wrappedCommandBuffer,
                                  VkCommandBuffer commandBuffer,
                                  VkCommandBufferBeginInfo const* pBeginInfo,
                                  VkResult result);

  VkResult PreEndCommandBuffer(VkCommandBuffer wrappedCommandBuffer,
                               VkCommandBuffer commandBuffer);

  VkResult PostEndCommandBuffer(VkCommandBuffer wrappedCommandBuffer,
                                VkCommandBuffer commandBuffer, VkResult result);

  VkResult PreResetCommandBuffer(VkCommandBuffer wrappedCommandBuffer,
                                 VkCommandBuffer commandBuffer,
                                 VkCommandBufferResetFlags flags);

  VkResult PostResetCommandBuffer(VkCommandBuffer wrappedCommandBuffer,
                                  VkCommandBuffer commandBuffer,
                                  VkCommandBufferResetFlags flags,
                                  VkResult result);

  CommandBuffer& operator=(const CommandBuffer&) = delete;
  CommandBuffer(const CommandBuffer&) = delete;

// =============================================================================
// Include the generated command tracking code defines
// =============================================================================
#include "command.h.inc"

 private:
  const char* GetCommandName(const Command& command);

  struct CommandStatus {
    enum Status {
      kPending,     // submitted, not started
      kCompleted,   // submitted and executed
      kIncomplete,  // submitted not executed
      kUnknown,     // not submitted
    };
  };

  // Vulkan CommandBuffer states from the spec
  // 5.1, Figure 1. Lifecycle of a command buffer
  struct BufferState {
    enum State {
      kInitial,     // created
      kRecording,   // begin called
      kExecutable,  // end called
      kPending,     // submitted
      kInvalid,     // submitted and one time submit
    };
  };

  CommandStatus::Status GetCommandStatus(const Command& command) const;
  std::string PrintCommandStatus(CommandStatus::Status status) const;
  uint32_t GetLastStartedCommand() const;
  uint32_t GetLastCompleteCommand() const;

  bool DumpCommand(const Command& command, std::ostream& os,
                   const std::string& indent);
  void HandleIncompleteCommand(
      const Command& command,
      const class CommandBufferInternalState& state) const;

 private:
  Device* device_ = nullptr;
  uintptr_t vk_submit_info_ = 0;
  uint64_t submit_info_id_ = 0;
  VkCommandPool vk_command_pool_ = VK_NULL_HANDLE;
  VkCommandBuffer vk_command_buffer_ = VK_NULL_HANDLE;
  VkCommandBuffer wrapped_command_buffer_ = VK_NULL_HANDLE;

  VkCommandBufferLevel cb_level_ = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
  bool cb_simultaneous_use_ = false;

  // secondary command buffer inheritance info
  VkCommandBufferInheritanceInfo* scb_inheritance_info_ = nullptr;

  bool instrument_all_commands_ = false;
  bool has_buffer_marker_ = false;

  Marker top_marker_;
  Marker bottom_marker_;

  BufferState::State buffer_state_ = BufferState::kInitial;
  VkQueue submitted_queue_ = VK_NULL_HANDLE;
  VkFence submitted_fence_ = VK_NULL_HANDLE;

  CommandTracker tracker_;

  enum MarkerPosition {
    kTop,
    kBottom,
  };

  void WriteMarker(MarkerPosition position, uint32_t marker_value);
  uint32_t ReadMarker(MarkerPosition position) const;

  void WriteBeginCommandBufferMarker();
  void WriteEndCommandBufferMarker();
  void WriteBeginCommandExecutionMarker(uint32_t command_id);
  void WriteEndCommandExecutionMarker(uint32_t command_id);
};

using CommandBufferPtr = std::unique_ptr<CommandBuffer>;

}  // namespace gfr

#endif  // GFR_COMMAND_H
