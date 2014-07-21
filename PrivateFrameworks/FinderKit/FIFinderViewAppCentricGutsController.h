//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FIFinderViewGutsController.h>

@class FI_TView, NSBox, NSLayoutConstraint, NSSegmentedControl, NSView, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface FIFinderViewAppCentricGutsController : FIFinderViewGutsController
{
    NSView *_topBarContainerView;
    NSVisualEffectView *_visualEffectView;
    struct TNSRef<FIScrollViewMirrorView *> _browserViewMirrorView;
    struct TNSRef<FIScrollViewMirrorView *> _sidebarMirrorView;
    struct vector<TNSRef<FIScrollViewMirrorView *>, std::__1::allocator<TNSRef<FIScrollViewMirrorView *>>> _columnViewMirrorViews;
    struct TNSRef<FIDisabledScrollingScrollView *> _columnViewMirrorViewScrollView;
    struct TNotificationCenterObserver _columnViewBoundsChangeObserver;
    struct TNotificationCenterObserver _columnViewDidAddColumnObserver;
    struct TNotificationCenterObserver _columnViewDidSetLastColumnObserver;
    struct TNSRef<NSArray *> _sidebarMirrorViewWidthConstraints;
    struct TNSRef<NSArray *> _browserViewMirrorViewWidthConstraints;
    NSBox *_bottomLine;
    NSSegmentedControl *_toggleSidebarButton;
    NSSegmentedControl *_topBarEditTagsButton;
    NSSegmentedControl *_topBarSharingButton;
    NSView *_backForwardContainer;
    NSLayoutConstraint *_backForwardWidthConstraint;
    NSLayoutConstraint *_backForwardLeadingConstraint;
    NSLayoutConstraint *_backForwardTrailingConstraint;
    double _backForwardWidthConstant;
    double _backForwardTrailingConstant;
    NSSegmentedControl *_bottomBarViewSwitcher;
    _Bool _showBackForward;
    _Bool _showingAllTopBarItems;
    FI_TView *_popoverView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)containerTargetDidChange:(id)arg1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)arg1;
- (void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (_Bool)shouldShowAllMyFiles;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (_Bool)sidebarInitiallyVisible;
- (void)unbindViewSwitcher;
- (void)bindViewSwitcher;
- (void)cacheShareButton:(id)arg1;
- (void)cacheTagsButton:(id)arg1;
- (_Bool)shouldShowViewSwitcher;
- (void)cacheViewSwitcher:(id)arg1;
- (void)configureViewSwitcher;
- (_Bool)shouldEnableShareButton;
- (void)showUbiquityStatus;
- (void)updateUbiquityStatus;
- (_Bool)hasUbiquityError;
- (void)unregisterForUbiquityStatus;
- (void)registerForUbiquityStatus;
- (void)adjustBackForwardSegments;
- (void)containerContentChanged:(id)arg1;
- (_Bool)adjustTopBarViewSwitcher;
- (void)adjustTopBar;
- (void)configureWindowForContentChange;
- (void)_configureMirrorViews;
- (void)_configureMirrorViewForBrowserColumnView:(id)arg1;
- (void)_configureMirrorViewForSidebarScrollView:(id)arg1;
- (void)didChangeSelection;
- (struct TMDQueryAliasNode *)userSearchTarget;
- (void)moreInitialization;
- (void)updateICloudButtonImage;
- (void)setIsSavePanel:(_Bool)arg1;
- (struct TString)clientAppName;
- (void)prepareToHide;
- (void)prepareToShow;
- (void)didSetLastColumn;
- (void)didAddColumn;
- (void)columnViewContentViewBoundsChanged;
- (void)dealloc;
- (void)aboutToDestroyBrowserView;
- (void)_tearDownMirrorViews;
- (Class)browserContainerClass;
- (id)initWithView:(id)arg1;
- (id)sidebarSplitView;
- (id)viewStyle;
- (void)refreshSearchScopeButtons;
- (void)iCloudModeChanged;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)viewLoaded;
- (id)nibName;

@end

