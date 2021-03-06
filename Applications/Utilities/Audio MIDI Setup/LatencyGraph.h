//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTimer;

@interface LatencyGraph : NSView
{
    struct RecentEventTimes mTimes[100];
    int mNumTimes;
    struct CAMutex *mTimesMutex;
    NSTimer *mLatencyRedrawTimer;
}

- (id).cxx_construct;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)clear;
- (void)update;
- (void)drawLatencies:(struct CGRect)arg1 bounds:(struct CGRect *)arg2 spacing:(int *)arg3;
- (void)readMIDI:(const struct MIDIPacketList *)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

