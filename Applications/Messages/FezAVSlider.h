//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class NSImage;

@interface FezAVSlider : NSControl
{
    id _delegate;
    double _minValue;
    double _maxValue;
    double _leftCapWidth;
    double _rightCapWidth;
    NSImage *_backgroundImage;
    NSImage *_thumbImage;
    BOOL _drawsBorder;
    BOOL _mouseDown;
}

+ (Class)cellClass;
@property(nonatomic) BOOL drawsBorder; // @synthesize drawsBorder=_drawsBorder;
@property(nonatomic) double rightCapWidth; // @synthesize rightCapWidth=_rightCapWidth;
@property(nonatomic) double leftCapWidth; // @synthesize leftCapWidth=_leftCapWidth;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)mouseDown:(id)arg1;
- (void)_trackMouseFrom:(struct CGPoint)arg1 trackWidth:(double)arg2;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)_thumbRect;
- (void)_generateThumbImage:(struct CGRect)arg1;
- (void)_generateBackgroundImage:(struct CGRect)arg1;
- (void)dealloc;
- (void)_clearImages;
- (void)awakeFromNib;

@end
