//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TKProtocolSlotNotification.h"

@class TKSmartCardSlot;

@interface TKSmartCardSlotProxy : NSObject <TKProtocolSlotNotification>
{
    TKSmartCardSlot *_slot;
}

- (void).cxx_destruct;
- (id)initWithSlot:(id)arg1;
- (void)notifyWithParameters:(id)arg1;

@end

