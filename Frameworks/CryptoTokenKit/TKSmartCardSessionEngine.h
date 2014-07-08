//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TKProtocolSmartCardSession.h"

@class TKSmartCardSlotEngine;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession>
{
    TKSmartCardSlotEngine *_slot;
    BOOL _terminated;
    BOOL _transmitting;
    BOOL _valid;
    CDUnknownBlockType _sessionRequestReply;
}

@property BOOL valid; // @synthesize valid=_valid;
@property(copy) CDUnknownBlockType sessionRequestReply; // @synthesize sessionRequestReply=_sessionRequestReply;
- (void).cxx_destruct;
- (void)dealloc;
- (void)terminate;
- (void)setSensitive:(BOOL)arg1;
- (void)sessionRequested:(CDUnknownBlockType)arg1;
- (void)transmit:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithSlot:(id)arg1;

@end
