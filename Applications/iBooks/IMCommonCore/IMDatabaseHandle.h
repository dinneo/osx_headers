//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IMDatabaseHandle : NSObject
{
    struct sqlite3 *_databaseHandle;
    NSMutableDictionary *_statementCache;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (id)questionMarkListForCollection:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_bindArguments:(id)arg1 inStatement:(struct sqlite3_stmt *)arg2;
- (id)_stringRowsForQuery:(id)arg1;
- (void)_reportErrorInFunction:(const char *)arg1;
- (struct sqlite3 *)_databaseHandle;
- (id)_cursorForQuery:(id)arg1 withArguments:(id)arg2;
- (BOOL)passesIntegrityCheck;
- (id)stringColumnDataForQuery:(id)arg1 withArguments:(id)arg2;
- (id)arrayForQuery:(id)arg1 arguments:(id)arg2 rawRows:(BOOL)arg3;
- (id)arrayForQuery:(id)arg1 arguments:(id)arg2;
- (BOOL)runStatement:(id)arg1 arguments:(id)arg2;
- (BOOL)runSql:(id)arg1 withArguments:(id)arg2;
- (id)version;
- (id)columnInfoForTable:(id)arg1;
- (id)tableNames;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
