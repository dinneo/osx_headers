//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem;

@interface AVSynchronizedLayerInternal : NSObject
{
    AVPlayerItem *playerItem;
    BOOL isVisible;
    struct dispatch_queue_s *serialQueue;
}

@end
