//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LiCountdownBlock : NSObject
{
    int _waitCount;
    CDUnknownBlockType _block;
}

@property(nonatomic) int waitCount; // @synthesize waitCount=_waitCount;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)trigger;
- (id)initForCount:(int)arg1 withBlock:(CDUnknownBlockType)arg2;

@end

