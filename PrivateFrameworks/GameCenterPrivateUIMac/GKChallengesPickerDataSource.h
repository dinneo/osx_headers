//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKFriendsSplittingDataSource.h>

@class GKChallenge;

@interface GKChallengesPickerDataSource : GKFriendsSplittingDataSource
{
    GKChallenge *_challenge;
}

@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
- (BOOL)canSelectPlayerInfo:(id)arg1;
- (void)configureDataSource;
- (void)dealloc;
- (id)initWithChallenge:(id)arg1;

@end
