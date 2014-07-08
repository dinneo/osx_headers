//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCTodayItem.h"

@class NCTodaySummaryItemEntry, NSArray, NSLocale, NSMutableArray, NSObject<OS_dispatch_source>, NSXPCConnection;

@interface NCTodaySummaryItem : NCTodayItem
{
    NSMutableArray *_staticSummaries;
    NSMutableArray *_appSummaries;
    NSMutableArray *_summaries;
    _Bool _upToDate;
    NSLocale *_locale;
    BOOL _usingMetric;
    double _lastWeatherUpdateTime;
    NSXPCConnection *_weatherConnection;
    NSObject<OS_dispatch_source> *_refreshTimer;
    _Bool _forToday;
    _Bool _enableWeatherSummary;
    NCTodaySummaryItemEntry *_weatherSummary;
}

@property(nonatomic) _Bool enableWeatherSummary; // @synthesize enableWeatherSummary=_enableWeatherSummary;
@property _Bool forToday; // @synthesize forToday=_forToday;
@property(retain, nonatomic) NCTodaySummaryItemEntry *weatherSummary; // @synthesize weatherSummary=_weatherSummary;
- (void).cxx_destruct;
- (void)_updateWeatherSummary;
- (void)_updateSummaries;
- (void)_addSummaryForApp:(id)arg1 toSummaries:(id)arg2;
- (void)invalidateSummaries;
- (void)refreshWeatherIfNecessary;
- (void)removeTextualSummary:(id)arg1;
- (void)addTextualSummary:(id)arg1 image:(id)arg2 identifier:(id)arg3 action:(CDUnknownBlockType)arg4;
@property(readonly) NSArray *summaries;

@end
