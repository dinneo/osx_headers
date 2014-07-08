//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PAStackshot;

@interface PAStackshotTask : NSObject
{
    struct task_snapshot *_task_snap;
    PAStackshot *_stackshot;
    long long _bytesUsedByThreads;
    long long _bytesAvailableForThreads;
    void *_imageInfos;
    void *_mainBinary;
    int *_donationReceivingPids;
}

- (const struct task_snapshot *)task_snap;
- (unsigned long long)bytesUsedInBuffer;
- (unsigned long long)bytesUsedByThreads;
- (void)iterateThreads:(CDUnknownBlockType)arg1;
- (id)copyDonationReceivingPids;
- (id)copyImageInfos;
- (struct dyld_uuid_info_64)mainBinary;
- (unsigned long long)numImageInfos;
- (BOOL)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2;
- (id)initWithStackshot:(id)arg1;
- (unsigned int)powerstatsFlags;
- (BOOL)isFromMicrostackshot;
@property(readonly) BOOL isForeground;
@property(readonly) BOOL isSuppressed;
@property(readonly) BOOL isDarwinBG;
@property(readonly) const char *name;
@property(readonly) int pid;
- (unsigned long long)bytesUsedByHeader;
- (unsigned long long)_bytesUsedByDonationReceivingPids;
- (unsigned long long)_bytesUsedByImageInfos;

@end
