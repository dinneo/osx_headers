//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiTable;

@interface LiTransaction : NSObject
{
    LiTable *_table;
}

@property(readonly) __weak LiTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (void)rollback;
- (void)commit;
- (id)initWithTable:(id)arg1;

@end
