//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PerformanceAnalysis/PASampleAggregator.h>

@class NSString;

@interface PAProcessInstanceAggregator : PASampleAggregator
{
    unsigned long long _timestampsDisplayOffset;
    NSString *_headerNote;
    unsigned long long _stackshotFrameAddress;
    unsigned long long _idleWorkQueueFrameAddress;
}

@property unsigned long long idleWorkQueueFrameAddress; // @synthesize idleWorkQueueFrameAddress=_idleWorkQueueFrameAddress;
@property unsigned long long stackshotFrameAddress; // @synthesize stackshotFrameAddress=_stackshotFrameAddress;
@property(copy) NSString *headerNote; // @synthesize headerNote=_headerNote;
- (void)printFooterToStream:(struct __sFILE *)arg1;
- (void)printHeaderToStream:(struct __sFILE *)arg1;
- (id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1;
- (id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)sortedTasks;
- (void)filterToMachTimeRangeStart:(double)arg1 end:(double)arg2;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (unsigned long long)sampleIndexForDisplayTimeIndex:(int)arg1;
- (int)displayTimeIndexForTimestampIndex:(unsigned long long)arg1;
- (id)sampleTaskWithPid:(int)arg1 atTimestampIndex:(unsigned long long)arg2;
- (id)kernelSampleTaskAtTimestampIndex:(unsigned long long)arg1;
- (id)initWithSampleStore:(id)arg1;
@property(readonly) BOOL hasTargetProcess;
@property BOOL printHeavyStacks;
@property BOOL printSpinSignatureStack;

@end

