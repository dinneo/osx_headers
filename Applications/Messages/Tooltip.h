//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer, NSView, NSWindow;

@interface Tooltip : NSObject
{
    NSView *_view;
    BOOL _fadingIn;
    NSTimer *_animationTimer;
    NSDate *_animationStartDate;
    struct CGPoint _previousPosition;
    NSWindow *_window;
}

@property(retain) NSWindow *window; // @synthesize window=_window;
- (void)cleanupAfterClose;
- (void)hideWindowImmediately;
- (void)showWindowImmediately;
- (void)closeImmediately;
- (void)close;
- (BOOL)isVisible;
- (void)open;
- (void)_fadeIn:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)_animationStep:(id)arg1;
- (void)_finishAnimation;
- (void)_setAnimationTimer;
- (void)_stopAnimationTimer;
- (void)_setAnimationStartDate;
- (void)positionAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)initWithNibNamed:(id)arg1;
- (void)awakeFromNib;

@end

