//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBUndoableOperation.h"

@interface FBAddCollectionOperation : FBUndoableOperation
{
}

+ (id)removeCollection:(id)arg1;
+ (id)addAndSelectCollectionWithoutEdit:(id)arg1;
+ (id)addAndSelectCollection:(id)arg1;
+ (id)addCollection:(id)arg1;
- (void)redoInternal;
- (void)undoInternal;
- (void)selectCollection;
- (void)performInternal;
- (void)_selectCollection:(id)arg1;
- (void)_removeCollection:(id)arg1;
- (void)_saveCollection:(id)arg1;
- (id)collection;
- (BOOL)addAndSelectWithoutEdit;
- (BOOL)addAndSelect;
- (BOOL)add;

@end
