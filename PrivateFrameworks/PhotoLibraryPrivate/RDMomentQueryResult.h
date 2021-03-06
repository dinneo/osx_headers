//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDQueryResult.h>

@class LiFilter, NSString;

@interface RDMomentQueryResult : RDQueryResult
{
    NSString *_momentUuid;
    unsigned long long _modelId;
    LiFilter *_filter;
}

- (void).cxx_destruct;
- (void)libraryUpdatedAlbum:(id)arg1 forKeyPaths:(id)arg2;
- (void)libraryCreatedCustomSortEntry:(id)arg1;
- (void)libraryUpdatedMoment:(id)arg1 forKeyPaths:(id)arg2;
- (id)loadProperties;
- (id)queryFilter;
- (BOOL)isLongLivedQuery;
- (BOOL)isEstablished;
- (BOOL)isCurrent;
- (id)initWithMomentRef:(id)arg1;

@end

