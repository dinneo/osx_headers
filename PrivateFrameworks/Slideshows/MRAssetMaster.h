//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRImage, MRImageManager, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface MRAssetMaster : NSObject
{
    NSMutableDictionary *_players;
    NSMutableSet *_unusedPlayers;
    BOOL _isEmbeddedAsset;
    BOOL _isValid;
    BOOL _isSupportedMovie;
    NSString *_path;
    MRImageManager *_imageManager;
    MRImage *_thumbnail;
    double _timestamp;
    struct CGSize _originalSize;
}

@property(readonly) NSDictionary *players; // @synthesize players=_players;
@property(readonly) BOOL isSupportedMovie; // @synthesize isSupportedMovie=_isSupportedMovie;
@property(readonly) BOOL isValid; // @synthesize isValid=_isValid;
@property(readonly) BOOL isEmbeddedAsset; // @synthesize isEmbeddedAsset=_isEmbeddedAsset;
@property(readonly) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) MRImageManager *imageManager; // @synthesize imageManager=_imageManager;
- (BOOL)purgeResources;
@property(readonly) MRImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void)relinquishPlayer:(id)arg1;
- (id)retainedByUserPlayerForSize:(struct CGSize)arg1 andOptions:(id)arg2;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPath:(id)arg1 originalSize:(struct CGSize)arg2 isEmbeddedAsset:(BOOL)arg3 isSupportedMovie:(BOOL)arg4 andImageManager:(id)arg5;

@end
