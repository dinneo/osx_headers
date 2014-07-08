//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPLEngineTransportTask.h"

@class CPLCloudKitTransport, CPLCloudKitTransportCancelState, NSObject<OS_dispatch_queue>, NSString;

@interface CPLCloudKitTransportTask : NSObject <CPLEngineTransportTask>
{
    BOOL foreground;
    CPLCloudKitTransport *_transport;
    NSObject<OS_dispatch_queue> *_queue;
    CPLCloudKitTransportCancelState *_cancelState;
}

@property(retain, nonatomic) CPLCloudKitTransportCancelState *cancelState; // @synthesize cancelState=_cancelState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CPLCloudKitTransport *transport; // @synthesize transport=_transport;
@property(nonatomic) BOOL foreground; // @synthesize foreground;
- (void).cxx_destruct;
- (void)cancel;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
