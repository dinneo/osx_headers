//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class BrowserCoachMarkView, NSAnimation, NSString, NSTimer, NSWindow;

@interface BrowserCoachMark : NSObject <NSAnimationDelegate>
{
    NSWindow *_coachMarkWindow;
    BrowserCoachMarkView *_coachMarkView;
    struct CGAffineTransform _prePulseTransform;
    NSAnimation *_pulseAnimation;
    NSTimer *_startFadeOutTimer;
    NSAnimation *_fadeOutAnimation;
    BOOL _expired;
}

- (void)animationDidEnd:(id)arg1;
- (struct CGRect)rectOnScreen;
- (void)expire;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 contentImage:(id)arg2 contentImageOffset:(struct CGPoint)arg3 forView:(id)arg4 selfDestruct:(BOOL)arg5;
- (void)_targetViewDidMoveOrChangeSize:(id)arg1;
- (struct CGPoint)_coreGraphicsScreenPointForAppKitScreenPoint:(struct CGPoint)arg1;
- (void)_startFadeOut:(id)arg1;
- (void)_startPulse;
- (void)_animatePulse;
- (void)_animateFadeOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

