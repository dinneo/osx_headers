//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SNodeChildFinder : NSObject
{
    struct __CFDictionary *_dict;
    unsigned long long _numData;
    unsigned long long _numSlots;
    CDStruct_b292f685 *_dataBuff;
}

- (CDStruct_b292f685 *)_findChildNamed:(id)arg1 hash:(void *)arg2 remove:(BOOL)arg3;
- (CDStruct_b292f685 *)_addChild:(id)arg1;
- (void)resetFoundFlags;
- (void)removedChild:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *remainingChildren;
- (id)findChildNamed:(id)arg1;
- (void)addedChild:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithParentNode:(id)arg1;

@end

