//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol BrowserHistoryImporter <NSObject>
- (void)importHistorySinceDate:(NSDate *)arg1 delegate:(id <BrowserHistoryImporterDelegate>)arg2;
- (void)importEntireHistoryWithDelegate:(id <BrowserHistoryImporterDelegate>)arg1;
@end
