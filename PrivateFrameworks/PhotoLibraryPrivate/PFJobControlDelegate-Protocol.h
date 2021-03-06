//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFJobControlControlDelegate.h"
#import "PFJobControlProgressDelegate.h"

@class NSArray, PFJob, PFWorkBatch, PFWorkContext;

@protocol PFJobControlDelegate <PFJobControlControlDelegate, PFJobControlProgressDelegate>
- (BOOL)performJob:(PFJob *)arg1 context:(PFWorkContext *)arg2;

@optional
- (id)nextItemFromWorkContext:(PFWorkContext *)arg1;
- (void)postPerformJobAction;
- (BOOL)hadErrors:(NSArray *)arg1 context:(PFWorkContext *)arg2;
- (BOOL)endWork:(PFWorkContext *)arg1;
- (BOOL)endBatch:(PFWorkBatch *)arg1 context:(PFWorkContext *)arg2;
- (BOOL)beginBatch:(PFWorkBatch *)arg1 context:(PFWorkContext *)arg2;
- (BOOL)createBatch:(PFWorkBatch *)arg1 context:(PFWorkContext *)arg2;
- (BOOL)beginWork:(PFWorkContext *)arg1;
- (void)shutdown;
@end

