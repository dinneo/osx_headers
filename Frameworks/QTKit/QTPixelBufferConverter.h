//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QTPixelBufferConverter : NSObject
{
    struct QTPixelBufferConverterInternal *_internal;
}

- (BOOL)convertFromPixelBuffer:(struct __CVBuffer *)arg1 toPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (void)finalize;
- (void)dealloc;
- (void)tearDown;
- (id)init;

@end

