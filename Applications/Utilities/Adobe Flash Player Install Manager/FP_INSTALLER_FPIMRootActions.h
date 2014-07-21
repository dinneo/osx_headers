//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FP_INSTALLER_FPIMRootActions : NSObject
{
    struct AuthorizationOpaqueRef *mSharedAuthorizationToken;
}

+ (id)sharedInstance;
- (int)runHelperTool:(id)arg1 withArguments:(id)arg2 withOutput:(id *)arg3;
- (void)unloadSAUDaemon;
- (BOOL)setFPUpdateMode:(int)arg1;
- (int)installPackageFile:(id)arg1 installOutput:(id *)arg2;
- (void)recursiveCopyFileFromPath:(id)arg1 toPath:(id)arg2;
- (void)createDirectory:(id)arg1;
- (void)forgetFlatPackageWithBundleID:(id)arg1;
- (void)removeFile:(id)arg1;
- (void)forceQuitPID:(int)arg1;
- (id)externalizedAuthorizationToken;
- (void)dealloc;
- (id)init;

@end
