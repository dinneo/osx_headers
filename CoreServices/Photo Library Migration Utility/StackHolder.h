//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface StackHolder : NSObject
{
    struct IPStack *mStack;
    BOOL mDeleteOnDealloc;
}

+ (id)hold:(struct IPStack *)arg1 deleteOnDealloc:(BOOL)arg2;
+ (id)hold:(struct IPStack *)arg1;
- (struct IPStack *)stack;
- (void)dealloc;
- (id)initWithStack:(struct IPStack *)arg1 deleteOnDealloc:(BOOL)arg2;

@end
