//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HiCloudViewController.h"

#import "NSAnimationDelegate.h"

@class KeyboardManager, NSArrayController, NSButton, NSLayoutConstraint, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SelectKeyboardController : HiCloudViewController <NSAnimationDelegate>
{
    NSButton *showAllButton;
    NSArrayController *keyboardListController;
    id chooseLayoutContainer;
    id keyboardTableView;
    id altInputMethodBox;
    id altInputMethodMultipleSelectionView;
    NSArrayController *typingStylesListController;
    id typingStylePopUpButton;
    id keyboardComfortableMatrix;
    id typingStyleText;
    id keyboardComfortableText;
    NSLayoutConstraint *layoutControllerLeftConstraint;
    NSLayoutConstraint *layoutControllerCenterConstraint;
    NSObject<OS_dispatch_queue> *_animationQueue;
    int _currentMode;
    BOOL _selectionDidInitiallyChange;
    BOOL _movedControls;
    struct CGRect _comfortTextRect;
    struct CGRect _styleTextRect;
    struct CGRect _styleMenuRect;
    KeyboardManager *manager;
    NSMutableArray *_selectedMethodTypingStyles;
    double _leftSpaceForCenteredView;
    double _leftSpaceForLeftShiftedView;
}

+ (void)initialize;
@property double leftSpaceForLeftShiftedView; // @synthesize leftSpaceForLeftShiftedView=_leftSpaceForLeftShiftedView;
@property double leftSpaceForCenteredView; // @synthesize leftSpaceForCenteredView=_leftSpaceForCenteredView;
@property(retain) NSMutableArray *selectedMethodTypingStyles; // @synthesize selectedMethodTypingStyles=_selectedMethodTypingStyles;
- (void)_rebuildTypingStylePopUp:(id)arg1;
- (void)_transitionToMode:(int)arg1 withKeyboard:(id)arg2 animate:(BOOL)arg3;
- (void)_showOrHideOptionsWithMode:(int)arg1;
- (BOOL)_wantMultipleSelectionForThisKeyboard:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)inputMethodSelectionChanged:(id)arg1;
- (void)showAllKeyboards:(id)arg1;
- (void)willBecomeVisible;
@property(readonly) KeyboardManager *manager; // @synthesize manager;
- (void)dealloc;
- (id)init;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
