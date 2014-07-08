//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface Application : NSObject
{
    struct {
        unsigned int state:3;
        unsigned int subState:3;
        unsigned int backgroundState:4;
        unsigned int autoLaunched:1;
        unsigned int isPrivate:1;
        unsigned int hasSignalledItIsReady:1;
        unsigned int quitViaAEFailed:1;
        unsigned int isUIProcess:1;
        unsigned int isSpecialUIProcess:1;
        unsigned int launchNoted:1;
        unsigned int isFinder:1;
        unsigned int isDock:1;
        unsigned int isSystemUIServer:1;
        unsigned int isHung:1;
        unsigned int procNotFoundErr:1;
        unsigned int isHidden:1;
        unsigned int isSuppressingRelaunch:1;
        unsigned int isStopped:1;
        unsigned int UNUSED:7;
    } _appFlags;
    long long sequenceNumber;
    unsigned long long vmSize[2];
    unsigned long long rSize[2];
    int _appPID;
    struct ProcessSerialNumber _appContext;
    struct __LSASN *_appLSASNRef;
    NSString *path;
    NSString *name;
    NSString *bundleID;
    NSImage *icon;
    NSImage *smallIcon;
    NSImage *smallIcon2XHiDPI;
    long long _exitStatus;
    unsigned int _informationSeed;
    BOOL _quitAttemted;
    BOOL _triedToKill;
    BOOL _didKill;
}

+ (id)foregroundApplication;
+ (id)applicationForContext:(struct ProcessSerialNumber)arg1;
+ (id)existingApplicationForContext:(struct ProcessSerialNumber)arg1;
+ (id)addNewAppAndAddToCacheForContext:(struct ProcessSerialNumber)arg1;
+ (id)cachedApplicationWithContext:(struct ProcessSerialNumber)arg1;
+ (id)appController;
+ (void)setAppController:(id)arg1;
+ (void)initialize;
- (BOOL)tryToKill;
- (BOOL)isKillable;
- (BOOL)updateInformation;
- (void)updateName;
- (BOOL)isScreenSaver;
- (long long)sequenceNumber;
- (void)setQuitViaAEFailed:(BOOL)arg1;
- (BOOL)isRunning;
- (BOOL)isSystemUIServer;
- (BOOL)isDock;
- (void)setIsFinder:(BOOL)arg1;
- (BOOL)isFinder;
- (BOOL)wantsToSuppressRelaunch;
- (BOOL)launchNoted;
- (void)setLaunchNoted:(BOOL)arg1;
- (BOOL)isSpecialUIProcess;
- (BOOL)isUIProcess;
- (BOOL)isPrivate;
- (void)setSubState:(int)arg1;
- (int)subState;
- (void)setState:(int)arg1;
- (int)state;
- (BOOL)hasExitedNormally;
- (long long)exitStatus;
- (void)setExitStatus:(long long)arg1;
- (id)smallIcon2xHiDPI;
- (id)smallIcon;
- (id)icon;
- (void)setBundleID:(id)arg1;
- (id)bundleID;
- (id)name;
- (id)path;
- (unsigned long long)currentRSize;
- (unsigned long long)startRSize;
- (unsigned long long)currentVMSize;
- (unsigned long long)startVMSize;
- (BOOL)isStopped;
- (int)talBackgroundState;
- (BOOL)isHidden;
- (BOOL)isSubstateNormal;
- (BOOL)ishung;
- (void)setIsHung:(BOOL)arg1;
- (BOOL)sampleApp;
- (void)setIsForeground:(BOOL)arg1;
- (BOOL)isForeground;
- (void)activate;
- (void)setInformationSeed:(unsigned int)arg1;
- (unsigned int)informationSeed;
- (struct __LSASN *)appLSASNRef;
- (int)appPID;
- (struct ProcessSerialNumber)appContext;
- (void)setAppContext:(struct ProcessSerialNumber)arg1;
- (void)connectionDied:(id)arg1;
- (void)setKillAttempted:(BOOL)arg1;
- (BOOL)killAttempted;
- (void)setQuitAttemted:(BOOL)arg1;
- (BOOL)quitAttemted;
- (BOOL)procNotFoundErr;
- (void)setProcNotFoundErr:(BOOL)arg1;
- (void)setPrivate:(BOOL)arg1;
- (void)resume;
- (void)hardKill:(id)arg1;
- (BOOL)terminate;
- (BOOL)terminateWithForceQuitLib;
- (void)dealloc;

@end
