//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVThread : NSObject
{
    id _target;
    SEL _selector;
    id _argument;
    SEL _didEndSelector;
    BOOL _cancelled;
}

+ (id)workOn:(id)arg1 withSelector:(SEL)arg2 withObject:(id)arg3 didEndSelector:(SEL)arg4;
- (void)startThread:(id)arg1;
- (BOOL)cancelled;
- (void)markAsCancelled;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 argument:(id)arg3 didEndSelector:(SEL)arg4;

@end

