//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIServiceConnection.h>

@class NSObject<OS_xpc_object>;

@interface RWIServiceXPCConnection : RWIServiceConnection
{
    NSObject<OS_xpc_object> *_connection;
}

- (void)sendMessage:(id)arg1;
- (void)_handleXPCEvent:(id)arg1;
- (void)dealloc;
- (BOOL)isConnected;
- (id)initWithMachine:(id)arg1 xpcServiceName:(const char *)arg2 delegate:(id)arg3;

@end
