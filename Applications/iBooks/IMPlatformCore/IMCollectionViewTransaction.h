//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSIndexPath, NSString;

@interface IMCollectionViewTransaction : NSObject
{
    int _type;
    int _representedElementCategory;
    NSString *_representedElementKind;
    NSIndexPath *_sourceIndexPath;
    NSIndexPath *_targetIndexPath;
    NSDictionary *_userInfo;
}

+ (id)transactionForEmptyIndexPath:(id)arg1;
+ (id)transactionToDropCellFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
+ (id)transactionToDragCellAtIndexPath:(id)arg1;
+ (id)transactionToMoveSupplementaryViewOfKind:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
+ (id)transactionToUpdateSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
+ (id)transactionToDeleteSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
+ (id)transactionToInsertSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
+ (id)transactionToMoveCellFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
+ (id)transactionToUpdateCellAtIndexPath:(id)arg1;
+ (id)transactionToDeleteCellAtIndexPath:(id)arg1;
+ (id)transactionToInsertCellAtIndexPath:(id)arg1;
+ (id)transactionWithType:(int)arg1 kind:(id)arg2 category:(int)arg3 fromIndexPath:(id)arg4 toIndexPath:(id)arg5;
+ (id)supplementaryViewTransactionWithType:(int)arg1 kind:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
+ (id)cellTransactionWithType:(int)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSIndexPath *targetIndexPath; // @synthesize targetIndexPath=_targetIndexPath;
@property(retain, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(retain, nonatomic) NSString *representedElementKind; // @synthesize representedElementKind=_representedElementKind;
@property(nonatomic) int representedElementCategory; // @synthesize representedElementCategory=_representedElementCategory;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

