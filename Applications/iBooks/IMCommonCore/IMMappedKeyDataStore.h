//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface IMMappedKeyDataStore : NSObject
{
    NSObject<OS_dispatch_queue> *_keyQueue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableSet *_keys;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)removeDataForKeysPassingTest:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)fetchKeysPassingTest:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)fetchDataForKey:(id)arg1 handler:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (id)_dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_fetchKeys;
- (id)initWithPath:(id)arg1;

@end
