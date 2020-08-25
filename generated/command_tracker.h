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
#ifndef COMMAND_TRACKER_HEADER
#define COMMAND_TRACKER_HEADER

#include <vector>
#include <iostream>
#include <vulkan/vulkan.h>

#include "command_recorder.h"

class CommandTracker
{
  public:
  void Reset();
  void SetNameResolver(std::ostream &os, const class ObjectInfoDB *name_resolver);
  void PrintCommandParameters(std::ostream &os, const Command &cmd, const std::string& indent);

  const std::vector<Command> &GetCommands() const { return commands_; }
  std::vector<Command> &GetCommands() { return commands_; }

  void TrackPreBeginCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferBeginInfo const* pBeginInfo);
  void TrackPostBeginCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferBeginInfo const* pBeginInfo);
  void TrackPreEndCommandBuffer(VkCommandBuffer commandBuffer);
  void TrackPostEndCommandBuffer(VkCommandBuffer commandBuffer);
  void TrackPreResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
  void TrackPostResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags);
  void TrackPreCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers);
  void TrackPostCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers);
  void TrackPreCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions);
  void TrackPostCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions);
  void TrackPreCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions);
  void TrackPostCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions);
  void TrackPreCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter);
  void TrackPostCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter);
  void TrackPreCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions);
  void TrackPostCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions);
  void TrackPreCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions);
  void TrackPostCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions);
  void TrackPreCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData);
  void TrackPostCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData);
  void TrackPreCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
  void TrackPostCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data);
  void TrackPreCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
  void TrackPostCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
  void TrackPreCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
  void TrackPostCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges);
  void TrackPreCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects);
  void TrackPostCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects);
  void TrackPreCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions);
  void TrackPostCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions);
  void TrackPreCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets);
  void TrackPostCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets);
  void TrackPreCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues);
  void TrackPostCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues);
  void TrackPreCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
  void TrackPostCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType);
  void TrackPreCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets);
  void TrackPostCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets);
  void TrackPreCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
  void TrackPostCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance);
  void TrackPreCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
  void TrackPostCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance);
  void TrackPreCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
  void TrackPostCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
  void TrackPreCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
  void TrackPostCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride);
  void TrackPreCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void TrackPostCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void TrackPreCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
  void TrackPostCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset);
  void TrackPreCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
  void TrackPostCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline);
  void TrackPreCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports);
  void TrackPostCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports);
  void TrackPreCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors);
  void TrackPostCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors);
  void TrackPreCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth);
  void TrackPostCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth);
  void TrackPreCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
  void TrackPostCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor);
  void TrackPreCmdSetBlendConstants(VkCommandBuffer commandBuffer, float blendConstants[4]);
  void TrackPostCmdSetBlendConstants(VkCommandBuffer commandBuffer, float blendConstants[4]);
  void TrackPreCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
  void TrackPostCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds);
  void TrackPreCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
  void TrackPostCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask);
  void TrackPreCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
  void TrackPostCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask);
  void TrackPreCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
  void TrackPostCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference);
  void TrackPreCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
  void TrackPostCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags);
  void TrackPreCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
  void TrackPostCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query);
  void TrackPreCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
  void TrackPostCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount);
  void TrackPreCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
  void TrackPostCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query);
  void TrackPreCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
  void TrackPostCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags);
  void TrackPreCmdBeginRenderPass(VkCommandBuffer commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents);
  void TrackPostCmdBeginRenderPass(VkCommandBuffer commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents);
  void TrackPreCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents);
  void TrackPostCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents);
  void TrackPreCmdEndRenderPass(VkCommandBuffer commandBuffer);
  void TrackPostCmdEndRenderPass(VkCommandBuffer commandBuffer);
  void TrackPreCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
  void TrackPostCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
  void TrackPreCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
  void TrackPostCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask);
  void TrackPreCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
  void TrackPostCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
  void TrackPreCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
  void TrackPostCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers);
  void TrackPreCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
  void TrackPostCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker);
  void TrackPreCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPostCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPreCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPostCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPreCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
  void TrackPostCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
  void TrackPreCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer);
  void TrackPostCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer);
  void TrackPreCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
  void TrackPostCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo);
  void TrackPreCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
  void TrackPostCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
  void TrackPreCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer);
  void TrackPostCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer);
  void TrackPreCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
  void TrackPostCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo);
  void TrackPreCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask);
  void TrackPostCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask);
  void TrackPreCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask);
  void TrackPostCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask);
  void TrackPreCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void TrackPostCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void TrackPreCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void TrackPostCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ);
  void TrackPreCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPostCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPreCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);
  void TrackPostCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride);

  private:
  void PrintBeginCommandBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintEndCommandBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintResetCommandBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdExecuteCommands(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdCopyBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdCopyImage(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBlitImage(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdCopyBufferToImage(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdCopyImageToBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdUpdateBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdFillBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdClearColorImage(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdClearDepthStencilImage(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdClearAttachments(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdResolveImage(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBindDescriptorSets(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdPushConstants(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBindIndexBuffer(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBindVertexBuffers(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDraw(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndexed(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndirect(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndexedIndirect(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDispatch(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDispatchIndirect(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBindPipeline(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetViewport(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetScissor(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetLineWidth(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetDepthBias(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetBlendConstants(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetDepthBounds(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetStencilCompareMask(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetStencilWriteMask(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetStencilReference(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBeginQuery(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdEndQuery(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdResetQueryPool(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdWriteTimestamp(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdCopyQueryPoolResults(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBeginRenderPass(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdNextSubpass(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdEndRenderPass(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetEvent(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdResetEvent(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdWaitEvents(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdPipelineBarrier(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdWriteBufferMarkerAMD(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndirectCountAMD(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndexedIndirectCountAMD(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDebugMarkerBeginEXT(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDebugMarkerEndEXT(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDebugMarkerInsertEXT(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdBeginDebugUtilsLabelEXT(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdEndDebugUtilsLabelEXT(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdInsertDebugUtilsLabelEXT(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetDeviceMaskKHR(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdSetDeviceMask(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDispatchBaseKHR(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDispatchBase(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndirectCountKHR(std::ostream &os, const Command &cmd, const std::string& indent);
  void PrintCmdDrawIndexedIndirectCountKHR(std::ostream &os, const Command &cmd, const std::string& indent);

  std::vector<Command> commands_;
  CommandRecorder recorder_;
};
#endif // COMMAND_TRACKER_HEADER