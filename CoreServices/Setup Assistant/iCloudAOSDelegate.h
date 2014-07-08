//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface iCloudAOSDelegate : NSObject
{
    BOOL _done;
    BOOL _succeeded;
    NSDictionary *_userInfo;
    NSDictionary *_delegatesResponseDict;
    BOOL _needsRepair;
}

@property(readonly) BOOL needsRepair; // @synthesize needsRepair=_needsRepair;
@property(readonly) NSDictionary *delegatesResponseDict; // @synthesize delegatesResponseDict=_delegatesResponseDict;
@property(readonly) BOOL succeeded; // @synthesize succeeded=_succeeded;
- (void)_stopObservingAOSNotificationsForOperation:(id)arg1;
- (void)_startObservingAOSNotificationsForOperation:(id)arg1;
- (void)_processAuthenticateResponse;
- (void)_validateNotOK:(id)arg1;
- (void)_validateOK:(id)arg1;
- (BOOL)completeSetupWithUsername:(id)arg1 password:(id)arg2 icloudDictionary:(id)arg3 selectedServices:(id)arg4 justTheAccountAndKVS:(BOOL)arg5 window:(id)arg6 error:(id *)arg7;
- (BOOL)completeSetupWithUsername:(id)arg1 password:(id)arg2 icloudDictionary:(id)arg3 selectedServices:(id)arg4 window:(id)arg5 error:(id *)arg6;
- (BOOL)signInWithUsername:(id)arg1 andPassword:(id)arg2 additionalDelegates:(id)arg3 omittingDelegates:(id)arg4 error:(id *)arg5;
- (BOOL)validateiCloudUsername:(id)arg1 andPassword:(id)arg2 tosVersions:(id)arg3 delegates:(id)arg4 error:(id *)arg5;
- (BOOL)validateiCloudUsername:(id)arg1 andPassword:(id)arg2 error:(id *)arg3;
- (void)dealloc;

@end
