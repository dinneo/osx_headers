//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface SPCRemoteMessageServer : NSObject
{
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    id <_SPCRemoteMessageService> _remoteProxy;
    NSXPCConnection *_connection;
}

+ (id)sharedServer;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) id <_SPCRemoteMessageService> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (void)sendMessageToClientsWithIdentifier:(id)arg1 info:(id)arg2;
- (void)addClient:(id)arg1 withIdentifier:(id)arg2;
- (BOOL)ensureConnection;
- (void)dealloc;
- (id)init;

@end

