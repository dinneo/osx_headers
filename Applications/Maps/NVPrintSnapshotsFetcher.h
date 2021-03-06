//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_semaphore>;

__attribute__((visibility("hidden")))
@interface NVPrintSnapshotsFetcher : NSObject
{
    NSMutableArray *snapshotJobs;
    BOOL _wasFetchWithCompletionCalled;
    NSObject<OS_dispatch_semaphore> *previousJobDone;
    id <NVPrintSnapshotsFetcherDelegate> _delegate;
    NSArray *_snapshotOptions;
}

@property(retain, nonatomic) NSArray *snapshotOptions; // @synthesize snapshotOptions=_snapshotOptions;
@property(nonatomic) __weak id <NVPrintSnapshotsFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL wasFetchWithCompletionCalled;
- (void)fetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitForSnapshotAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberToFetch;

@end

