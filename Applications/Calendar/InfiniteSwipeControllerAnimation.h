//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAnimation.h"

@class InfiniteSwipeController;

@interface InfiniteSwipeControllerAnimation : NSAnimation
{
    InfiniteSwipeController *_controller;
    double _startPosition;
    double _endPosition;
}

@property double endPosition; // @synthesize endPosition=_endPosition;
@property double startPosition; // @synthesize startPosition=_startPosition;
@property __weak InfiniteSwipeController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;

@end
