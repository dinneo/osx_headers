//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>;

@interface LiActivityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_temporaryModelsToRecords;
    NSMapTable *_problemModelsToRecords;
}

- (void).cxx_destruct;
- (void)reset;
- (id)descriptionOfProblemRecords;
- (void)observeModelDealloc:(id)arg1;
- (void)observeModelMakeReadOnly:(id)arg1;
- (void)observeModelSetLocalProperties:(id)arg1;
- (void)observeModel:(id)arg1 mutableCopy:(id)arg2;
- (void)observeModel:(id)arg1 copy:(id)arg2;
- (void)observeModel:(id)arg1 writeKeyPath:(id)arg2;
- (void)observeModel:(id)arg1 readKeyPath:(id)arg2;
- (void)observeModelLoad:(id)arg1;
- (void)observeModelCreate:(id)arg1;
- (void)_markProblemRecord:(id)arg1 forModel:(id)arg2 reason:(id)arg3;
- (id)_recordForModel:(id)arg1;
- (unsigned long long)_threadId;
- (id)init;

@end
