//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableSet.h"

#import "NSKeyValueProxyCaching.h"

@class NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueMutableSet : NSMutableSet <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;
+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
- (void)dealloc;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;

@end

