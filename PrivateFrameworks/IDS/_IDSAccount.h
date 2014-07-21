//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDaemonListenerProtocol.h"

@class IDSDevice, NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol>
{
    NSDictionary *_accountConfig;
    NSString *_serviceToken;
    NSString *_uniqueID;
    NSString *_service;
    NSMutableArray *_devices;
    IDSDevice *_localDevice;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMapTable *_registrationDelegateToInfo;
    BOOL _devicesLoaded;
    BOOL _isEnabled;
}

- (void)deactivateAndPurgeIdentify;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)authenticateAccount;
- (void)activeDevicesUpdatedForAccount:(id)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)_connect;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSData *registrationCertificate;
@property(readonly, nonatomic) NSArray *registeredURIs;
- (id)_registeredURIs;
@property(readonly, nonatomic) NSDate *dateRegistered;
@property(readonly, nonatomic) NSDate *nextRegistrationDate;
- (id)_keychainRegistration;
- (void)_callNearbyDevicesChanged;
- (void)_callDevicesChanged;
@property(readonly, retain, nonatomic) NSArray *nearbyDevices;
@property(readonly, retain, nonatomic) NSArray *devices;
- (void)_loadCachedDevices;
- (void)_updateDependentDevicesWithDevicesInfo:(id)arg1;
@property(readonly, nonatomic) NSString *profileID;
@property(readonly, nonatomic) int registrationStatus;
- (id)registrationInfo;
- (void)setAuthToken:(id)arg1;
- (void)setPassword:(id)arg1;
@property(readonly, nonatomic) int accountType;
@property(nonatomic, setter=_setIsEnabled:) BOOL _isEnabled;
@property(readonly, retain, nonatomic) NSString *uniqueID;
@property(readonly, retain, nonatomic) NSString *pushTopic;
@property(readonly, retain, nonatomic) NSString *primaryServiceName;
@property(readonly, retain, nonatomic) NSString *serviceName;
@property(retain, nonatomic) NSString *loginID;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSArray *vettedAliases;
@property(readonly, retain, nonatomic) NSArray *aliases;
@property(readonly, retain, nonatomic) NSArray *aliasStrings;
@property(readonly, nonatomic) BOOL canSend;
@property(readonly, nonatomic) NSDictionary *regionServerContext;
@property(readonly, nonatomic) NSString *regionBasePhoneNumber;
@property(readonly, nonatomic) NSString *regionID;
@property(readonly, retain, nonatomic) NSDictionary *profileInfo;
- (void)updateAccountWithAccountInfo:(id)arg1;
@property(retain, nonatomic) NSDictionary *accountInfo;
@property(readonly, nonatomic) BOOL isActive;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)_objectForKey:(id)arg1;
- (void)_callRegistrationDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)addRegistrationDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(struct dispatch_group_s *)arg2;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (BOOL)_isiCloudPairingService;
- (void)dealloc;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

