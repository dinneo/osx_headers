//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MZBookKeeperClampsController : NSObject
{
    NSMutableDictionary *_transactionClamps;
    double _dsidCheckTimestamp;
    double _authenticationNeededTimestamp;
    double _userAcceptedSyncTimestamp;
    double _networkingBlockedUntil;
    double _backOffUntil;
    double _userCancelledSignInBackOffUntil;
}

@property double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property double dsidCheckTimestamp; // @synthesize dsidCheckTimestamp=_dsidCheckTimestamp;
@property(retain, nonatomic) NSMutableDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
- (void).cxx_destruct;
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;
- (BOOL)_canScheduleTransactionBasedOnDSIDCheck:(id)arg1 error:(id *)arg2;
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;
- (BOOL)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;
- (id)_keyForTransaction:(id)arg1;
- (double)_rightNow;
- (BOOL)isNetworkingBlocked;
- (void)clearNetworkingBlocked;
- (void)setNetworkingBlocked;
- (void)clearBackOff;
- (void)backOffForTimeInterval:(double)arg1;
- (void)clearUserCancelledSignIn;
- (void)setUserCancelledSignIn;
- (BOOL)hasUserRecentlyAcceptedSync;
- (void)clearUserAcceptedSyncTimestamp;
- (void)setUserAcceptedSyncTimestamp;
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;
- (void)clearAuthenticationRequest;
- (void)setAuthenticationRequest;
- (void)clearDSIDCheckTimestamp;
- (void)setDSIDCheckTimestamp;
- (void)clearTimestampForTransaction:(id)arg1;
- (void)setTimestampForTransaction:(id)arg1;
- (void)reset;
- (BOOL)canScheduleTransaction:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)init;

@end
