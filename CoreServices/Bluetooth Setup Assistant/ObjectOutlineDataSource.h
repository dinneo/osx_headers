//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOutlineViewDataSource.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface ObjectOutlineDataSource : NSObject <NSOutlineViewDataSource>
{
    NSMutableArray *_data;
    id _delegate;
    BOOL _readOnly;
    NSMutableSet *_majorClassesPresent;
    NSMutableArray *_categories;
    NSString *_lastSortHeader;
    int _comparisonType;
    BOOL _descendingSort;
}

- (void).cxx_destruct;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)isTopLevelItem:(id)arg1;
- (void)importFromArray:(id)arg1;
- (void)importFromPListFile:(id)arg1;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)readOnly;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)getObjectsInColumnAsArray:(id)arg1;
- (void)setItemObject:(id)arg1 atIndex:(int)arg2 columnIdentifier:(id)arg3;
- (id)itemObject:(int)arg1 columnIdentifier:(id)arg2;
- (void)removeAllItems;
- (void)removeItem:(int)arg1;
- (int)insertItem:(int)arg1;
- (int)findItemObjectIndex:(id)arg1 columnIdentifier:(id)arg2;
- (int)count;
- (id)data;
- (void)sortDataByColumnIdentifier:(id)arg1 usingSelector:(SEL)arg2;
- (void)sortDataByColumnIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
