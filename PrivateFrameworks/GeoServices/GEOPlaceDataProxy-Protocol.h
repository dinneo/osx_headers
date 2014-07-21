//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapServiceTraits, GEOPDPlace, GEOPDPlaceRequest, NSArray;

@protocol GEOPlaceDataProxy <NSObject>
- (void)applyRAPUpdatedMapItems:(NSArray *)arg1;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(void (^)(unsigned long long))arg2;
- (void)calculateFreeableSpaceWithHandler:(void (^)(unsigned long long))arg1;
- (void)performPlaceDataRequest:(GEOPDPlaceRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 requesterHandler:(void (^)(GEOPDPlaceResponse *, NSError *))arg3;
- (void)trackPlaceData:(GEOPDPlace *)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)requestPhoneNumbers:(NSArray *)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(GEOMapServiceTraits *)arg3 requesterHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)requestMUIDs:(NSArray *)arg1 includeETA:(BOOL)arg2 traits:(GEOMapServiceTraits *)arg3 requesterHandler:(void (^)(NSArray *, NSError *))arg4;
@end

