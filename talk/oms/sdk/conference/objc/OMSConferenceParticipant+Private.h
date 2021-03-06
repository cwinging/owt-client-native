// Copyright (C) <2018> Intel Corporation
//
// SPDX-License-Identifier: Apache-2.0
#import "talk/oms/sdk/include/objc/OMS/OMSConferenceParticipant.h"
#include "talk/oms/sdk/include/cpp/oms/conference/conferenceclient.h"
/// This class represent an attendee in a conference.
RTC_EXPORT
@interface OMSConferenceParticipant ()
@property(nonatomic, readonly)
    std::shared_ptr<const oms::conference::Participant>
        nativeParticipant;
- (instancetype)initWithNativeParticipant:
    (std::shared_ptr<const oms::conference::Participant>)participant;
@end
