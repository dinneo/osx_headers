//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface NSLayerImageQueueBuffer : NSObject
{
    NSMapTable *_table;
}

+ (int)bufferType;
+ (id)bufferWithIOAccelSurfaceID:(unsigned long long)arg1 accelerator:(unsigned int)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 opaque:(BOOL)arg5 flipped:(BOOL)arg6 colorspace:(struct CGColorSpace *)arg7;
+ (id)bufferWithIOSurface:(struct __IOSurface *)arg1;
+ (id)bufferWithCGImage:(struct CGImage *)arg1;
+ (id)bufferWithCGSConnection:(unsigned int)arg1 window:(unsigned int)arg2 surface:(unsigned int)arg3;
- (void)dealloc;
- (id)init;
- (unsigned long long)registerBufferWithCAImageQueue:(struct _CAImageQueue *)arg1;
- (unsigned long long)bufferIDForImageQueue:(struct _CAImageQueue *)arg1;

@end

