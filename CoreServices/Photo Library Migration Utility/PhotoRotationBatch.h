//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RKTerminationDelegateProtocol.h"

@class NSMutableSet;

@interface PhotoRotationBatch : NSObject <RKTerminationDelegateProtocol>
{
    struct IPPhotoList *_uploadPhotos;
    NSMutableSet *_rotatingPhotoIds;
    CDUnknownBlockType _progressBlock;
    unsigned long long _rotatedPhotoCount;
}

+ (void)commitRotationForPhotoList:(struct IPPhotoList *)arg1 progressBlock:(CDUnknownBlockType)arg2;
+ (id)uploadBatchWithPhotoList:(struct IPPhotoList *)arg1;
@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain) NSMutableSet *rotatingPhotoIds; // @synthesize rotatingPhotoIds=_rotatingPhotoIds;
- (unsigned long long)applicationShouldTerminate;
- (void)checkPendingPhotos;
- (void)didRotatePhoto:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (void)setUploadPhotos:(struct IPPhotoList *)arg1;
- (void)commitPhotosWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPhotoList:(struct IPPhotoList *)arg1;

@end

