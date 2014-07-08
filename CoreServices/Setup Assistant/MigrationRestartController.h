//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MigrationHiCloudViewController.h"

@class NSString, NSTimer;

@interface MigrationRestartController : MigrationHiCloudViewController
{
    unsigned long long remainingSeconds;
    NSString *countdownText;
    NSString *postRestartText;
    NSTimer *_restartTimer;
}

@property(retain) NSTimer *restartTimer; // @synthesize restartTimer=_restartTimer;
@property(retain) NSString *postRestartText; // @synthesize postRestartText;
@property(retain) NSString *countdownText; // @synthesize countdownText;
- (void)restartNow:(id)arg1;
- (void)restartConfirmationTimerDidFire:(id)arg1;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
