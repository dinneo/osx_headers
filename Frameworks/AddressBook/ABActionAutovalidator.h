//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABActionAutovalidatorCache;

@interface ABActionAutovalidator : NSObject
{
    id _target;
    ABActionAutovalidatorCache *_cache;
}

- (id)description;
- (SEL)selectorForMenuAction:(SEL)arg1;
- (SEL)selectorForSimpleAction:(SEL)arg1;
- (id)setEntryForAction:(SEL)arg1;
- (BOOL)isValidAction:(SEL)arg1 withMenuItem:(id)arg2;
- (BOOL)isAlwaysValid:(SEL)arg1;
- (BOOL)validateAction:(SEL)arg1 withMenuItem:(id)arg2;
- (BOOL)validateAction:(SEL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 cache:(id)arg2;

@end

