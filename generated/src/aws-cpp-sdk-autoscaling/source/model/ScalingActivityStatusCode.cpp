﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/ScalingActivityStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace ScalingActivityStatusCodeMapper
      {

        static const int PendingSpotBidPlacement_HASH = HashingUtils::HashString("PendingSpotBidPlacement");
        static const int WaitingForSpotInstanceRequestId_HASH = HashingUtils::HashString("WaitingForSpotInstanceRequestId");
        static const int WaitingForSpotInstanceId_HASH = HashingUtils::HashString("WaitingForSpotInstanceId");
        static const int WaitingForInstanceId_HASH = HashingUtils::HashString("WaitingForInstanceId");
        static const int PreInService_HASH = HashingUtils::HashString("PreInService");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int WaitingForELBConnectionDraining_HASH = HashingUtils::HashString("WaitingForELBConnectionDraining");
        static const int MidLifecycleAction_HASH = HashingUtils::HashString("MidLifecycleAction");
        static const int WaitingForInstanceWarmup_HASH = HashingUtils::HashString("WaitingForInstanceWarmup");
        static const int Successful_HASH = HashingUtils::HashString("Successful");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int WaitingForConnectionDraining_HASH = HashingUtils::HashString("WaitingForConnectionDraining");


        ScalingActivityStatusCode GetScalingActivityStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PendingSpotBidPlacement_HASH)
          {
            return ScalingActivityStatusCode::PendingSpotBidPlacement;
          }
          else if (hashCode == WaitingForSpotInstanceRequestId_HASH)
          {
            return ScalingActivityStatusCode::WaitingForSpotInstanceRequestId;
          }
          else if (hashCode == WaitingForSpotInstanceId_HASH)
          {
            return ScalingActivityStatusCode::WaitingForSpotInstanceId;
          }
          else if (hashCode == WaitingForInstanceId_HASH)
          {
            return ScalingActivityStatusCode::WaitingForInstanceId;
          }
          else if (hashCode == PreInService_HASH)
          {
            return ScalingActivityStatusCode::PreInService;
          }
          else if (hashCode == InProgress_HASH)
          {
            return ScalingActivityStatusCode::InProgress;
          }
          else if (hashCode == WaitingForELBConnectionDraining_HASH)
          {
            return ScalingActivityStatusCode::WaitingForELBConnectionDraining;
          }
          else if (hashCode == MidLifecycleAction_HASH)
          {
            return ScalingActivityStatusCode::MidLifecycleAction;
          }
          else if (hashCode == WaitingForInstanceWarmup_HASH)
          {
            return ScalingActivityStatusCode::WaitingForInstanceWarmup;
          }
          else if (hashCode == Successful_HASH)
          {
            return ScalingActivityStatusCode::Successful;
          }
          else if (hashCode == Failed_HASH)
          {
            return ScalingActivityStatusCode::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return ScalingActivityStatusCode::Cancelled;
          }
          else if (hashCode == WaitingForConnectionDraining_HASH)
          {
            return ScalingActivityStatusCode::WaitingForConnectionDraining;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingActivityStatusCode>(hashCode);
          }

          return ScalingActivityStatusCode::NOT_SET;
        }

        Aws::String GetNameForScalingActivityStatusCode(ScalingActivityStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ScalingActivityStatusCode::PendingSpotBidPlacement:
            return "PendingSpotBidPlacement";
          case ScalingActivityStatusCode::WaitingForSpotInstanceRequestId:
            return "WaitingForSpotInstanceRequestId";
          case ScalingActivityStatusCode::WaitingForSpotInstanceId:
            return "WaitingForSpotInstanceId";
          case ScalingActivityStatusCode::WaitingForInstanceId:
            return "WaitingForInstanceId";
          case ScalingActivityStatusCode::PreInService:
            return "PreInService";
          case ScalingActivityStatusCode::InProgress:
            return "InProgress";
          case ScalingActivityStatusCode::WaitingForELBConnectionDraining:
            return "WaitingForELBConnectionDraining";
          case ScalingActivityStatusCode::MidLifecycleAction:
            return "MidLifecycleAction";
          case ScalingActivityStatusCode::WaitingForInstanceWarmup:
            return "WaitingForInstanceWarmup";
          case ScalingActivityStatusCode::Successful:
            return "Successful";
          case ScalingActivityStatusCode::Failed:
            return "Failed";
          case ScalingActivityStatusCode::Cancelled:
            return "Cancelled";
          case ScalingActivityStatusCode::WaitingForConnectionDraining:
            return "WaitingForConnectionDraining";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingActivityStatusCodeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
