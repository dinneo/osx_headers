//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingConcurrentVBLPreprocessFilter.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingConcurrentPageAlignmentAnimation : _NSScrollingConcurrentVBLPreprocessFilter
{
    struct CGPoint _initialOrigin;
    struct CGPoint _destinationOrigin;
    double _initialTimestamp;
}

@property struct CGPoint destinationOrigin; // @synthesize destinationOrigin=_destinationOrigin;
@property struct CGPoint initialOrigin; // @synthesize initialOrigin=_initialOrigin;
- (void)scrollingVBLMonitor:(id)arg1 synchronizeForVBLSerialNumber:(unsigned long long)arg2 timestamp:(double)arg3 updateDuration:(double)arg4;
- (void)dealloc;
- (id)init;

@end

