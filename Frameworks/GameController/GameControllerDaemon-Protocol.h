//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@protocol GameControllerDaemon <NSObject>
- (void)requestConnectedHosts;
- (void)startBonjourService;
- (void)startForwardingToApplicationNamed:(NSString *)arg1 pid:(NSNumber *)arg2 bundlePath:(NSString *)arg3;
- (void)ping;
@end
