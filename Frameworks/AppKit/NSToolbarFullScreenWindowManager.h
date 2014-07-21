//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTitlebarAccessoryViewController, NSTitlebarContainerView, NSTitlebarView, NSToolbar, NSToolbarFullScreenResetableAnimation, NSToolbarFullScreenWindow, NSWindow;

__attribute__((visibility("hidden")))
@interface NSToolbarFullScreenWindowManager : NSObject
{
    BOOL _inLayout;
    NSWindow *_originalWindow;
    NSToolbarFullScreenWindow *window;
    NSToolbar *_toolbar;
    NSTitlebarAccessoryViewController *_auxiliaryViewController;
    NSToolbarFullScreenResetableAnimation *windowSlideOutAnimation;
    void *evtHandler;
    unsigned int autohideDisabledCounter;
    unsigned int forceWindowVisibleCounter;
    double _menuBarReveal;
    double _autohideHeight;
    double lastSetAutohideHeight;
    BOOL hasAutoHideMask;
    BOOL menuBarIsShown;
    BOOL _revealingContent;
    BOOL windowIsInFullScreen;
    BOOL settingAuxFrame;
    BOOL resizeContentWindowAfterToolbarAnimation;
    BOOL isForcingToolbarVisibleForSheet;
    BOOL isHandlingHotKeyEvent;
    BOOL forceAuxViewVisible;
    BOOL animatingToCorrectPosition;
    BOOL toolbarWantsToAttachToMenubar;
    BOOL contentWindowInToolbarWindowMovementGroup;
    BOOL setAsAttachedToMenuBar;
    BOOL setAsMergedWithMenuBar;
    BOOL _registeredForNotes;
    NSTitlebarContainerView *_titlebarContainerView;
    NSTitlebarView *_titlebarView;
}

@property NSTitlebarView *titlebarView; // @synthesize titlebarView=_titlebarView;
@property NSTitlebarContainerView *titlebarContainerView; // @synthesize titlebarContainerView=_titlebarContainerView;
@property(getter=isHandlingHotKeyEvent) BOOL handlingHotKeyEvent; // @synthesize handlingHotKeyEvent=isHandlingHotKeyEvent;
@property NSWindow *originalWindow; // @synthesize originalWindow=_originalWindow;
- (void)updateWindowVisibility;
- (void)updateMenuBarAttachmentTags;
- (void)autohideHeightChanged;
- (void)_enableFullScreenForceVisibleForToolbar:(id)arg1;
- (void)_disableFullScreenForceVisibleForToolbar:(id)arg1;
- (void)_disableFullScreenAutohidingForToolbar:(id)arg1;
- (void)_enableFullScreenAutohidingForToolbar:(id)arg1;
- (void)updateTitlebarViewBlendingMode;
- (BOOL)autohideDisabled;
- (void)removeAsChildOfContentWindow;
- (void)addAsChildOfContentWindow;
- (id)window;
- (void)finalize;
- (void)dealloc;
- (void)dispose;
@property(retain, nonatomic) NSToolbar *toolbar;
- (void)updateWindowAndContentView;
- (void)setAuxiliaryViewController:(id)arg1;
- (id)auxiliaryViewController;
- (void)_addViewControllerToWindow;
- (void)tile;
- (id)mainLayoutView;
- (void)registerForWindowNotifications:(BOOL)arg1;
- (void)windowDidChangeFullScreenStatus:(id)arg1;
- (void)windowDidChangeSheetNotification:(id)arg1;
- (void)updateWindowCorners;
- (void)finishAnimationIfSynchronous;
- (void)animateWindowToCorrectPositionIfNecessary;
- (void)updateWindowPositionAnimation:(double)arg1 startTop:(double)arg2;
- (double)correctWindowTopTarget;
- (void)toolbar:(id)arg1 didChangeFrameSizeFromOldSize:(struct CGSize)arg2;
- (void)layout;
- (void)toolbarDidChangeAttachesToMenuBar:(id)arg1;
- (void)revealWindowContentForToolbar:(id)arg1;
- (void)endRevealContentIfAppropriate;
- (BOOL)canRevealContent;
- (void)updateMovementGroups;
- (unsigned long long)fullScreenSpaceID;
- (void)resizeContentWindow;
- (double)_toolbarWindowContentScreenHeightForToolbar:(id)arg1;
- (BOOL)contentWindowShouldMakeRoomForToolbar;
- (void)updateContentWindowPosition;
- (void)updateWindowLayout;
- (void)updateWindowHeight;
- (void)updateContentViewRevealByMenuBar;
- (void)_updateContentViewWithEffectiveReveal:(double)arg1;
- (BOOL)_shouldDrawBaselineForEffectiveReveal:(double)arg1;
- (struct CGPoint)topCenterForSheet:(id)arg1;
- (void)updateWindowAlpha;
- (void)updateMenuBarScreenRevealHeight;
- (void)_makeWindowIfNecessary;
- (struct CGSize)toolbarWindowSize;
- (double)visibleWindowHeight;
- (double)effectiveClampedAutohideHeight;
- (double)effectiveAutohideHeight;
- (double)desiredWindowHeight;
- (double)effectiveAuxiliaryViewMinHeight;
- (double)effectiveAuxiliaryViewMaxHeight;
- (unsigned long long)windowStyleMask;
- (id)screen;
- (struct NSToolbarFullScreenContentViewLayout_t)getToolbarLayout;
- (double)windowAnimationDuration;

@end

