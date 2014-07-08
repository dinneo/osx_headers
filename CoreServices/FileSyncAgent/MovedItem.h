//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SNode, SNodeHistory, SStoreNodeInfo, VersionVector;

@interface MovedItem : NSObject
{
    SNodeHistory *_hist;
    SNode *_dst;
    SNode *_src;
    SStoreNodeInfo *_origSrcSNI;
    VersionVector *_srcCVV;
    BOOL _srcExists;
}

+ (id)movedItemFromSource:(id)arg1 toDest:(id)arg2 history:(id)arg3 sourceExists:(BOOL)arg4;
@property(retain, nonatomic) SNode *srcNode; // @synthesize srcNode=_src;
@property(nonatomic) BOOL srcExists; // @synthesize srcExists=_srcExists;
@property(retain, nonatomic) VersionVector *srcCVV; // @synthesize srcCVV=_srcCVV;
@property(retain, nonatomic) SStoreNodeInfo *originalNodeInfo; // @synthesize originalNodeInfo=_origSrcSNI;
@property(retain, nonatomic) SNodeHistory *history; // @synthesize history=_hist;
@property(retain, nonatomic) SNode *dstNode; // @synthesize dstNode=_dst;
- (id)description;
- (void)dealloc;

@end
