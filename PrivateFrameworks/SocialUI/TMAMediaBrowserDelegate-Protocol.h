//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@protocol TMAMediaBrowserDelegate <NSObject>
- (BOOL)isEmpty;
- (void)filterMediaObjects:(NSArray *)arg1;
- (NSMutableDictionary *)mediaGroupsForCategory;
- (NSDictionary *)mediaGroupTypesForCategory;
- (NSMutableArray *)visibleCategories;
- (NSArray *)categories;
@end
