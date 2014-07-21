//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareID, NSArray;

@interface CKDLikeItemsOperation : CKDOperation
{
    CDUnknownBlockType _itemLikedProgressBlock;
    NSArray *_itemIDsToLike;
    NSArray *_itemIDsToUnlike;
    CKShareID *_shareID;
}

@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSArray *itemIDsToUnlike; // @synthesize itemIDsToUnlike=_itemIDsToUnlike;
@property(retain, nonatomic) NSArray *itemIDsToLike; // @synthesize itemIDsToLike=_itemIDsToLike;
@property(copy, nonatomic) CDUnknownBlockType itemLikedProgressBlock; // @synthesize itemLikedProgressBlock=_itemLikedProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_handleLike:(id)arg1 withResponse:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

