//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKUIAttendeesEditingField, NSArray, NSPasteboard, NSSet, NSString, NSTextField, NSView;

@protocol EKUIAttendeesViewController <NSObject>
- (BOOL)isFreeBusySupported;
- (NSSet *)representedObjectsFromPasteboard:(NSPasteboard *)arg1;
- (BOOL)updateAttendeesFromPasteboard:(NSPasteboard *)arg1;
- (BOOL)isEditable;
- (NSTextField *)textField;
- (NSView *)view;

@optional
- (void)userDidDismissFromEditingField;
- (void)attendeesFieldDidEndGroupExpansion;
- (void)attendeesFieldDidBeginGroupExpansion;
- (void)attendeesFieldDidEndEditing;
- (void)cancelSearch;
- (NSArray *)displayedAttendees;
- (void)updateAttendeesWithAttendeestoAdd:(NSArray *)arg1 attendeesToRemove:(NSArray *)arg2;
- (NSArray *)matchWithPrefix:(NSString *)arg1;
- (EKUIAttendeesEditingField *)editingField;
- (void)relayout;
@end
