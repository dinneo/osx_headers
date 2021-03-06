//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FezExtendedTableView.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSTimer;

@interface AnimatingTableView : FezExtendedTableView
{
    BOOL _animationEnabled;
    BOOL _drawingRowIntoImageCache;
    NSMutableArray *_originsSnapshot;
    NSMutableArray *_prevRowOrigins;
    NSDate *_startTime;
    double _animationTime;
    struct _NSRange _movementRange;
    struct CGRect _movementRect;
    double _spline;
    NSMutableDictionary *_rowCache;
    NSTimer *_timer;
}

- (id)accessibilityDescriptionAttribute;
- (id)accessibilityAttributeNames;
- (void)revealRowsInRange:(struct _NSRange)arg1;
- (void)concealRowsInRange:(struct _NSRange)arg1;
- (void)rowHeightsChanged;
- (void)reloadData;
- (void)tile;
- (long long)numberOfRows;
- (struct _NSRange)rowsInRect:(struct CGRect)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)setDrawingIntoRowCache:(BOOL)arg1;
- (struct CGRect)rectOfRow:(long long)arg1;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (void)_drawHighlightForRowCacheOfSize:(struct CGSize)arg1;
- (BOOL)drawsSelection;
- (BOOL)isAnimationEnabled;
- (void)setAnimationEnabled:(BOOL)arg1;
- (void)animateMovementOverTime:(double)arg1;
- (void)stepAnimation:(id)arg1;
- (void)rememberIndexes;
- (void)forgetIndexes;
- (id)_prevRowOriginsFromSnapshot;
- (BOOL)isAnimating;
- (struct CGPoint)_animatedRowOrigin:(long long)arg1;
- (void)logDebugInfo;
- (void)dealloc;
- (void)_finishAnimation;
- (void)removeFromSuperview;
- (void)_clearRowCache;

@end

