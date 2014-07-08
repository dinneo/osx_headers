//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XMPPIQTarget.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface XMPPCapabilityManager : NSObject <XMPPIQTarget>
{
    id <XMPPCapabilityManagerDelegate> _delegate;
    NSString *_myName;
    NSString *_myNode;
    NSString *_myVer;
    NSArray *_myBaseCaps;
    NSMutableDictionary *_myExtendedCaps;
    NSMutableDictionary *_iqIDToEntryMap;
    NSMutableDictionary *_hostFeatures;
    NSMutableDictionary *_jidMappings;
    NSMutableDictionary *_waitingForReply;
    NSMutableSet *_waitingToSend;
}

+ (void)initialize;
+ (void)_saveCapsMappings;
+ (id)capsCacheFile;
+ (id)discoInfoNamespace;
- (void)setExtension:(id)arg1 registered:(BOOL)arg2 withCap:(id)arg3;
- (void)unregisterMyExtension:(id)arg1;
- (void)registerMyExtension:(id)arg1 withCaps:(id)arg2;
- (void)registerMyExtension:(id)arg1 withCap:(id)arg2;
- (void)addExtension:(id)arg1 toMappingWithCaps:(id)arg2;
- (void)addExtension:(id)arg1 toMappingWithCap:(id)arg2;
- (void)registerMyClientWithName:(id)arg1 node:(id)arg2 version:(id)arg3 caps:(id)arg4;
- (id)myCaps;
- (void)sendDiscoResponseForNode:(id)arg1;
- (id)_filterForNode:(id)arg1;
- (id)_allCaps;
- (void)updateJID:(id)arg1 withCapsNode:(id)arg2;
- (void)unregisterJID:(id)arg1;
- (void)registerJID:(id)arg1 withCapsNode:(id)arg2;
- (void)_sendCapsForJID:(id)arg1;
- (void)_mapCapsToJID:(id)arg1;
- (void)_addToQueryQueue:(id)arg1 forJID:(id)arg2;
- (void)_setCaps:(id)arg1 forEntry:(id)arg2;
- (void)_sendQueuedEntriesNow;
- (void)_sendQueuedEntries;
- (void)requestEntry:(id)arg1 forJID:(id)arg2;
- (BOOL)_handleRequestEntry:(id)arg1;
- (void)_notifyWaitlistForEntry:(id)arg1;
- (id)_processDiscoInfo:(id)arg1;
- (id)namespacesForJID:(id)arg1;
- (id)hostsWithCategory:(id)arg1 type:(id)arg2 features:(id)arg3;
- (id)hostsWithCategory:(id)arg1 type:(id)arg2;
- (void)discoverHostFeatures;
- (BOOL)_handleDiscoInfoReply:(id)arg1;
- (BOOL)_handleDiscoverHostFeaturesReply:(id)arg1;
- (id)_processDiscoItems:(id)arg1;
- (BOOL)_host:(id)arg1 supportsFeatures:(id)arg2;
- (void)registerIQCallbacksWithConnection:(id)arg1;
- (void)writeToPresenceTagForConnection:(id)arg1;
- (id)_connection;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)clearJIDCaches;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
