//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface QTImageBufferQueue : NSObject <NSCopying>
{
    struct QTImageBufferQueueInternal *_internal;
}

- (void)sendImageBuffersToConsumer:(id)arg1;
- (void)removeImageBuffersAfterHostTime:(unsigned long long)arg1;
- (void)removeImageBuffersBeforeHostTime:(unsigned long long)arg1;
- (void)removeAllImageBuffers;
- (void)getImageBuffer:(struct __CVBuffer **)arg1 hostTime:(unsigned long long *)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)getImageBuffers:(struct __CVBuffer **)arg1 hostTimes:(unsigned long long *)arg2 minHostTime:(unsigned long long)arg3 maxHostTime:(unsigned long long)arg4 maxCount:(unsigned long long)arg5;
- (unsigned long long)copyAndDequeueImageBuffers:(struct __CVBuffer **)arg1 hostTimes:(unsigned long long *)arg2 minHostTime:(unsigned long long)arg3 maxHostTime:(unsigned long long)arg4 maxCount:(unsigned long long)arg5;
- (unsigned long long)copyAndDequeueImageBuffers:(struct __CVBuffer **)arg1 hostTimes:(unsigned long long *)arg2 beforeHostTime:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;
- (BOOL)copyAndDequeueEarliestImageBuffer:(struct __CVBuffer **)arg1 hostTime:(unsigned long long *)arg2;
- (void)enqueueImageBuffer:(struct __CVBuffer *)arg1 forHostTime:(unsigned long long)arg2;
- (struct __CVBuffer *)imageBufferForHostTime:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

