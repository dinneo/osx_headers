//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

#import "FBViewController.h"
#import "FBViewControllerTypeAhead.h"
#import "FBViewSizingDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class FBTableView, FBUIController, NSArray, NSButton, NSMutableSet, NSScrollView, NSString, NSTextFieldCell, NSVisualEffectView;

@interface FBCollectionViewController : NSResponder <FBViewSizingDelegate, FBViewController, FBViewControllerTypeAhead, NSTableViewDataSource, NSTableViewDelegate>
{
    NSVisualEffectView *fView;
    NSScrollView *fScrollView;
    FBTableView *fTableView;
    NSTextFieldCell *tableViewTextCell;
    FBUIController *fUIController;
    BOOL didAwakeFromNib;
    NSArray *fItems;
    NSMutableSet *fSelectedItems;
    BOOL fEdit;
    NSArray *_topLevelObjects;
    long long librarySeparatorIndex;
    long long collectionSeparatorIndex;
    long long smartCollectionSeparatorIndex;
    BOOL _modelIsInitialized;
    NSButton *_collectionAddButton;
}

@property NSButton *collectionAddButton; // @synthesize collectionAddButton=_collectionAddButton;
@property BOOL modelIsInitialized; // @synthesize modelIsInitialized=_modelIsInitialized;
@property(readonly) NSArray *items; // @synthesize items=fItems;
@property long long smartCollectionSeparatorIndex; // @synthesize smartCollectionSeparatorIndex;
@property long long collectionSeparatorIndex; // @synthesize collectionSeparatorIndex;
@property long long librarySeparatorIndex; // @synthesize librarySeparatorIndex;
- (void)typeAhead:(id)arg1;
- (id)shouldDrawSeparatorForRow:(id)arg1 inTableView:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)indentAmount;
- (id)stringForSeparatorRow:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (struct CGSize)viewMaximumSize:(id)arg1;
- (struct CGSize)viewMinimumSize:(id)arg1;
- (void)modelDidInitialize:(id)arg1;
- (void)itemsDidChange:(id)arg1;
- (void)renameCollection:(id)arg1 name:(id)arg2;
- (id)separator;
- (void)selectLibraries:(id)arg1;
- (void)selectItems:(id)arg1;
- (void)saveCurrentSelection;
- (id)selectedGroups;
- (void)deleteKey:(id)arg1;
- (void)returnKey:(id)arg1;
- (void)addCollectionOrSmartCollection:(id)arg1;
- (void)renameGroup:(id)arg1;
- (void)awakeFromNib;
@property(readonly) NSScrollView *scrollView;
@property(readonly) FBTableView *tableView;
@property(readonly) NSVisualEffectView *view;
- (id)groups;
- (void)dealloc;
- (void)doAwakeFromNib;
- (void)setUIController:(id)arg1;
- (id)uiController;
- (id)nibName;
- (id)initWithUIController:(id)arg1;
- (void)_restoreSelectionFromDisk;
- (void)_windowDidResignKey:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_updateDuringModelInitialization:(id)arg1;
- (void)_updateView;
- (void)_setItems:(id)arg1;
- (id)_items;
- (id)_selectedItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
