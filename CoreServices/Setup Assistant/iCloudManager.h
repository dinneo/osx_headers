//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HiCloudManager.h"

@class FAFamilyCircle, NSArray, NSDictionary, NSMutableSet, NSString;

@interface iCloudManager : NSObject <HiCloudManager>
{
    BOOL existing;
    BOOL creating;
    BOOL agreedToTOS;
    NSString *username;
    NSString *password;
    BOOL _needsRepair;
    NSDictionary *_preloginDictionary;
    NSDictionary *_postloginDictionary;
    NSArray *_messagingAliases;
    NSDictionary *_keychainSyncStatus;
    BOOL _skipMobileMeDueToServerError;
    NSString *_localizedMobileMeError;
    BOOL _abortSetup;
    BOOL _abortSyncSetup;
    BOOL _abortSyncEscrowSetup;
    NSString *_currentOperation;
    id _delegate;
    NSDictionary *_potentialIdentityLogins;
    BOOL _noPostLoginDelegates;
    BOOL _agreedToTOS;
    BOOL _naggedAboutFMM;
    BOOL _isSignInReprompt;
    BOOL _commerceAccountNeedsRepair;
    BOOL _iCloudSecurityCodeIsGenerated;
    BOOL _iCloudSecurityCodeIsComplex;
    BOOL _approvalRequestWasSentDuringBuddy;
    BOOL _doingReset;
    BOOL _backupIsEnabled;
    BOOL _recoveryPerformedDuringBuddy;
    BOOL _isBackupNoCircleRecovery;
    BOOL _iForgotIsForiCloudReprompt;
    BOOL _enableFDE;
    BOOL _useFDEiCloudRecovery;
    BOOL _hasBeenOfferediCloudDriveMigration;
    BOOL _migrateToiCloudDrive;
    int _keychainSyncDestination;
    NSMutableSet *iCloudServicesToEnable;
    NSDictionary *_mainAccountResponseDict;
    NSDictionary *_mainAccountTOSVersionsDict;
    NSString *_commerceAccountUsername;
    NSString *_commerceAccountPassword;
    NSDictionary *_commerceAccountResponseDict;
    NSDictionary *_commerceAccountTOSVersionsDict;
    NSDictionary *_unifiedResponseDict;
    NSArray *_chosenMessagingAliases;
    NSString *_iCloudSecurityCode;
    NSString *_smsCountryCode;
    NSString *_smsPhoneNumber;
    NSString *_smsISOCode;
    NSString *_recoveryiCSC;
    NSString *_recoverySMSCode;
    NSString *_FDERecoveryKey;
    NSString *_FDEUserName;
    NSString *_FDEUserPassword;
    NSArray *_identityLoginsToLink;
    FAFamilyCircle *_circle;
}

+ (id)getiCloudBagWithUsername:(id)arg1 password:(id)arg2 tosVersions:(id)arg3 omittingDelegates:(id)arg4;
+ (id)appleProvidedIDDomainNames;
@property(retain) FAFamilyCircle *circle; // @synthesize circle=_circle;
@property(retain) NSArray *identityLoginsToLink; // @synthesize identityLoginsToLink=_identityLoginsToLink;
@property(readonly) NSDictionary *potentialIdentityLogins; // @synthesize potentialIdentityLogins=_potentialIdentityLogins;
@property BOOL migrateToiCloudDrive; // @synthesize migrateToiCloudDrive=_migrateToiCloudDrive;
@property BOOL hasBeenOfferediCloudDriveMigration; // @synthesize hasBeenOfferediCloudDriveMigration=_hasBeenOfferediCloudDriveMigration;
@property(copy) NSString *FDEUserPassword; // @synthesize FDEUserPassword=_FDEUserPassword;
@property(copy) NSString *FDEUserName; // @synthesize FDEUserName=_FDEUserName;
@property(copy) NSString *FDERecoveryKey; // @synthesize FDERecoveryKey=_FDERecoveryKey;
@property BOOL useFDEiCloudRecovery; // @synthesize useFDEiCloudRecovery=_useFDEiCloudRecovery;
@property BOOL enableFDE; // @synthesize enableFDE=_enableFDE;
@property BOOL iForgotIsForiCloudReprompt; // @synthesize iForgotIsForiCloudReprompt=_iForgotIsForiCloudReprompt;
@property int keychainSyncDestination; // @synthesize keychainSyncDestination=_keychainSyncDestination;
@property(copy) NSString *recoverySMSCode; // @synthesize recoverySMSCode=_recoverySMSCode;
@property(copy) NSString *recoveryiCSC; // @synthesize recoveryiCSC=_recoveryiCSC;
@property BOOL isBackupNoCircleRecovery; // @synthesize isBackupNoCircleRecovery=_isBackupNoCircleRecovery;
@property BOOL recoveryPerformedDuringBuddy; // @synthesize recoveryPerformedDuringBuddy=_recoveryPerformedDuringBuddy;
@property BOOL backupIsEnabled; // @synthesize backupIsEnabled=_backupIsEnabled;
@property BOOL doingReset; // @synthesize doingReset=_doingReset;
@property BOOL approvalRequestWasSentDuringBuddy; // @synthesize approvalRequestWasSentDuringBuddy=_approvalRequestWasSentDuringBuddy;
@property(copy) NSString *smsISOCode; // @synthesize smsISOCode=_smsISOCode;
@property(copy) NSString *smsPhoneNumber; // @synthesize smsPhoneNumber=_smsPhoneNumber;
@property(copy) NSString *smsCountryCode; // @synthesize smsCountryCode=_smsCountryCode;
@property BOOL iCloudSecurityCodeIsComplex; // @synthesize iCloudSecurityCodeIsComplex=_iCloudSecurityCodeIsComplex;
@property BOOL iCloudSecurityCodeIsGenerated; // @synthesize iCloudSecurityCodeIsGenerated=_iCloudSecurityCodeIsGenerated;
@property(copy) NSString *iCloudSecurityCode; // @synthesize iCloudSecurityCode=_iCloudSecurityCode;
@property(retain) NSArray *chosenMessagingAliases; // @synthesize chosenMessagingAliases=_chosenMessagingAliases;
@property(retain) NSDictionary *unifiedResponseDict; // @synthesize unifiedResponseDict=_unifiedResponseDict;
@property(retain) NSDictionary *commerceAccountTOSVersionsDict; // @synthesize commerceAccountTOSVersionsDict=_commerceAccountTOSVersionsDict;
@property(retain) NSDictionary *commerceAccountResponseDict; // @synthesize commerceAccountResponseDict=_commerceAccountResponseDict;
@property BOOL commerceAccountNeedsRepair; // @synthesize commerceAccountNeedsRepair=_commerceAccountNeedsRepair;
@property(copy) NSString *commerceAccountPassword; // @synthesize commerceAccountPassword=_commerceAccountPassword;
@property(copy) NSString *commerceAccountUsername; // @synthesize commerceAccountUsername=_commerceAccountUsername;
@property(retain) NSDictionary *mainAccountTOSVersionsDict; // @synthesize mainAccountTOSVersionsDict=_mainAccountTOSVersionsDict;
@property(retain) NSDictionary *mainAccountResponseDict; // @synthesize mainAccountResponseDict=_mainAccountResponseDict;
@property BOOL isSignInReprompt; // @synthesize isSignInReprompt=_isSignInReprompt;
@property BOOL naggedAboutFMM; // @synthesize naggedAboutFMM=_naggedAboutFMM;
@property(retain) NSMutableSet *iCloudServicesToEnable; // @synthesize iCloudServicesToEnable;
@property BOOL noPostLoginDelegates; // @synthesize noPostLoginDelegates=_noPostLoginDelegates;
@property BOOL abortSyncEscrowSetup; // @synthesize abortSyncEscrowSetup=_abortSyncEscrowSetup;
@property BOOL abortSyncSetup; // @synthesize abortSyncSetup=_abortSyncSetup;
@property BOOL abortSetup; // @synthesize abortSetup=_abortSetup;
@property(readonly) NSDictionary *postloginDictionary; // @synthesize postloginDictionary=_postloginDictionary;
@property(readonly) NSDictionary *preloginDictionary; // @synthesize preloginDictionary=_preloginDictionary;
@property(copy) NSString *localizedMobileMeError; // @synthesize localizedMobileMeError=_localizedMobileMeError;
@property BOOL skipMobileMeDueToServerError; // @synthesize skipMobileMeDueToServerError=_skipMobileMeDueToServerError;
@property BOOL agreedToTOS; // @synthesize agreedToTOS=_agreedToTOS;
@property BOOL needsRepair; // @synthesize needsRepair=_needsRepair;
@property(copy) NSString *password; // @synthesize password;
@property(copy) NSString *username; // @synthesize username;
@property BOOL existing; // @synthesize existing;
@property BOOL creating; // @synthesize creating;
@property(readonly) BOOL isParentallyControlled;
@property(readonly) NSArray *familyMembers;
- (id)familyCircle;
- (BOOL)checkLocalUserForiCloudAsLogin;
- (BOOL)keychainSyncNeedsUI;
@property(retain) NSDictionary *keychainSyncStatus;
@property(readonly) NSArray *messagingAliases;
@property(readonly) NSString *userFullname;
- (void)_callAOSMethodOnQuitIfNecessary;
@property(readonly) NSDictionary *FDEState;
- (id)_keychainSyncState;
- (BOOL)_doPostUserCreationSetup:(id *)arg1 inProcess:(BOOL)arg2 window:(id)arg3;
- (BOOL)hasAppleProvidedID;
- (BOOL)applySettings:(id *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
