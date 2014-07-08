//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RDDatabase, RDLockedDictionary;

@interface RDManualAlbumIdClosure : NSObject
{
    RDDatabase *_database;
    RDLockedDictionary *_closureByFolderId;
}

- (void).cxx_destruct;
- (void)addManualAlbumIds:(id)arg1 toFolder:(id)arg2;
- (void)addManualAlbumId:(unsigned long long)arg1 toFolder:(id)arg2;
- (void)dropManualAlbumIds:(id)arg1 fromFolder:(id)arg2;
- (void)dropManualAlbumId:(unsigned long long)arg1 fromFolder:(id)arg2;
- (id)closureForFolder:(id)arg1;
- (id)computeClosureForFolder:(id)arg1;
- (void)clearIndex;
- (void)loadIndexes;
- (id)database;
- (id)initWithDatabase:(id)arg1;

@end
