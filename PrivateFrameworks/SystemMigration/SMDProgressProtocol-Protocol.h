//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SystemMigrationDaemonProtocol.h"

@protocol SMDProgressProtocol <SystemMigrationDaemonProtocol>
- (void)acknowledgeCompletedRequest;
- (void)cancelCurrentRequest;
- (void)currentIncompatibleApps:(void (^)(NSArray *))arg1;
- (void)currentMigrationState:(void (^)(unsigned long long, unsigned long long, unsigned long long))arg1;
- (void)sourceSystemForCurrentMigration:(void (^)(id, unsigned long long))arg1;
@end

