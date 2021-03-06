//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, SSHIPCClient;

@protocol SSHIPCProtocolHandler
@property(nonatomic) SSHIPCClient *sshIPCClient;
- (void)disconnectSSH;
- (void)signalFatalErrorEncountered;

@optional
- (BOOL)supportsService:(NSString *)arg1;
- (void)sendClientVersion:(NSString *)arg1;
- (NSString *)readGreetingString;
- (void)handleReceivedBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)handleReceivedLineOrEOF:(NSString *)arg1;
- (void)connectionClosed;
@end

