//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ABFaceTimeService <NSObject>
- (void)makeFaceTimeCallWithEndpoint:(NSString *)arg1 isAudio:(BOOL)arg2;
- (void)makeFaceTimeCallWithContactIdentifier:(NSString *)arg1 isAudio:(BOOL)arg2;
- (void)startTelephonySupportCheck;
- (void)startiMessageAvailabilityCheckForEndpoint:(NSString *)arg1 property:(NSString *)arg2;
- (void)startFaceTimeAudioAvailabilityCheckForContactIdentifier:(NSString *)arg1;
- (void)startFaceTimeVideoAvailabilityCheckForContactIdentifier:(NSString *)arg1;
@end
