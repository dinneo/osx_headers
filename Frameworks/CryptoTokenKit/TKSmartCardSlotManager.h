//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TKProtocolSlotClientNotification.h"

@class NSArray, NSMutableDictionary;

@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification>
{
    NSMutableDictionary *_endpoints;
    NSArray *_slotNames;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)getSlotWithName:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(CDUnknownBlockType)arg4;
@property(readonly) NSArray *slotNames;
- (id)init;

@end

