//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCAccountSession, BRCLocalItem;

__attribute__((visibility("hidden")))
@interface BRCPackageManifestForUpload : NSObject
{
    BRCAccountSession *_session;
    long long _firstAssetRankMissingSignature;
    unsigned long long _firstPackageItemIndexMissingSignature;
    BRCLocalItem *_item;
}

@property(readonly, nonatomic) BRCLocalItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (BOOL)finishPackageUploadWithRecord:(id)arg1 error:(id *)arg2;
- (id)constructPackageAndWriteManifestWithError:(id *)arg1;
- (id)assetWithError:(id *)arg1;
- (id)ck_manifestURL;
- (id)br_manifestURL;
- (id)initWithLocalItem:(id)arg1;

@end

