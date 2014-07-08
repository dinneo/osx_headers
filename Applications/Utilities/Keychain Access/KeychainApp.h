//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

#import "KCUserAgent.h"
#import "NSApplicationDelegate.h"

@class NSArray, NSMenu, NSMenuItem, NSMutableArray, NSString, RevocationPrefs;

@interface KeychainApp : NSApplication <KCUserAgent, NSApplicationDelegate>
{
    NSMutableArray *_terminationHandlers;
    unsigned int _autoLaunchHidden:1;
    unsigned int _mainThreadIsBusy:1;
    unsigned int _fatalError:1;
    unsigned int _appHasFinishedLaunching:1;
    unsigned int _terminateReply:4;
    unsigned int _currentHandlerIndex:24;
    NSArray *filesPassedIn;
    RevocationPrefs *_revocationPrefs;
    NSMenuItem *_keychainsMenuItem;
    NSMenu *_windowsMenu;
    NSMenu *_sortMenu;
    NSMenu *_certAsstMenu;
}

+ (id)viewerWindow;
+ (BOOL)currentlyOnMainThread;
- (BOOL)isTerminating;
- (void)handler:(id)arg1 approvedQuit:(BOOL)arg2;
- (void)removeTerminationHandler:(id)arg1;
- (void)addTerminationHandler:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)terminateNoConfirm;
- (void)reportException:(id)arg1;
- (id)openStoreAtPath:(id)arg1 andMakeKey:(BOOL)arg2;
- (id)certAssistantMenu;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)sortByExpirationDate:(id)arg1;
- (void)sortByModDate:(id)arg1;
- (void)sortByKeychain:(id)arg1;
- (void)sortByKind:(id)arg1;
- (void)sortByName:(id)arg1;
- (void)sortDescending:(id)arg1;
- (void)sortAscending:(id)arg1;
- (void)export:(id)arg1;
- (void)import:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)makeDefault:(id)arg1;
- (void)deleteKeychain:(id)arg1;
- (void)addKeychain:(id)arg1;
- (void)toggleKeychainsView:(id)arg1;
- (void)toggleItemPreview:(id)arg1;
- (void)changePassword:(id)arg1;
- (void)changeSettings:(id)arg1;
- (void)find:(id)arg1;
- (void)toggleLock:(id)arg1;
- (void)copyToClipboard:(id)arg1;
- (void)goThere:(id)arg1;
- (void)lockAll:(id)arg1;
- (void)kcaPreferences:(id)arg1;
- (void)keychainList:(id)arg1;
- (void)newIdentityPreference:(id)arg1;
- (void)newSecureNoteItem:(id)arg1;
- (void)newPasswordItem:(id)arg1;
- (void)newKeychain:(id)arg1;
- (void)showExpiredCerts:(id)arg1;
- (void)evaluateCerts:(id)arg1;
- (void)createACertAsACertAuthority:(id)arg1;
- (void)setDefaultCA:(id)arg1;
- (void)createCA:(id)arg1;
- (void)requestACertificate:(id)arg1;
- (void)createACertificate:(id)arg1;
- (void)openCertificateAssistant:(id)arg1;
- (void)openTicketViewer:(id)arg1;
- (void)showFirstAidWindow:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)showViewerWindow:(id)arg1;
- (void)showInfoPanel:(id)arg1;
- (void)getInfo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)processPassedInFiles:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)firedAtMidnight;
- (void)applicationWillFinishLaunching:(id)arg1;
- (id)init;
- (BOOL)isMainThreadBusy;
- (void)doneBeingBusy;
- (void)showThreadIsBusy;
- (BOOL)queryUserForYesNoWithMessage:(id)arg1 title:(id)arg2 yesTitle:(id)arg3 noTitle:(id)arg4;
- (void)alertUserWithMessage:(id)arg1 title:(id)arg2;
- (long long)runAlertPanelWithTitle:(id)arg1 defaultTitle:(id)arg2 alternateTitle:(id)arg3 otherTitle:(id)arg4 message:(id)arg5;
- (void)_runAlertPanelInMainThreadWithInfo:(struct AlertInfo *)arg1;
- (void)makeObject:(id)arg1 performOnewaySelectorInMainThread:(SEL)arg2 withObject:(id)arg3;
- (void)makeObject:(id)arg1 performSelectorInMainThread:(SEL)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (void)makeObject:(id)arg1 performSelectorInMainThread:(SEL)arg2 withObject:(id)arg3;
- (void)postNotificationInMainThread:(id)arg1;
- (void)setupMainThreadObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
