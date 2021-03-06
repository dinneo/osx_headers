//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AssetManagementClientDelegate.h"
#import "AssetManagementDaemonStatusDelegate.h"
#import "PhotoStreamPreferencesDelegate.h"

@class AssetManagementClient, AssetManagementDaemonStatusController, NSNumber, NSOperationQueue, NSTimer, PhotoStreamImportManager, SharedPhotoStreamController;

@interface PhotostreamController : NSObject <PhotoStreamPreferencesDelegate, AssetManagementDaemonStatusDelegate, AssetManagementClientDelegate>
{
    BOOL _activityCount;
    AssetManagementClient *_assetManagementClient;
    AssetManagementDaemonStatusController *_statusController;
    NSOperationQueue *_backgroundTaskQueue;
    BOOL _libraryMatch;
    BOOL _didPerformInitialLibraryMatchCheck;
    PhotoStreamImportManager *_photoStreamImportManager;
    SharedPhotoStreamController *_sharedPhotoStreamController;
    NSTimer *_checkStreamTimer;
    BOOL _networkReachable;
    NSNumber *_photoStreamExplicitlyDisabledForThisLibrary;
    unsigned long long _deleteProcessingState;
    BOOL _removingPersonInfo;
    long long _state;
}

@property long long state; // @synthesize state=_state;
@property(nonatomic, getter=deleteProcessingState, setter=setDeleteProcessingState:) unsigned long long deleteProcessingState; // @synthesize deleteProcessingState=_deleteProcessingState;
@property(getter=isNetworkReachable) BOOL networkReachable; // @synthesize networkReachable=_networkReachable;
@property(retain) NSTimer *checkStreamTimer; // @synthesize checkStreamTimer=_checkStreamTimer;
@property(retain) SharedPhotoStreamController *sharedPhotoStreamController; // @synthesize sharedPhotoStreamController=_sharedPhotoStreamController;
@property(retain) PhotoStreamImportManager *photoStreamImportManager; // @synthesize photoStreamImportManager=_photoStreamImportManager;
@property BOOL libraryMatch; // @synthesize libraryMatch=_libraryMatch;
@property(retain, nonatomic) AssetManagementDaemonStatusController *statusController; // @synthesize statusController=_statusController;
@property(retain) NSOperationQueue *backgroundTaskQueue; // @synthesize backgroundTaskQueue=_backgroundTaskQueue;
@property(retain, nonatomic) AssetManagementClient *assetManagementClient; // @synthesize assetManagementClient=_assetManagementClient;
- (void)testDaemonConnection;
- (void)showPhotostreamStatus;
- (void)setShouldUploadAutomatically:(BOOL)arg1;
- (BOOL)shouldUploadAutomatically;
- (void)setShouldImportAutomatically:(BOOL)arg1;
- (BOOL)shouldImportAutomatically;
- (BOOL)hasUnimportedItems;
- (void)photoStreamPreferencesController:(id)arg1 beginImportWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)photoStreamPreferencesControllerDidEnableSharedPhotoStream:(id)arg1;
- (void)photoStreamPreferencesControllerDidDisableSharedPhotoStream:(id)arg1;
- (void)photoStreamPreferencesControllerDidEnablePhotoStream:(id)arg1;
- (void)photoStreamPreferencesControllerDidDisablePhotoStream:(id)arg1;
- (void)updateLibraryMatchAndNotifyClientSideStateChange;
- (void)updateLibraryMatch;
- (void)enableBothPhotoStreamsForThisLibrary;
- (void)enableSharedPhotoStreamForThisLibrary;
- (BOOL)sharedPhotoStreamEnabledForThisLibrary;
- (BOOL)photoStreamEnabledForThisLibrary;
- (void)setPhotoStreamEnabledForThisLibrary:(BOOL)arg1;
- (void)updateUIIfNecessary;
- (BOOL)photoStreamShowingFirstTimeHelp;
- (void)_setPhotoStreamShowingFirstTimeHelp:(BOOL)arg1 shouldPost:(BOOL)arg2;
- (BOOL)photoStreamExplicitlyDisabledForThisLibrary;
- (void)setPhotoStreamExplicitlyDisabledForThisLibrary:(BOOL)arg1;
- (void)_setPhotoStreamExplicitlyDisabledForThisLibrary:(BOOL)arg1 shouldPost:(BOOL)arg2;
- (BOOL)photoStreamShowingFirstTimeHelpForThisLibrary;
- (BOOL)sharedPhotoStreamEnabledSystemWide;
- (BOOL)photoStreamEnabledSystemWide;
- (BOOL)resetPhotoStreamFeature;
- (id)applicationPrefix;
- (BOOL)shouldAutomaticallySwitchToCurrentLibrary;
- (id)currentLibraryDescription;
- (id)currentLibraryName;
- (id)currentLibraryId;
- (BOOL)hasActivity;
- (void)clearActivityCount;
- (void)decrementActivityCount;
- (void)incrementActivityCount;
- (void)photostreamDidReceiveShareStateUpdate:(id)arg1;
- (void)mediaStreamClientAgentConnectionDied:(id)arg1;
- (void)mediaStreamContentChanged:(id)arg1;
- (void)mediaStreamClientAgentConnectionEstablished:(id)arg1;
- (void)photoStreamClientSideStateChanged:(id)arg1;
- (void)photoStreamConfigurationChanged:(id)arg1;
- (BOOL)isPhotoStreamSelectedInSourceList;
- (void)didDuplicatePhoto:(id)arg1;
- (void)photostreamDidFinishSingleAssetRetrieval:(id)arg1;
- (void)appDidFinishLaunching;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)albumManagerLoadedAlbums:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (id)photoStreamMetadataForPhoto:(struct IPPhotoInfo *)arg1;
- (id)photoStreamUploadPathForPhoto:(struct IPPhotoInfo *)arg1;
- (BOOL)uploadSelection:(id)arg1;
- (BOOL)uploadSelection:(id)arg1 feedbackType:(unsigned long long)arg2;
- (void)_doUploadPhotoList:(struct IPPhotoList *)arg1 feedbackType:(unsigned long long)arg2;
- (void)photoStreamUploadMustEnableAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)photoStreamUnimportedWebAlbumPhotosUploadAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)photoStreamUnsupportedUploadAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)deletePhotoList:(struct IPPhotoList *)arg1 sourceAlbum:(id)arg2;
- (void)_deletePhotosAlertDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (BOOL)deletePhotoList:(struct IPPhotoList *)arg1 modalWindow:(id)arg2 alertOptions:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)sharedStreamIdentifierMapForPhotoList:(struct IPPhotoList *)arg1;
- (BOOL)deletePhotoList:(struct IPPhotoList *)arg1 modalWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, getter=isDeletePaused) BOOL deletePaused;
- (BOOL)uploadPhotoList:(struct IPPhotoList *)arg1 modalWindow:(id)arg2;
- (id)configuredPhotostreamUploadSelectionForPhotoList:(struct IPPhotoList *)arg1;
- (void)removeAllSharedPhotoStreamAlbums;
- (id)personChildAlbumMap;
- (id)personChildAlbumIDs;
- (void)removePhotosAndChildAlbumForPersonId:(id)arg1 notifyAgent:(BOOL)arg2;
- (id)frontVisibleWindow;
- (void)removeAllPhotosInAlbum:(id)arg1 showProgress:(BOOL)arg2;
- (void)removeAllPhotosInAlbum:(id)arg1 showProgress:(BOOL)arg2 progressText:(id)arg3;
- (void)removePhotosAndChildAlbumForAllPersonIds;
- (void)updatePersonAlbums:(id)arg1;
- (void)requestPersonAlbumsUpdate;
- (void)_requestPersonAlbumsUpdate;
- (id)findOrCreateChildAlbumForPersonId:(id)arg1;
- (void)updateStreamNames:(id)arg1;
- (void)requestStreamNameUpdate;
- (BOOL)isBeta;
- (void)checkForImportAndStreamAssets;
- (void)_checkForAssets;
- (void)checkForAssets;
- (id)photoStreamForcedImportTaskController;
- (id)supportedTypeRestrictionList;
- (BOOL)stopPhotostreamAgent;
- (BOOL)startPhotostreamAgent;
- (void)ensurePhotoStreamAgentRunningIfEnabled;
- (void)pollPhotostream;
- (id)photostreamAlbum;
- (void)setupController;
- (void)setupOperationQueues;
- (BOOL)isRunning;
- (void)dealloc;
- (id)init;

@end

