//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRQueryItem, NSProgress;

__attribute__((visibility("hidden")))
@interface BRQueryItemProgressObserver : NSObject
{
    BRQueryItem *_item;
    struct dispatch_queue_s *_queue;
    id _subscriber;
    NSProgress *_progress;
    BOOL _stopped;
    BOOL _isUpload;
    CDUnknownBlockType _progressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) BRQueryItem *item; // @synthesize item=_item;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)start;
- (void)stop;
- (id)description;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

