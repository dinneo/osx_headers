//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

__attribute__((visibility("hidden")))
@interface CUIWindowFrameLayer : CALayer
{
    CALayer *_titlebarGradientLayer;
    CALayer *_titlebarBackgroundLayer;
    CALayer *_borderLayer;
    CALayer *_overlayLayer;
    CALayer *_titlebarSeparatorLayer;
    CALayer *_bottomGradientLayer;
    CALayer *_bottomDividerLayer;
}

@property CALayer *bottomDividerLayer; // @synthesize bottomDividerLayer=_bottomDividerLayer;
@property CALayer *bottomGradientLayer; // @synthesize bottomGradientLayer=_bottomGradientLayer;
@property CALayer *titlebarSeparatorLayer; // @synthesize titlebarSeparatorLayer=_titlebarSeparatorLayer;
@property CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property CALayer *titlebarBackgroundLayer; // @synthesize titlebarBackgroundLayer=_titlebarBackgroundLayer;
@property CALayer *titlebarGradientLayer; // @synthesize titlebarGradientLayer=_titlebarGradientLayer;
- (id)layerNamed:(id)arg1 makeIfNecessary:(BOOL)arg2;
- (id)makeAndAddSublayer;
- (id)addAndSetupSublayer:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

