//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTextField, NSTimer;

@interface CountdownController : NSObject
{
    NSTextField *_countdownTextField;
    NSString *_baseFormatString;
    NSString *_timerFormatString;
    long long _numberOfSecondsRemaining;
    id _delegate;
    long long _calculatedTimeStringIndex;
    NSTimer *_countdownTimer;
}

- (void)stopCountdown;
- (void)startCountDown;
- (void)countDownToLogout:(id)arg1;
- (void)dealloc;
- (id)initWithForTextField:(id)arg1 baseFormatString:(id)arg2 initialSeconds:(long long)arg3 delegate:(id)arg4;
- (id)init;
- (void)displayCurrentCountdownTime;
- (void)updateTimeFormatString;

@end

