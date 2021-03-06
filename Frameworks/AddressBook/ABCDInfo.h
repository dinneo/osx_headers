//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCDRecord.h>

__attribute__((visibility("hidden")))
@interface ABCDInfo : ABCDRecord
{
}

+ (id)nts_CreateInfoWithAddressBook:(id)arg1 inPersistentStoreAtURL:(id)arg2;
+ (id)_generateSerialNumber;
+ (id)metadataType;
+ (id)_table;
+ (id)abEntityName;
+ (BOOL)_isPublicRecord;
+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary *)arg4 valueWithEntityConverter:(struct __CFDictionary *)arg5;
- (id)fetchedAddressBookSourceWithAddressBook:(id)arg1 store:(id)arg2;
- (id)initWithUniqueId:(id)arg1 addressBook:(id)arg2;
- (id)parentGroups;
- (void)setReadWriteSharingACL:(id)arg1;
- (id)readWriteSharingACL;
- (void)setReadSharingACL:(id)arg1;
- (id)readSharingACL;
- (void)setRemoteLocations:(id)arg1;
- (id)remoteLocations;
- (id)copyMultiValueWithRecord:(id)arg1 withProperty:(id)arg2;
- (BOOL)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3;
- (void)setSerialNumber:(id)arg1;
- (id)serialNumber;
- (void)setMeUniqueId:(id)arg1;
- (id)meUniqueId;

@end

