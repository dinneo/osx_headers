//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class BRCAccountSession, BRCLocalContainer, BRCThrottle, CKDatabase, NSDate, NSError, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface BRCOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_startDate;
    NSDate *_lastTryDate;
    NSDate *_nextTryDate;
    NSError *_lastError;
    NSMutableArray *_subOperations;
    long long _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_group> *_group;
    id _pmAssertionID;
    BOOL _finished;
    BOOL _executing;
    BOOL _isDiscretionary;
    BOOL _usesBackgroundSession;
    BOOL _allowsCellularAccess;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CKDatabase *_database;
    BRCThrottle *_operationThrottle;
    BRCLocalContainer *_container;
    BRCAccountSession *_accountSession;
    CDUnknownBlockType _mainBlock;
    CDUnknownBlockType _finishBlock;
    id _logSections;
}

@property(readonly, nonatomic) id logSections; // @synthesize logSections=_logSections;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType mainBlock; // @synthesize mainBlock=_mainBlock;
@property(retain, nonatomic) BRCAccountSession *accountSession; // @synthesize accountSession=_accountSession;
@property(retain, nonatomic) BRCLocalContainer *container; // @synthesize container=_container;
@property(nonatomic) BRCThrottle *operationThrottle; // @synthesize operationThrottle=_operationThrottle;
@property(nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) BOOL usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
@property(nonatomic) BOOL isDiscretionary; // @synthesize isDiscretionary=_isDiscretionary;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)addSubOperation:(id)arg1;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)cancel;
- (void)start;
- (void)_scheduleExecutionWithPreviousError:(id)arg1 throttle:(id)arg2;
- (void)_executeAndBumpThrottle:(id)arg1;
- (void)_main;
- (void)main;
- (BOOL)finishIfCancelled;
- (BOOL)_finishIfCancelled;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_lastError;
- (id)description;
- (id)state;
- (BOOL)isConcurrent;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 group:(id)arg2;
- (id)init;

@end

