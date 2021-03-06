//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSImage, NSIndexSet, NSMutableSet, NSString, PVSearchResultGroup;

@interface PVSearchResultItem : NSObject
{
    PVSearchResultGroup *_parentGroup;
    NSString *_patternForMatchingQueryTerms;
    double _relevanceScore;
    NSString *_title;
    NSImage *_thumbnailImage;
    BOOL _loadingThumbnail;
    NSString *_summary;
    NSIndexSet *_summaryMatchIndexes;
    BOOL _loadingSummary;
    NSMutableSet *_loadOps;
    unsigned long long _matchCount;
}

+ (id)sharedThumbnailOperationQueue;
+ (id)sharedTextOperationQueue;
@property unsigned long long matchCount; // @synthesize matchCount=_matchCount;
@property BOOL loadingSummary; // @synthesize loadingSummary=_loadingSummary;
@property(retain) NSIndexSet *summaryMatchIndexes; // @synthesize summaryMatchIndexes=_summaryMatchIndexes;
@property(retain) NSString *summaryString; // @synthesize summaryString=_summary;
@property(retain) NSString *patternForMatchingQueryTerms; // @synthesize patternForMatchingQueryTerms=_patternForMatchingQueryTerms;
@property BOOL loadingThumbnail; // @synthesize loadingThumbnail=_loadingThumbnail;
@property(retain) NSImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(copy) NSString *title; // @synthesize title=_title;
@property double relevanceScore; // @synthesize relevanceScore=_relevanceScore;
@property PVSearchResultGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
- (void)purgeTemporaryData;
- (void)loadSummary;
- (void)loadThumbnailImage;
@property(readonly) NSArray *selectionsForMatches;
- (id)stringOfExtent;
- (id)selectionOfExtent;
@property(readonly) id <PVMediaElement> mediaElement;
@property(readonly) id ordinalValue;
- (void)resetSummary;
- (void)cancelLoadOperations;
- (void)addOperation:(id)arg1 toQueue:(id)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRelevanceScore:(double)arg1;

@end

