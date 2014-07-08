//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSyncSet.h"

@class NSString, SPeer, SPeer_FS, SSyncSet_PHD_SharedData;

@interface SSyncSet_PHD : SSyncSet
{
}

+ (id)PHDSyncSet;
+ (id)createPHDSyncSetForLocalPath:(id)arg1 remoteHomeSpec:(id)arg2 mountSuffixPath:(id)arg3 name:(id)arg4;
- (void)_setupNewPHDSyncSetWithLocalPath:(id)arg1 homeSpec:(id)arg2 mountSuffixPath:(id)arg3;
- (void)setSyncSetStatus:(id)arg1;
@property(retain, nonatomic) NSString *remoteHomeXMLSpec;
@property(retain, nonatomic) NSString *remoteHomePath;
@property(retain, nonatomic) NSString *mountSuffixPath;
@property(readonly, retain, nonatomic) SSyncSet_PHD_SharedData *shared;
@property(readonly, retain, nonatomic) NSString *remoteRootURLString;
@property(readonly, retain, nonatomic) SPeer *remotePeer;
@property(readonly, retain, nonatomic) SPeer *localPeer;
- (BOOL)isPHDSyncSet;
- (double)fileSystemQuiescenceDelayMax;
- (double)fileSystemQuiescenceDelay;

// Remaining properties
@property(retain, nonatomic) SPeer_FS *localHomePeer; // @dynamic localHomePeer;
@property(retain, nonatomic) SPeer *serverHomePeer; // @dynamic serverHomePeer;

@end
