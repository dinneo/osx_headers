//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEODBWriter.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataDBWriter : GEODBWriter
{
    struct sqlite3_stmt *_insertPhoneNumber;
    struct sqlite3_stmt *_insertKeyString;
    struct sqlite3_stmt *_deletePhoneNumberMappingStatement;
    struct sqlite3_stmt *_deleteKeyStringStatement;
    BOOL _canCreateDebugTable;
}

- (void)performTableCreationTasks;
- (void)performStatementPreparationTasks;
- (void)_createKeyStringTable;
- (void)_setMUID:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (void)_createPhoneNumberTable;
- (void)_setMUID:(unsigned long long)arg1 forPhoneNumber:(long long)arg2;
- (void)_openIfNecessary;
- (void)_populateDBKey:(struct _GEOTileKey *)arg1 forMUID:(unsigned long long)arg2;
- (void)_deleteKeystringForKey:(struct _GEOTileKey)arg1;
- (void)deletePhoneNumberMapping;
- (void)deletePlaceDataForMUID:(unsigned long long)arg1;
- (void)deletePlaceDataForKey:(struct _GEOTileKey)arg1;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (void)setPlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

