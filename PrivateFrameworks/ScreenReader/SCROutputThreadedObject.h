//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCRCThreadKey;

__attribute__((visibility("hidden")))
@interface SCROutputThreadedObject : NSObject
{
    SCRCThreadKey *_threadKey;
}

- (id)threadKey;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)processNotification:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

