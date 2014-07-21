//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDecimalNumberBehaviors.h"

@class MLMediaGroup, MLMediaLibrary, NSCondition, NSDictionary;

@interface MediaLibraryObserver : NSObject <NSDecimalNumberBehaviors>
{
    MLMediaLibrary *mMLMediaLibrary;
    NSDictionary *mMediaSourcesDictionary;
    MLMediaGroup *mIPhotoRootMediaGroup;
    unsigned int mIPhotoLibraryModificationDateUTC;
    MLMediaGroup *mApertureRootMediaGroup;
    unsigned int mApertureLibraryModificationDateUTC;
    MLMediaGroup *mPhotosAppRootMediaGroup;
    unsigned int mPhotosAppLibraryModificationDateUTC;
    NSCondition *mKVOCondition;
    struct multimap<MediaLibraryRequestKey, MediaLibraryRequest *, std::__1::less<MediaLibraryRequestKey>, std::__1::allocator<std::__1::pair<const MediaLibraryRequestKey, MediaLibraryRequest *>>> mRequestMap;
}

+ (id)getInstance;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (short)scale;
- (unsigned long long)roundingMode;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (unsigned int)getLibraryModificationDateUTC:(int)arg1;
- (int)waitForProperty:(id)arg1 onObject:(id)arg2 withTimeout:(double)arg3 withMainThreadCallback:(function_10f65880)arg4 progressInfo:(struct ProgressInfo *)arg5 resultObject:(id *)arg6;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)copyRootMediaGroup:(int)arg1 fromMediaSource:(id)arg2 resultRootMediaGroup:(id *)arg3 forceUpdate:(_Bool)arg4 progressInfo:(struct ProgressInfo *)arg5;
- (int)copyMediaSourcesDictionary:(id *)arg1 forceUpdate:(_Bool)arg2 progressInfo:(struct ProgressInfo *)arg3;
- (id)getMediaLibrary;
- (void)dealloc;
- (id)init;

@end

