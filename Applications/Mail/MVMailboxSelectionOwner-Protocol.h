//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFMailbox, NSArray, NSMenu, NSString, NSWindow;

@protocol MVMailboxSelectionOwner <NSObject>
- (NSWindow *)mailboxSelectionWindow;
- (void)revealMailbox:(MFMailbox *)arg1;
- (BOOL)sectionIsExpanded:(NSString *)arg1;
- (BOOL)mailboxIsExpanded:(MFMailbox *)arg1;
- (void)selectPathsToMailboxes:(NSArray *)arg1;
- (BOOL)isSelectedMailboxSpecial;
- (NSArray *)sortedSectionItemsForTimeMachine;
- (MFMailbox *)selectedMailbox;
- (NSArray *)selectedMailboxes;

@optional
- (void)didCloseContextMenu:(NSMenu *)arg1;
- (void)willShowContextMenu:(NSMenu *)arg1;
- (NSArray *)expandedItems;
@end
