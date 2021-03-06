//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiRidList, NSObject<OS_dispatch_queue>, RDDatabase, RDLockedArray, RDUniqueQueue;

@interface RDPlaceManager : NSObject
{
    int _spinlock;
    RDUniqueQueue *_versionIdsToGeoTag;
    BOOL _haveDirtyVersionIdList;
    LiRidList *_versionIdList;
    LiRidList *_versionIdListForNextLaunch;
    RDLockedArray *_reverseGeoLookupCache;
    long long _geoLookupConsecutiveFailCount;
    BOOL _geoLookupIsDown;
    BOOL _geoLookupIsEnabled;
    BOOL _statusInTaskView;
    NSObject<OS_dispatch_queue> *_geoTaggingQueue;
    BOOL _geoLookupDisabledDuringUpgrade;
    RDDatabase *_database;
}

+ (id)preferredLanguageCodeForDatabase:(id)arg1;
@property(nonatomic) BOOL geoLookupIsEnabled; // @synthesize geoLookupIsEnabled=_geoLookupIsEnabled;
@property(nonatomic) BOOL geoLookupIsDown; // @synthesize geoLookupIsDown=_geoLookupIsDown;
@property(nonatomic) BOOL geoLookupDisabledDuringUpgrade; // @synthesize geoLookupDisabledDuringUpgrade=_geoLookupDisabledDuringUpgrade;
@property __weak RDDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)rebuildPlaceWithInfoDictionary:(id)arg1;
- (void)clearPlacesAndRescheduleAllVersions;
- (void)async_commonPlacesForSearchString:(id)arg1 forLanguage:(id)arg2 withInvocation:(id)arg3;
- (id)placesForSearchStringPrefix:(id)arg1;
- (id)placesForSearchString:(id)arg1;
- (id)placesForSearchString:(id)arg1 forLanguage:(id)arg2;
- (id)placesForSearchString:(id)arg1 forLanguage:(id)arg2 searchType:(int)arg3;
- (id)versionPlacesForSearchStringPrefix:(id)arg1;
- (id)versionPlacesForSearchString:(id)arg1;
- (id)versionPlacesForSearchString:(id)arg1 forLanguage:(id)arg2;
- (id)versionPlacesForSearchString:(id)arg1 forLanguage:(id)arg2 searchType:(int)arg3;
- (id)secondaryEnglishGeoLookupsForSearchString:(id)arg1;
- (id)geoLookupsForSearchStringPrefix:(id)arg1;
- (id)geoLookupsForSearchString:(id)arg1;
- (id)geoLookupsForSearchString:(id)arg1 forLanguage:(id)arg2;
- (id)geoLookupsForSearchString:(id)arg1 forLanguage:(id)arg2 searchType:(int)arg3;
- (id)placesForLatitude:(double)arg1 longitude:(double)arg2 incomplete:(char *)arg3;
- (id)lookupPlacesForLatitude:(double)arg1 longitude:(double)arg2 incomplete:(char *)arg3;
- (void)loadVersionIdList;
- (void)saveVersionIdList;
- (void)geoTagVersion:(id)arg1 withPlaces:(id)arg2;
- (void)geoTagVersion:(id)arg1;
- (void)geoTagSomeVersions;
- (BOOL)geoTagOneVersion;
- (void)fastGeoTagVersion:(id)arg1;
- (id)fastGeoTagVersions:(id)arg1;
- (void)cancelGeoTaggingForVersions:(id)arg1;
- (void)cancelGeoTaggingForVersion:(id)arg1;
- (void)scheduleVersionsForGeoTaggingSoon:(id)arg1;
- (void)scheduleVersionIdsForGeoTagging:(id)arg1;
- (void)scheduleVersionsForGeoTagging:(id)arg1;
- (void)scheduleVersionIdForGeoTaggingSoon:(id)arg1;
- (void)scheduleVersionForGeoTaggingSoon:(id)arg1;
- (void)scheduleVersionIdForGeoTagging:(id)arg1;
- (void)scheduleVersionForGeoTagging:(id)arg1;
- (id)placesFromCacheForLatitude:(double)arg1 longitude:(double)arg2;
- (void)cachePlaces:(id)arg1 forLatitude:(double)arg2 longitude:(double)arg3;
- (void)updatePlacesStatusInTaskView;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (id)preferredLanguageCode;

@end

