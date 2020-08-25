/*
 * Copyright (C) 2015 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * THIS FILE WAS GENERATED BY apic. DO NOT EDIT.
 */

// clang-format off
#include "command_common.h"

const char *Command::GetCommandName(const Command &cmd) {
  switch (cmd.type) {
    default:
    case Command::Type::kUnknown: return "Unknown";
    case Command::Type::kBeginCommandBuffer: return "vkBeginCommandBuffer";
    case Command::Type::kEndCommandBuffer: return "vkEndCommandBuffer";
    case Command::Type::kResetCommandBuffer: return "vkResetCommandBuffer";
    case Command::Type::kExecuteCommands: return "vkCmdExecuteCommands";
    case Command::Type::kCopyBuffer: return "vkCmdCopyBuffer";
    case Command::Type::kCopyImage: return "vkCmdCopyImage";
    case Command::Type::kBlitImage: return "vkCmdBlitImage";
    case Command::Type::kCopyBufferToImage: return "vkCmdCopyBufferToImage";
    case Command::Type::kCopyImageToBuffer: return "vkCmdCopyImageToBuffer";
    case Command::Type::kUpdateBuffer: return "vkCmdUpdateBuffer";
    case Command::Type::kFillBuffer: return "vkCmdFillBuffer";
    case Command::Type::kClearColorImage: return "vkCmdClearColorImage";
    case Command::Type::kClearDepthStencilImage: return "vkCmdClearDepthStencilImage";
    case Command::Type::kClearAttachments: return "vkCmdClearAttachments";
    case Command::Type::kResolveImage: return "vkCmdResolveImage";
    case Command::Type::kBindDescriptorSets: return "vkCmdBindDescriptorSets";
    case Command::Type::kPushConstants: return "vkCmdPushConstants";
    case Command::Type::kBindIndexBuffer: return "vkCmdBindIndexBuffer";
    case Command::Type::kBindVertexBuffers: return "vkCmdBindVertexBuffers";
    case Command::Type::kDraw: return "vkCmdDraw";
    case Command::Type::kDrawIndexed: return "vkCmdDrawIndexed";
    case Command::Type::kDrawIndirect: return "vkCmdDrawIndirect";
    case Command::Type::kDrawIndexedIndirect: return "vkCmdDrawIndexedIndirect";
    case Command::Type::kDispatch: return "vkCmdDispatch";
    case Command::Type::kDispatchIndirect: return "vkCmdDispatchIndirect";
    case Command::Type::kBindPipeline: return "vkCmdBindPipeline";
    case Command::Type::kSetViewport: return "vkCmdSetViewport";
    case Command::Type::kSetScissor: return "vkCmdSetScissor";
    case Command::Type::kSetLineWidth: return "vkCmdSetLineWidth";
    case Command::Type::kSetDepthBias: return "vkCmdSetDepthBias";
    case Command::Type::kSetBlendConstants: return "vkCmdSetBlendConstants";
    case Command::Type::kSetDepthBounds: return "vkCmdSetDepthBounds";
    case Command::Type::kSetStencilCompareMask: return "vkCmdSetStencilCompareMask";
    case Command::Type::kSetStencilWriteMask: return "vkCmdSetStencilWriteMask";
    case Command::Type::kSetStencilReference: return "vkCmdSetStencilReference";
    case Command::Type::kBeginQuery: return "vkCmdBeginQuery";
    case Command::Type::kEndQuery: return "vkCmdEndQuery";
    case Command::Type::kResetQueryPool: return "vkCmdResetQueryPool";
    case Command::Type::kWriteTimestamp: return "vkCmdWriteTimestamp";
    case Command::Type::kCopyQueryPoolResults: return "vkCmdCopyQueryPoolResults";
    case Command::Type::kBeginRenderPass: return "vkCmdBeginRenderPass";
    case Command::Type::kNextSubpass: return "vkCmdNextSubpass";
    case Command::Type::kEndRenderPass: return "vkCmdEndRenderPass";
    case Command::Type::kSetEvent: return "vkCmdSetEvent";
    case Command::Type::kResetEvent: return "vkCmdResetEvent";
    case Command::Type::kWaitEvents: return "vkCmdWaitEvents";
    case Command::Type::kPipelineBarrier: return "vkCmdPipelineBarrier";
    case Command::Type::kWriteBufferMarkerAMD: return "vkCmdWriteBufferMarkerAMD";
    case Command::Type::kDrawIndirectCountAMD: return "vkCmdDrawIndirectCountAMD";
    case Command::Type::kDrawIndexedIndirectCountAMD: return "vkCmdDrawIndexedIndirectCountAMD";
    case Command::Type::kDebugMarkerBeginEXT: return "vkCmdDebugMarkerBeginEXT";
    case Command::Type::kDebugMarkerEndEXT: return "vkCmdDebugMarkerEndEXT";
    case Command::Type::kDebugMarkerInsertEXT: return "vkCmdDebugMarkerInsertEXT";
    case Command::Type::kBeginDebugUtilsLabelEXT: return "vkCmdBeginDebugUtilsLabelEXT";
    case Command::Type::kEndDebugUtilsLabelEXT: return "vkCmdEndDebugUtilsLabelEXT";
    case Command::Type::kInsertDebugUtilsLabelEXT: return "vkCmdInsertDebugUtilsLabelEXT";
    case Command::Type::kSetDeviceMaskKHR: return "vkCmdSetDeviceMaskKHR";
    case Command::Type::kSetDeviceMask: return "vkCmdSetDeviceMask";
    case Command::Type::kDispatchBaseKHR: return "vkCmdDispatchBaseKHR";
    case Command::Type::kDispatchBase: return "vkCmdDispatchBase";
    case Command::Type::kDrawIndirectCountKHR: return "vkCmdDrawIndirectCountKHR";
    case Command::Type::kDrawIndexedIndirectCountKHR: return "vkCmdDrawIndexedIndirectCountKHR";
  }
}