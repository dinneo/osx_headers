//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKRecord.h"

#import "PQLBindable.h"

@class NSString;

@interface CKRecord (BRCItemAdditions) <PQLBindable>
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)assetsOnlyDocumentContentsRecordForLocalItem:(id)arg1 thumbnail1024Asset:(id)arg2 thumbnailMetadata:(id)arg3 packageManifest:(id *)arg4 error:(id *)arg5;
+ (id)documentStructureRecordForLocalItem:(id)arg1;
+ (id)directoryRecordForLocalItem:(id)arg1;
+ (id)aliasRecordForLocalItem:(id)arg1;
+ (id)documentContentsRecordForItemID:(id)arg1 zoneName:(id)arg2;
+ (id)documentStructureRecordForItemID:(id)arg1 zoneName:(id)arg2;
+ (id)directoryRecordForItemID:(id)arg1 zoneName:(id)arg2;
+ (id)aliasRecordForItemID:(id)arg1 zoneName:(id)arg2;
+ (id)rootDirectoryRecordForZoneName:(id)arg1;
- (BOOL)saveInContainer:(id)arg1 stateIsInconsistent:(BOOL)arg2;
- (BOOL)saveAliasRecordInContainer:(id)arg1;
- (BOOL)saveDocumentContentsRecordInContainer:(id)arg1;
- (BOOL)saveDirOrDocStructureRecordInContainer:(id)arg1;
- (BOOL)saveStructureRecordInContainer:(id)arg1;
- (BOOL)saveInconsistentRecordInContainer:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)brc_updateDroppedReason;
- (id)brc_oplockMergeEtag;
- (BOOL)brc_isInterestingRecordForSyncDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

