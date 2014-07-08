//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "FBViewController.h"
#import "FBViewControllerTypeAhead.h"
#import "FBViewSizingDelegate.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class FBBackgroundView, FBOutlineView, FBUIController, NSArray, NSMutableSet, NSSet, NSString;

@interface FBFontViewController : NSResponder <FBViewSizingDelegate, FBViewController, FBViewControllerTypeAhead, NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    FBBackgroundView *fView;
    FBOutlineView *fTableView;
    NSString *fFilterTerms;
    NSArray *fItems;
    NSMutableSet *_fSelectedItems;
    NSMutableSet *fExpandedItems;
    FBUIController *fUIController;
    BOOL didAwakeFromNib;
    NSString *fBullet;
    NSString *fLock;
    NSString *fDownload;
    double fOffStringWidth;
    NSArray *_topLevelObjects;
    long long savedSearchMode;
    unsigned long long _fontCount;
    unsigned long long _totalFontCount;
}

@property unsigned long long totalFontCount; // @synthesize totalFontCount=_totalFontCount;
@property unsigned long long fontCount; // @synthesize fontCount=_fontCount;
@property long long savedSearchMode; // @synthesize savedSearchMode;
- (void)typeAhead:(id)arg1;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (struct CGSize)viewMaximumSize:(id)arg1;
- (struct CGSize)viewMinimumSize:(id)arg1;
- (void)leftKey:(id)arg1;
- (void)returnKey:(id)arg1;
- (void)deleteKey:(id)arg1;
- (void)outlineViewDoubleClickedOnItem:(id)arg1;
- (void)saveCurrentSelection;
- (void)setFonts:(id)arg1;
- (id)fonts;
- (id)group;
- (void)searchDidChange:(id)arg1;
- (void)itemsDidChange:(id)arg1;
@property(readonly) NSSet *selectedFaces;
@property(readonly) NSArray *selectedItems;
- (void)modelDidInitialize:(id)arg1;
- (void)selectFamiliesAndFaces:(id)arg1;
- (void)selectDuplicateFonts;
- (void)reselectDuplicatesWithTimer:(id)arg1;
- (void)reselectFamiliesAndFacesWithTimer:(id)arg1;
- (void)awakeFromNib;
@property(readonly, retain) FBOutlineView *tableView;
- (id)view;
- (void)dealloc;
- (void)doAwakeFromNib;
- (void)setUIController:(id)arg1;
- (id)uiController;
- (id)nibName;
- (id)init;
- (id)initWithUIController:(id)arg1;
- (void)_synchronizeExpandedItems;
- (BOOL)_retrieveSelectionFromSelectionMap;
- (BOOL)_retrieveSelectionFromCache;
- (void)_cacheSelection;
- (id)_familiesFromItems:(id)arg1;
- (id)_facesFromItems:(id)arg1;
- (void)_updateView:(BOOL)arg1;
- (id)_indexesToSelectFromItems:(id)arg1;
- (long long)numberOfChildren;
- (id)children;
@property(readonly, retain) NSMutableSet *_expandedItems;
@property(readonly, retain) NSMutableSet *_selectedItems;
- (void)_setItems:(id)arg1;
- (id)_items;
- (void)_setFilterTerms:(id)arg1;
- (id)_filterTerms;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
