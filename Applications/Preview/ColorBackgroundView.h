//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSVisualEffectView.h"

@class CALayer;

@interface ColorBackgroundView : NSVisualEffectView
{
    BOOL _drawsTopBorder;
    BOOL _drawsBottomBorder;
    CALayer *_topBorder;
    CALayer *_bottomBorder;
}

@property(retain, nonatomic) CALayer *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) CALayer *topBorder; // @synthesize topBorder=_topBorder;
@property(nonatomic) BOOL drawsBottomBorder; // @synthesize drawsBottomBorder=_drawsBottomBorder;
@property(nonatomic) BOOL drawsTopBorder; // @synthesize drawsTopBorder=_drawsTopBorder;
- (void)dealloc;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
