//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/__CFPointerArray.h>

__attribute__((visibility("hidden")))
@interface __CFx606449CPA : __CFPointerArray
{
    struct CFSlice slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
}

- (unsigned long long)count;
- (void)compact;
- (void)insertPointer:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)addPointer:(void *)arg1;
- (void *)pointerAtIndex:(unsigned long long)arg1;
- (void)arrayGrow:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (void)finalize;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)_initBlock;
- (id)init;

@end

