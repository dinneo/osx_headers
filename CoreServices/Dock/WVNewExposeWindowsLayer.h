//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVExposeWindowsLayer.h"

@class NSArray, NSMutableArray, NSSet, WVExposeCluster, WVExposeDragObject, WVSpace;

@interface WVNewExposeWindowsLayer : WVExposeWindowsLayer
{
    NSMutableArray *_appIconWindows;
    double _marginLeft;
    double _marginRight;
    double _currentScale;
    struct CGPoint _mouseDownPoint;
    float _expandBrightness;
    float _expandScale;
    NSMutableArray *_clusters;
    WVExposeCluster *_currentExpandedCluster;
    NSArray *_exposedWindows;
    NSSet *_windowsWithAction;
    BOOL _supportsDragging;
    BOOL _canDrag;
    BOOL _groupByApplication;
    WVSpace *_space;
    WVExposeDragObject *_draggedObject;
}

@property(nonatomic) BOOL groupByApplication; // @synthesize groupByApplication=_groupByApplication;
@property(readonly, nonatomic) WVExposeDragObject *dragObject; // @synthesize dragObject=_draggedObject;
@property(retain, nonatomic) WVSpace *space; // @synthesize space=_space;
@property(nonatomic) double marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) double marginLeft; // @synthesize marginLeft=_marginLeft;
@property(readonly, nonatomic) NSArray *appIconWindows; // @synthesize appIconWindows=_appIconWindows;
- (void).cxx_destruct;
- (void)_cancelDrag;
- (id)_clusterAppIconHitWithEvent:(id)arg1;
- (void)_dragStartedWithObject:(id)arg1;
- (void)_collapseCluster;
- (void)_expandCluster:(id)arg1;
- (void)_layoutWindows:(id)arg1 createCells:(BOOL)arg2;
- (void)_layoutUserSpaceWindows:(id)arg1 createCells:(BOOL)arg2;
- (void)_layoutUserSpaceWindowsUngrouped:(id)arg1 createCells:(BOOL)arg2;
- (void)_layoutFullScreenWindows:(id)arg1;
- (struct CGRect)_outerRectForInnerRect:(struct CGRect)arg1;
- (BOOL)scrollWheel:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseUp:(id)arg1;
- (BOOL)leftMouseDragged:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (BOOL)mouseExited:(id)arg1 inLayer:(id)arg2;
- (BOOL)mouseEntered:(id)arg1 inLayer:(id)arg2;
- (BOOL)navigate:(int)arg1 withEvent:(id)arg2;
- (void)expandFocusedCluster;
- (void)didPerformWindowAction;
- (void)willPerformWindowActionForWindows:(id)arg1;
- (void)collapseCluster;
- (void)setShown:(BOOL)arg1;
- (void)cancelDrag;
- (BOOL)canExpandTextOfCellLayer:(id)arg1;
- (void)layout;
- (id)windows;
- (void)setWindows:(id)arg1;
@property(readonly, nonatomic) id <WVNewExposeActionHandling> handler;
@property(readonly, nonatomic) BOOL clusterExpanded;
- (id)initWithHandler:(id)arg1 window:(id)arg2 forDisplay:(unsigned int)arg3 andScaleFactor:(float)arg4;

@end

