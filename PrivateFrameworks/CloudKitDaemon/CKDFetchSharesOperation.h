//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchSharesOperation : CKDOperation
{
    BOOL _isFetchAllSharesOperation;
    NSArray *_shares;
    CDUnknownBlockType _shareFetchedProgressBlock;
    NSArray *_shareIDsToFetch;
}

@property(nonatomic) BOOL isFetchAllSharesOperation; // @synthesize isFetchAllSharesOperation=_isFetchAllSharesOperation;
@property(retain, nonatomic) NSArray *shareIDsToFetch; // @synthesize shareIDsToFetch=_shareIDsToFetch;
@property(copy, nonatomic) CDUnknownBlockType shareFetchedProgressBlock; // @synthesize shareFetchedProgressBlock=_shareFetchedProgressBlock;
@property(retain, nonatomic) NSArray *shares; // @synthesize shares=_shares;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleShareFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
