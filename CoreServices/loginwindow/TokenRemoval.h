//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TokenRemoval : NSObject
{
    BOOL cssmInitialized;
    long long mTokenRemovalAction;
    struct cssm_subservice_uid mSubserviceUID;
}

+ (id)instance;
- (void)_readTokenRemovalActionPref;
- (BOOL)activateScreenSaverOnRemoval;
- (struct cssm_subservice_uid *)subserviceUID;
- (void)endWatch;
- (void)watch:(struct cssm_subservice_uid *)arg1;
- (void)registerToken:(struct AuthorizationOpaqueRef *)arg1;
- (void)dealloc;
- (id)init;

@end
