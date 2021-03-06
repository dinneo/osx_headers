//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

@class LiImmutableRidList, LiQueryOptions, NSArray;

@interface LiLoadModelRequest : LiRequest
{
    unsigned long long _tableId;
    LiImmutableRidList *_modelIds;
    NSArray *_properties;
    LiQueryOptions *_options;
    CDUnknownBlockType _bucketProcessor;
}

@property(readonly, nonatomic) CDUnknownBlockType bucketProcessor; // @synthesize bucketProcessor=_bucketProcessor;
@property(readonly, nonatomic) LiQueryOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) LiImmutableRidList *modelIds; // @synthesize modelIds=_modelIds;
@property(readonly, nonatomic) unsigned long long tableId; // @synthesize tableId=_tableId;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)initWithProperties:(id)arg1 forModelIds:(id)arg2 options:(id)arg3 forTable:(id)arg4 bucketProcessor:(CDUnknownBlockType)arg5;
- (id)initWithProperties:(id)arg1 forModelIds:(id)arg2 options:(id)arg3 forTable:(id)arg4;
- (id)initWithProperties:(id)arg1 forModelId:(unsigned long long)arg2 forTable:(id)arg3;

@end

