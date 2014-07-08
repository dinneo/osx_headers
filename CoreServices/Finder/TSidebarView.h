//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTrackableOutlineView.h"

@class TTableViewShrinkToFitController;

@interface TSidebarView : NSTrackableOutlineView
{
    _Bool _shouldHandleCommandClickOnMouseUp;
    _Bool _keyOnMouseDown;
    _Bool _shouldCancelPendingInvoke;
    _Bool _handlingCmdMouseDown;
    _Bool _handlingItemClick;
    TTableViewShrinkToFitController *_stfController;
}

@property(nonatomic) _Bool handlingItemClick; // @synthesize handlingItemClick=_handlingItemClick;
@property(nonatomic) _Bool keyOnMouseDown; // @synthesize keyOnMouseDown=_keyOnMouseDown;
@property(nonatomic) _Bool shouldCancelPendingInvoke; // @synthesize shouldCancelPendingInvoke=_shouldCancelPendingInvoke;
@property(nonatomic) _Bool shouldHandleCommandClickOnMouseUp; // @synthesize shouldHandleCommandClickOnMouseUp=_shouldHandleCommandClickOnMouseUp;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (id)stfEditorController;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)updateSTFEditorLocation;
- (void)cancelPendingInvoke;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingWithNode:(const struct TFENode *)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (void)rowHit:(long long)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDraggedWorkaround;
- (id)menuForEvent:(id)arg1;
- (void)deselectRow:(long long)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)selectionShouldUsePrimaryColor;
- (BOOL)acceptsFirstResponder;
- (id)controller;
- (void)finalize;
- (void)dealloc;

@end
