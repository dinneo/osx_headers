//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject
{
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

- (void)respondWithData:(id)arg1;
- (id)_loadingRequest;
@property(readonly, nonatomic) long long currentOffset;
@property(readonly, nonatomic) long long requestedLength;
@property(readonly, nonatomic) long long requestedOffset;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 canSupplyIncrementalDataImmediately:(BOOL)arg4;
- (id)init;

@end

