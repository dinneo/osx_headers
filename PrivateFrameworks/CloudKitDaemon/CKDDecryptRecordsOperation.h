//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSObject<OS_dispatch_group>;

@interface CKDDecryptRecordsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _recordDecryptedBlock;
    NSArray *_recordsToDecrypt;
    NSObject<OS_dispatch_group> *_recordDecryptGroup;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property(retain, nonatomic) NSArray *recordsToDecrypt; // @synthesize recordsToDecrypt=_recordsToDecrypt;
@property(copy, nonatomic) CDUnknownBlockType recordDecryptedBlock; // @synthesize recordDecryptedBlock=_recordDecryptedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapPackageAssets:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapAssetKey:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;
- (id)_unwrapEncryptedData:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2 forField:(id)arg3;
- (void)_handleProtectionDataForRecord:(id)arg1;
- (void)_decryptRecord:(id)arg1 usingWebSharingIdentityData:(id)arg2;
- (void)_decryptRecord:(id)arg1;
- (void)main;
- (BOOL)shouldCheckAppVersion;
- (void)_recordWasDecrypted:(id)arg1 withError:(id)arg2;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

