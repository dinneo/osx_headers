//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSArrayController;

@interface PVAnnotationsTableView : NSTableView
{
    NSArrayController *_tableContentController;
    double _targetWidth;
}

@property double targetWidth; // @synthesize targetWidth=_targetWidth;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)keyDown:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)_hasSourceListBackground;
- (BOOL)_shouldAdjustPatternPhase;
- (void)drawGridInClipRect:(struct CGRect)arg1;
- (void)renewGState;
- (void)commonInit;
- (void)awakeFromNib;
- (id)init;

@end
