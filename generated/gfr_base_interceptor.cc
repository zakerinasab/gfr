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
#include <vulkan/vulkan.h>
#include <stdio.h> // printf

#include "gfr_layer.h"
#include "gfr_base_interceptor.h"

namespace intercept
{

  void BaseInterceptor::PreDestroyBuffer(VkDevice device, VkBuffer buffer, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PostDestroyBuffer(VkDevice device, VkBuffer buffer, AllocationCallbacks pAllocator)
  {
  }

  VkResult BaseInterceptor::PreCreateCommandPool(VkDevice device, VkCommandPoolCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkCommandPool* pCommandPool)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostCreateCommandPool(VkDevice device, VkCommandPoolCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkCommandPool* pCommandPool, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreDestroyCommandPool(VkDevice device, VkCommandPool commandPool, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PostDestroyCommandPool(VkDevice device, VkCommandPool commandPool, AllocationCallbacks pAllocator)
  {
  }

  VkResult BaseInterceptor::PreResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PreAllocateCommandBuffers(VkDevice device, VkCommandBufferAllocateInfo const* pAllocateInfo, VkCommandBuffer* pCommandBuffers)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostAllocateCommandBuffers(VkDevice device, VkCommandBufferAllocateInfo const* pAllocateInfo, VkCommandBuffer* pCommandBuffers, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers)
  {
  }

  void BaseInterceptor::PostFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers)
  {
  }

  VkResult BaseInterceptor::PreBeginCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferBeginInfo const* pBeginInfo)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostBeginCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferBeginInfo const* pBeginInfo, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PreEndCommandBuffer(WrappedVkCommandBuffer* commandBuffer)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostEndCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PreResetCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferResetFlags flags)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostResetCommandBuffer(WrappedVkCommandBuffer* commandBuffer, VkCommandBufferResetFlags flags, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreCmdExecuteCommands(WrappedVkCommandBuffer* commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers)
  {
  }

  void BaseInterceptor::PostCmdExecuteCommands(WrappedVkCommandBuffer* commandBuffer, uint32_t commandBufferCount, VkCommandBuffer const* pCommandBuffers)
  {
  }

  void BaseInterceptor::PreCmdCopyBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions)
  {
  }

  void BaseInterceptor::PostCmdCopyBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, VkBufferCopy const* pRegions)
  {
  }

  void BaseInterceptor::PreCmdCopyImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions)
  {
  }

  void BaseInterceptor::PostCmdCopyImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageCopy const* pRegions)
  {
  }

  void BaseInterceptor::PreCmdBlitImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter)
  {
  }

  void BaseInterceptor::PostCmdBlitImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageBlit const* pRegions, VkFilter filter)
  {
  }

  void BaseInterceptor::PreCmdCopyBufferToImage(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions)
  {
  }

  void BaseInterceptor::PostCmdCopyBufferToImage(WrappedVkCommandBuffer* commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkBufferImageCopy const* pRegions)
  {
  }

  void BaseInterceptor::PreCmdCopyImageToBuffer(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions)
  {
  }

  void BaseInterceptor::PostCmdCopyImageToBuffer(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, VkBufferImageCopy const* pRegions)
  {
  }

  void BaseInterceptor::PreCmdUpdateBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData)
  {
  }

  void BaseInterceptor::PostCmdUpdateBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, void const* pData)
  {
  }

  void BaseInterceptor::PreCmdFillBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
  {
  }

  void BaseInterceptor::PostCmdFillBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data)
  {
  }

  void BaseInterceptor::PreCmdClearColorImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges)
  {
  }

  void BaseInterceptor::PostCmdClearColorImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearColorValue const* pColor, uint32_t rangeCount, VkImageSubresourceRange const* pRanges)
  {
  }

  void BaseInterceptor::PreCmdClearDepthStencilImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges)
  {
  }

  void BaseInterceptor::PostCmdClearDepthStencilImage(WrappedVkCommandBuffer* commandBuffer, VkImage image, VkImageLayout imageLayout, VkClearDepthStencilValue const* pDepthStencil, uint32_t rangeCount, VkImageSubresourceRange const* pRanges)
  {
  }

  void BaseInterceptor::PreCmdClearAttachments(WrappedVkCommandBuffer* commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects)
  {
  }

  void BaseInterceptor::PostCmdClearAttachments(WrappedVkCommandBuffer* commandBuffer, uint32_t attachmentCount, VkClearAttachment const* pAttachments, uint32_t rectCount, VkClearRect const* pRects)
  {
  }

  void BaseInterceptor::PreCmdResolveImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions)
  {
  }

  void BaseInterceptor::PostCmdResolveImage(WrappedVkCommandBuffer* commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, VkImageResolve const* pRegions)
  {
  }

  void BaseInterceptor::PreUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, VkWriteDescriptorSet const* pDescriptorWrites, uint32_t descriptorCopyCount, VkCopyDescriptorSet const* pDescriptorCopies)
  {
  }

  void BaseInterceptor::PostUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, VkWriteDescriptorSet const* pDescriptorWrites, uint32_t descriptorCopyCount, VkCopyDescriptorSet const* pDescriptorCopies)
  {
  }

  void BaseInterceptor::PreCmdBindDescriptorSets(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets)
  {
  }

  void BaseInterceptor::PostCmdBindDescriptorSets(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, VkDescriptorSet const* pDescriptorSets, uint32_t dynamicOffsetCount, uint32_t const* pDynamicOffsets)
  {
  }

  void BaseInterceptor::PreCmdPushConstants(WrappedVkCommandBuffer* commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues)
  {
  }

  void BaseInterceptor::PostCmdPushConstants(WrappedVkCommandBuffer* commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, void const* pValues)
  {
  }

  VkResult BaseInterceptor::PreCreateDevice(VkPhysicalDevice physicalDevice, VkDeviceCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkDevice* pDevice)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostCreateDevice(VkPhysicalDevice physicalDevice, VkDeviceCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkDevice* pDevice, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreDestroyDevice(VkDevice device, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PostDestroyDevice(VkDevice device, AllocationCallbacks pAllocator)
  {
  }

  VkResult BaseInterceptor::PostDeviceWaitIdle(VkDevice device, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreCmdBindIndexBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
  {
  }

  void BaseInterceptor::PostCmdBindIndexBuffer(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType)
  {
  }

  void BaseInterceptor::PreCmdBindVertexBuffers(WrappedVkCommandBuffer* commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets)
  {
  }

  void BaseInterceptor::PostCmdBindVertexBuffers(WrappedVkCommandBuffer* commandBuffer, uint32_t firstBinding, uint32_t bindingCount, VkBuffer const* pBuffers, VkDeviceSize const* pOffsets)
  {
  }

  void BaseInterceptor::PreCmdDraw(WrappedVkCommandBuffer* commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
  {
  }

  void BaseInterceptor::PostCmdDraw(WrappedVkCommandBuffer* commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance)
  {
  }

  void BaseInterceptor::PreCmdDrawIndexed(WrappedVkCommandBuffer* commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
  {
  }

  void BaseInterceptor::PostCmdDrawIndexed(WrappedVkCommandBuffer* commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance)
  {
  }

  void BaseInterceptor::PreCmdDrawIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PostCmdDrawIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PreCmdDrawIndexedIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PostCmdDrawIndexedIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PreCmdDispatch(WrappedVkCommandBuffer* commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
  {
  }

  void BaseInterceptor::PostCmdDispatch(WrappedVkCommandBuffer* commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
  {
  }

  void BaseInterceptor::PreCmdDispatchIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset)
  {
  }

  void BaseInterceptor::PostCmdDispatchIndirect(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset)
  {
  }

  VkResult BaseInterceptor::PreCreateInstance(VkInstanceCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkInstance* pInstance)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostCreateInstance(VkInstanceCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkInstance* pInstance, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreDestroyInstance(VkInstance instance, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PostDestroyInstance(VkInstance instance, AllocationCallbacks pAllocator)
  {
  }

  VkResult BaseInterceptor::PreCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, VkGraphicsPipelineCreateInfo const* pCreateInfos, AllocationCallbacks pAllocator, VkPipeline* pPipelines)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, VkGraphicsPipelineCreateInfo const* pCreateInfos, AllocationCallbacks pAllocator, VkPipeline* pPipelines, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PreCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, VkComputePipelineCreateInfo const* pCreateInfos, AllocationCallbacks pAllocator, VkPipeline* pPipelines)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, VkComputePipelineCreateInfo const* pCreateInfos, AllocationCallbacks pAllocator, VkPipeline* pPipelines, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreDestroyPipeline(VkDevice device, VkPipeline pipeline, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PostDestroyPipeline(VkDevice device, VkPipeline pipeline, AllocationCallbacks pAllocator)
  {
  }

  VkResult BaseInterceptor::PreCreateShaderModule(VkDevice device, VkShaderModuleCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkShaderModule* pShaderModule)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostCreateShaderModule(VkDevice device, VkShaderModuleCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkShaderModule* pShaderModule, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PostDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PreCmdBindPipeline(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
  {
  }

  void BaseInterceptor::PostCmdBindPipeline(WrappedVkCommandBuffer* commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline)
  {
  }

  void BaseInterceptor::PreCmdSetViewport(WrappedVkCommandBuffer* commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports)
  {
  }

  void BaseInterceptor::PostCmdSetViewport(WrappedVkCommandBuffer* commandBuffer, uint32_t firstViewport, uint32_t viewportCount, VkViewport const* pViewports)
  {
  }

  void BaseInterceptor::PreCmdSetScissor(WrappedVkCommandBuffer* commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors)
  {
  }

  void BaseInterceptor::PostCmdSetScissor(WrappedVkCommandBuffer* commandBuffer, uint32_t firstScissor, uint32_t scissorCount, VkRect2D const* pScissors)
  {
  }

  void BaseInterceptor::PreCmdSetLineWidth(WrappedVkCommandBuffer* commandBuffer, float lineWidth)
  {
  }

  void BaseInterceptor::PostCmdSetLineWidth(WrappedVkCommandBuffer* commandBuffer, float lineWidth)
  {
  }

  void BaseInterceptor::PreCmdSetDepthBias(WrappedVkCommandBuffer* commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
  {
  }

  void BaseInterceptor::PostCmdSetDepthBias(WrappedVkCommandBuffer* commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor)
  {
  }

  void BaseInterceptor::PreCmdSetBlendConstants(WrappedVkCommandBuffer* commandBuffer, float blendConstants[4])
  {
  }

  void BaseInterceptor::PostCmdSetBlendConstants(WrappedVkCommandBuffer* commandBuffer, float blendConstants[4])
  {
  }

  void BaseInterceptor::PreCmdSetDepthBounds(WrappedVkCommandBuffer* commandBuffer, float minDepthBounds, float maxDepthBounds)
  {
  }

  void BaseInterceptor::PostCmdSetDepthBounds(WrappedVkCommandBuffer* commandBuffer, float minDepthBounds, float maxDepthBounds)
  {
  }

  void BaseInterceptor::PreCmdSetStencilCompareMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
  {
  }

  void BaseInterceptor::PostCmdSetStencilCompareMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask)
  {
  }

  void BaseInterceptor::PreCmdSetStencilWriteMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
  {
  }

  void BaseInterceptor::PostCmdSetStencilWriteMask(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask)
  {
  }

  void BaseInterceptor::PreCmdSetStencilReference(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
  {
  }

  void BaseInterceptor::PostCmdSetStencilReference(WrappedVkCommandBuffer* commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference)
  {
  }

  VkResult BaseInterceptor::PostGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_val dataSize, void* pData, VkDeviceSize stride, VkQueryResultFlags flags, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreCmdBeginQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
  {
  }

  void BaseInterceptor::PostCmdBeginQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags)
  {
  }

  void BaseInterceptor::PreCmdEndQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query)
  {
  }

  void BaseInterceptor::PostCmdEndQuery(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t query)
  {
  }

  void BaseInterceptor::PreCmdResetQueryPool(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
  {
  }

  void BaseInterceptor::PostCmdResetQueryPool(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount)
  {
  }

  void BaseInterceptor::PreCmdWriteTimestamp(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
  {
  }

  void BaseInterceptor::PostCmdWriteTimestamp(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query)
  {
  }

  void BaseInterceptor::PreCmdCopyQueryPoolResults(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
  {
  }

  void BaseInterceptor::PostCmdCopyQueryPoolResults(WrappedVkCommandBuffer* commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags)
  {
  }

  void BaseInterceptor::PostGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue* pQueue)
  {
  }

  VkResult BaseInterceptor::PreQueueSubmit(VkQueue queue, uint32_t submitCount, VkSubmitInfo const* pSubmits, VkFence fence)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostQueueSubmit(VkQueue queue, uint32_t submitCount, VkSubmitInfo const* pSubmits, VkFence fence, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostQueueWaitIdle(VkQueue queue, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, VkBindSparseInfo const* pBindInfo, VkFence fence, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreCmdBeginRenderPass(WrappedVkCommandBuffer* commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents)
  {
  }

  void BaseInterceptor::PostCmdBeginRenderPass(WrappedVkCommandBuffer* commandBuffer, VkRenderPassBeginInfo const* pRenderPassBegin, VkSubpassContents contents)
  {
  }

  void BaseInterceptor::PreCmdNextSubpass(WrappedVkCommandBuffer* commandBuffer, VkSubpassContents contents)
  {
  }

  void BaseInterceptor::PostCmdNextSubpass(WrappedVkCommandBuffer* commandBuffer, VkSubpassContents contents)
  {
  }

  void BaseInterceptor::PreCmdEndRenderPass(WrappedVkCommandBuffer* commandBuffer)
  {
  }

  void BaseInterceptor::PostCmdEndRenderPass(WrappedVkCommandBuffer* commandBuffer)
  {
  }

  VkResult BaseInterceptor::PostGetFenceStatus(VkDevice device, VkFence fence, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostWaitForFences(VkDevice device, uint32_t fenceCount, VkFence const* pFences, VkBool32 waitAll, uint64_t timeout, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostCreateSemaphore(VkDevice device, VkSemaphoreCreateInfo const* pCreateInfo, AllocationCallbacks pAllocator, VkSemaphore* pSemaphore, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PostDestroySemaphore(VkDevice device, VkSemaphore semaphore, AllocationCallbacks pAllocator)
  {
  }

  void BaseInterceptor::PreCmdSetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
  {
  }

  void BaseInterceptor::PostCmdSetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
  {
  }

  void BaseInterceptor::PreCmdResetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
  {
  }

  void BaseInterceptor::PostCmdResetEvent(WrappedVkCommandBuffer* commandBuffer, VkEvent event, VkPipelineStageFlags stageMask)
  {
  }

  void BaseInterceptor::PreCmdWaitEvents(WrappedVkCommandBuffer* commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers)
  {
  }

  void BaseInterceptor::PostCmdWaitEvents(WrappedVkCommandBuffer* commandBuffer, uint32_t eventCount, VkEvent const* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers)
  {
  }

  void BaseInterceptor::PreCmdPipelineBarrier(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers)
  {
  }

  void BaseInterceptor::PostCmdPipelineBarrier(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, VkMemoryBarrier const* pMemoryBarriers, uint32_t bufferMemoryBarrierCount, VkBufferMemoryBarrier const* pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, VkImageMemoryBarrier const* pImageMemoryBarriers)
  {
  }

  void BaseInterceptor::PreCmdWriteBufferMarkerAMD(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker)
  {
  }

  void BaseInterceptor::PostCmdWriteBufferMarkerAMD(WrappedVkCommandBuffer* commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker)
  {
  }

  void BaseInterceptor::PreCmdDrawIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PostCmdDrawIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PreCmdDrawIndexedIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PostCmdDrawIndexedIndirectCountAMD(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  VkResult BaseInterceptor::PreDebugMarkerSetObjectNameEXT(VkDevice device, VkDebugMarkerObjectNameInfoEXT const* pNameInfo)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostDebugMarkerSetObjectNameEXT(VkDevice device, VkDebugMarkerObjectNameInfoEXT const* pNameInfo, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreCmdDebugMarkerBeginEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo)
  {
  }

  void BaseInterceptor::PostCmdDebugMarkerBeginEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo)
  {
  }

  void BaseInterceptor::PreCmdDebugMarkerEndEXT(WrappedVkCommandBuffer* commandBuffer)
  {
  }

  void BaseInterceptor::PostCmdDebugMarkerEndEXT(WrappedVkCommandBuffer* commandBuffer)
  {
  }

  void BaseInterceptor::PreCmdDebugMarkerInsertEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo)
  {
  }

  void BaseInterceptor::PostCmdDebugMarkerInsertEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugMarkerMarkerInfoEXT const* pMarkerInfo)
  {
  }

  VkResult BaseInterceptor::PreSetDebugUtilsObjectNameEXT(VkDevice device, VkDebugUtilsObjectNameInfoEXT const* pNameInfo)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostSetDebugUtilsObjectNameEXT(VkDevice device, VkDebugUtilsObjectNameInfoEXT const* pNameInfo, VkResult result)
  {
    return result;
  }

  void BaseInterceptor::PreCmdBeginDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo)
  {
  }

  void BaseInterceptor::PostCmdBeginDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo)
  {
  }

  void BaseInterceptor::PreCmdEndDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer)
  {
  }

  void BaseInterceptor::PostCmdEndDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer)
  {
  }

  void BaseInterceptor::PreCmdInsertDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo)
  {
  }

  void BaseInterceptor::PostCmdInsertDebugUtilsLabelEXT(WrappedVkCommandBuffer* commandBuffer, VkDebugUtilsLabelEXT const* pLabelInfo)
  {
  }

  void BaseInterceptor::PreCmdSetDeviceMaskKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask)
  {
  }

  void BaseInterceptor::PostCmdSetDeviceMaskKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask)
  {
  }

  void BaseInterceptor::PreCmdSetDeviceMask(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask)
  {
  }

  void BaseInterceptor::PostCmdSetDeviceMask(WrappedVkCommandBuffer* commandBuffer, uint32_t deviceMask)
  {
  }

  void BaseInterceptor::PreCmdDispatchBaseKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
  {
  }

  void BaseInterceptor::PostCmdDispatchBaseKHR(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
  {
  }

  void BaseInterceptor::PreCmdDispatchBase(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
  {
  }

  void BaseInterceptor::PostCmdDispatchBase(WrappedVkCommandBuffer* commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ)
  {
  }

  void BaseInterceptor::PreCmdDrawIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PostCmdDrawIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PreCmdDrawIndexedIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  void BaseInterceptor::PostCmdDrawIndexedIndirectCountKHR(WrappedVkCommandBuffer* commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countOffset, uint32_t maxDrawCount, uint32_t stride)
  {
  }

  VkResult BaseInterceptor::PostAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostQueuePresentKHR(VkQueue queue, VkPresentInfoKHR const* pPresentInfo, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostSignalSemaphoreKHR(VkDevice device, VkSemaphoreSignalInfoKHR const* pSignalInfo, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PreWaitSemaphoresKHR(VkDevice device, VkSemaphoreWaitInfoKHR const* pWaitInfo, uint64_t timeout)
  {
    return VK_SUCCESS;
  }

  VkResult BaseInterceptor::PostWaitSemaphoresKHR(VkDevice device, VkSemaphoreWaitInfoKHR const* pWaitInfo, uint64_t timeout, VkResult result)
  {
    return result;
  }

  VkResult BaseInterceptor::PostGetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t* pValue, VkResult result)
  {
    return result;
  }
} // end namespace intercept