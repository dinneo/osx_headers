//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class ILMediaObjectsViewController, NSButton, NSSearchField, NSSplitView, NSString, NSTextField, NSView;

@interface ILMediaBrowserView : NSControl
{
    ILMediaObjectsViewController *_mediaObjectsViewController;
    NSSplitView *_splitView;
    NSView *_controlView;
    NSSearchField *_searchField;
    NSTextField *_itemCountText;
    NSButton *_playButton;
    NSButton *_applyButton;
    NSButton *_clipboardButton;
    unsigned long long _currentBrowserType;
    unsigned long long _displayMode;
    unsigned long long _controlSize;
    BOOL _showsControlView;
    BOOL _allowsMultipleSelection;
    BOOL _displaysToolTips;
    SEL _doubleAction;
    unsigned long long _filteredContentTypes;
    NSString *_filterString;
    BOOL _useSplitView;
    BOOL _isCollapsed;
    BOOL _isVertical;
    struct CGSize _thumbnailCellSize;
    BOOL _showsThumbnailCaptions;
    BOOL _delegateFiltersMediaManagers;
    BOOL _delegateFiltersMediaGroups;
    BOOL _delegateFiltersMediaObjects;
    BOOL _delegateControlsObjectSelection;
    BOOL _establishedBindings;
    BOOL _inDelegatePreview;
    long long _lastiTunesCategory;
    long long _lastiPhotoCategory;
    long long _lastMovieCategory;
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
}

+ (Class)tableHeaderCellClass;
+ (void)setTableHeaderCellClass:(Class)arg1;
+ (Class)searchFieldClass;
+ (void)setSearchFieldClass:(Class)arg1;
+ (Class)popUpButtonClass;
+ (void)setPopUpButtonClass:(Class)arg1;
+ (Class)scrollerClass;
+ (void)setScrollerClass:(Class)arg1;
+ (Class)scrollViewClass;
+ (void)setScrollViewClass:(Class)arg1;
+ (Class)splitViewClass;
+ (void)setSplitViewClass:(Class)arg1;
+ (id)localizedString:(id)arg1;
- (void)setAudioOutputDeviceUniqueID:(id)arg1;
- (id)audioOutputDeviceUniqueID;
- (id)playButton;
- (id)audioPlayingImage;
- (void)setAudioPlayingImage:(id)arg1;
- (void)setStopButtonHighlightedImage:(id)arg1;
- (void)setStopButtonImage:(id)arg1;
- (void)setPlayButtonHighlightedImage:(id)arg1;
- (void)setPlayButtonImage:(id)arg1;
- (id)dividerLineColor;
- (void)setDividerLineColor:(id)arg1;
- (id)itemCountTextColor;
- (void)setItemCountTextColor:(id)arg1;
- (id)outlineTriangleColor;
- (void)setOutlineTriangleColor:(id)arg1;
- (id)tableSelectionColor;
- (void)setTableSelectionColor:(id)arg1;
- (id)tableAlternatingRowsColors;
- (void)setTableAlternatingRowColors:(id)arg1;
- (id)tableGridColor;
- (void)setTableGridColor:(id)arg1;
- (id)tableTextColor;
- (void)setTableTextColor:(id)arg1;
- (id)tableTextFont;
- (void)setTableTextFont:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (Class)tableHeaderCellClass;
- (Class)searchFieldClass;
- (Class)popUpButtonClass;
- (Class)scrollerClass;
- (Class)scrollViewClass;
- (Class)splitViewClass;
- (id)mediaBrowserView;
- (id)mediaBrowserViews;
- (id)objectSpecifier;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)needToUpdateSplitViewSize;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)addCustomFolder:(id)arg1 forBrowser:(unsigned long long)arg2;
- (void)flagsChanged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (id)preferencesKeyForKey:(id)arg1;
- (void)clearSearch:(id)arg1;
- (void)refreshClipboardButton;
- (void)clipboardAddSucessful;
- (id)clipboardButton;
- (id)searchField;
- (id)itemCountTextField;
- (BOOL)_shouldSelectMediaObject:(id)arg1;
- (BOOL)_shouldDisplayMediaObject:(id)arg1;
- (BOOL)_shouldDisplayMediaGroup:(id)arg1;
- (BOOL)_shouldLoadMediaManager:(id)arg1;
- (void)configureSearchField;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_sendKVONoteForKey:(id)arg1;
- (void)viewControllerSelectionDidChange:(id)arg1;
- (void)setApplyButtonEnabled:(BOOL)arg1;
- (BOOL)showsApplyButton;
- (void)setShowsApplyButton:(BOOL)arg1;
- (void)_mediaPreviewStateChanged:(id)arg1;
- (struct CGRect)_calculateGroupsPopUpRect;
- (void)_layoutInterface;
- (void)removeFromSuperview;
- (void)_createControlView;
- (void)_resetContent;
- (BOOL)isFlipped;
- (BOOL)isInPopupMode;
- (void)showGroupOutlineViewWithHeight:(long long)arg1;
- (void)showGroupPopUp;
- (BOOL)isPreviewing;
- (BOOL)isSingleWindowModeEnabled;
- (void)setSingleWindowModeEnabled:(BOOL)arg1;
- (BOOL)allowsUserAddedCustomFolders;
- (void)setAllowsUserAddedCustomFolders:(BOOL)arg1;
- (BOOL)showsGroupsListInPopUpMode;
- (void)setShowsGroupsListInPopUpMode:(BOOL)arg1;
- (BOOL)showsThumbnailCaptions;
- (void)setShowsThumbnailCaptions:(BOOL)arg1;
- (struct CGSize)thumbnailCellSize;
- (void)setThumbnailCellSize:(struct CGSize)arg1;
- (id)filterString;
- (void)setFilterString:(id)arg1;
- (unsigned long long)filteredContentTypes;
- (void)setFilteredContentTypes:(unsigned long long)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)setVerticalMotionCanBeginDrag:(BOOL)arg1;
- (BOOL)verticalMotionCanBeginDrag;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)displaysToolTips;
- (void)setDisplaysToolTips:(BOOL)arg1;
- (BOOL)showsControlView;
- (void)setShowsControlView:(BOOL)arg1;
- (unsigned long long)mediaDisplayMode;
- (void)setMediaDisplayMode:(unsigned long long)arg1;
- (unsigned long long)mediaDisplayModeForBrowserType:(unsigned long long)arg1;
- (void)setMediaDisplayMode:(unsigned long long)arg1 forBrowserType:(unsigned long long)arg2;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)autosaveName;
- (void)setAutosaveName:(id)arg1;
- (id)displayedMediaObjects;
- (id)displayedMediaGroups;
- (id)selectedMediaObject;
- (id)selectedMediaObjects;
- (void)selectMediaObjectIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectMediaObject:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)selectedMediaGroup;
- (id)selectedMediaGroups;
- (void)selectMediaGroupIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectMediaGroup:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (id)clickedItem;
- (SEL)doubleAction;
- (void)setDoubleAction:(SEL)arg1;
- (void)reloadData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)stopPreview:(id)arg1;
- (void)startPreview:(id)arg1;
- (void)togglePreview:(id)arg1;
- (unsigned long long)currentBrowserType;
- (void)refreshCurrentBrowser;
- (void)setCurrentBrowserType:(unsigned long long)arg1;
- (void)displayMovieBrowser:(id)arg1;
- (void)displayImageBrowser:(id)arg1;
- (void)displayAudioBrowser:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)disableViewBindings;
- (void)enableViewBindings;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mediaTypes:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 mediaTypes:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_allowPopupMode;
- (void)_ilMediaBrowserImportPanelView_adjustSplitViewStyle;

@end
