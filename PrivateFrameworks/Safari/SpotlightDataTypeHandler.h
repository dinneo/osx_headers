//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SpotlightDataTypeHandler : NSObject
{
    NSString *_type;
    id <OldSpotlightDataSource> _dataSource;
    id <OldSpotlightDataWriter> _dataWriter;
    NSArray *_itemsToDelete;
    NSArray *_itemsToAdd;
    BOOL _fullUpdatePending;
    BOOL _deleteOldCacheFiles;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)setShouldDeleteOldCacheFiles:(BOOL)arg1;
- (BOOL)shouldDeleteOldCacheFiles;
- (void)setFullUpdatePending:(BOOL)arg1;
- (BOOL)isFullUpdatePending;
- (void)setItemsToDelete:(id)arg1;
- (id)itemsToDelete;
- (void)setItemsToAdd:(id)arg1;
- (id)itemsToAdd;
- (id)type;
- (id)dataWriter;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 writer:(id)arg2 type:(id)arg3;

@end
