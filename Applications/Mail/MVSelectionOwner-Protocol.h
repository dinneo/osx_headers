//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMessage, NSArray;

@protocol MVSelectionOwner <NSObject>
- (id <MCMessageDataSource>)messageStore;
- (MCMessage *)messageThatUserIsProbablyReading;
- (MCMessage *)currentDisplayedMessage;
- (void)selectMessages:(NSArray *)arg1;
- (NSArray *)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;
- (NSArray *)selection;

@optional
- (void)toggleThreadedMode;
- (BOOL)isInThreadedMode;
@end

