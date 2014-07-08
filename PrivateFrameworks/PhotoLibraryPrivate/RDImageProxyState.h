//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDImageProxyStateModel.h>

#import "RDModelFingerprint.h"

@class NSString;

@interface RDImageProxyState : RDImageProxyStateModel <RDModelFingerprint>
{
}

+ (void)deleteForVersionUuids:(id)arg1 fromLibrary:(id)arg2;
@property(readonly, copy) NSString *debugDescription;
- (id)currentStateDescription;
- (void)setGeneratedFingerprintWithHandler:(CDUnknownBlockType)arg1;
- (void)setAllThumbnailsCurrent:(BOOL)arg1;
- (BOOL)allThumbnailsCurrent;
- (id)uuid;
- (void)setModelDefaults;
- (id)initForVersionId:(id)arg1 versionUuid:(id)arg2 inLibrary:(id)arg3;
- (id)initForVersion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
