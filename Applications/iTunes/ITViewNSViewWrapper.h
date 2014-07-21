//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface ITViewNSViewWrapper : NSView
{
    shared_ptr_8092bbf7 mContainingITView;
    NSView *mContainingNSView;
    shared_ptr_c313de78 mAdapter;
    BOOL mIsVisible;
    BOOL mDidSetClientWindow;
}

+ (void)hideViewWrappersForITView:(shared_ptr_8092bbf7)arg1 shouldBeVisible:(BOOL)arg2;
+ (HashMap_8e96d517 *)getITViewToWrapperListMapInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGPoint)_convertWindowPointToGlobal:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)renewGState;
- (void)updateRootView;
- (struct CGRect)computeRootViewFrame;
- (void)_doAnyNeededScaling:(struct CGRect *)arg1;
- (struct CGRect)_subtractOtherViewsFromBounds;
- (id)_findParentScrollView;
- (void)updateRootView:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)webPlugInDestroy;
- (void)dealloc;
- (void)releaseClientView;
- (void)removeNotifications;
- (void)viewDidUnhide;
- (void)viewDidHide;
- (void)setRootViewVisible:(BOOL)arg1;
- (void)setupRootView:(shared_ptr_8092bbf7)arg1;
- (void)handleRootViewGoingAway:(shared_ptr_8092bbf7)arg1;
- (shared_ptr_8092bbf7)getRootView;
- (shared_ptr_8092bbf7)getContainingITView;
- (shared_ptr_0283ebe4)getITWindow;
- (void)setAdapter:(shared_ptr_c313de78)arg1;
- (id)initWithContainingITView:(shared_ptr_8092bbf7)arg1 andNSView:(id)arg2 andBounds:(struct CGRect)arg3;
- (void)_removeViewWrapperFromMap;
- (void)_addViewWrapperToMap;

@end

