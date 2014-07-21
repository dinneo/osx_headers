//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TICloudAccountManager : NSObject
{
    struct TriStateBool fUserSharingDocuments;
    struct TriStateBool fUserIsLoggedIn;
    struct TriStateBool fUserHasDeclinedUpgrade;
}

+ (_Bool)showICloudNode;
+ (_Bool)userHasDeclinedUpgrade;
+ (_Bool)userIsLoggedInICloud;
+ (_Bool)userIsSynchingDocuments;
+ (id)singleton;
+ (void)postStatusChange;
- (id).cxx_construct;
- (_Bool)isLoggedInICloud;
- (_Bool)hasDeclinedUpgrade;
- (_Bool)isSynchingDocuments;
- (void)iCloudAccountAvailabilityChanged:(id)arg1;
- (_Bool)computeLoginState;
- (void)dealloc;
- (id)init;

@end

