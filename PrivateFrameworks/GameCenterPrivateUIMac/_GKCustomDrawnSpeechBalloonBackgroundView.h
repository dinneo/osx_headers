//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSColor;

@interface _GKCustomDrawnSpeechBalloonBackgroundView : NSView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    NSColor *_balloonColor;
}

@property(retain, nonatomic) NSColor *balloonColor; // @synthesize balloonColor=_balloonColor;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
@property(nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
- (void)tintColorDidChange;
- (CDStruct_3c058996)alignmentRectInsets;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGGradient *)_gradientForColor:(id)arg1;
- (id)speechBalloonMaskForRect:(struct CGRect)arg1;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (id)initWithFrame:(struct CGRect)arg1;

@end

