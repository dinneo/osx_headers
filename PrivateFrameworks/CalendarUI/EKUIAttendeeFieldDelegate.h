//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EKUITokenFieldDelegate.h"

@class CalFreeBusyCache, EKEvent, NSDate, NSMutableArray, NSMutableDictionary, NSObject<EKUIAttendeesViewController>, NSString, NSTextField<CalUIAutocompletingField>;

@interface EKUIAttendeeFieldDelegate : NSObject <EKUITokenFieldDelegate>
{
    NSTextField<CalUIAutocompletingField> *_attendeesField;
    NSMutableArray *_cachedAttendees;
    NSMutableDictionary *_lastResults;
    NSMutableDictionary *_attendeeCells;
    double _fieldPreferredWidth;
    double _cellDelta;
    BOOL _weHaveUpdatedSomething;
    BOOL _controlTextDidChange;
    BOOL _currentlyCompleting;
    BOOL _ignoreCompletionForTextChange;
    NSString *_lastOccurenceID;
    NSMutableDictionary *_lastKnownFreeBusyStats;
    CalFreeBusyCache *_lastFreeBusyCache;
    NSString *_searchPrefix;
    long long _selectedCompletionRow;
    BOOL _currentlyDeletingToken;
    BOOL _currentlyUpdatingTokenField;
    NSObject<EKUIAttendeesViewController> *_controller;
    EKEvent *_event;
    NSDate *_lastOccurenceStartDate;
    NSDate *_lastOccurenceEndDate;
}

@property BOOL currentlyUpdatingTokenField; // @synthesize currentlyUpdatingTokenField=_currentlyUpdatingTokenField;
@property BOOL currentlyDeletingToken; // @synthesize currentlyDeletingToken=_currentlyDeletingToken;
@property(copy) NSDate *lastOccurenceEndDate; // @synthesize lastOccurenceEndDate=_lastOccurenceEndDate;
@property(copy) NSDate *lastOccurenceStartDate; // @synthesize lastOccurenceStartDate=_lastOccurenceStartDate;
@property __weak EKEvent *event; // @synthesize event=_event;
@property __weak NSObject<EKUIAttendeesViewController> *controller; // @synthesize controller=_controller;
@property(copy) NSString *searchPrefix; // @synthesize searchPrefix=_searchPrefix;
@property(retain) NSString *lastOccurenceID; // @synthesize lastOccurenceID=_lastOccurenceID;
- (void).cxx_destruct;
- (void)didEndGroupExpansion;
- (void)didBeginGroupExpansion;
- (id)expandedAttendeesFromGroupAttendee:(id)arg1 abGroup:(id)arg2;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)readFromPasteboard:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (void)loadBusyStatusForAttendees:(id)arg1 forEvent:(id)arg2;
- (void)_freeBusyResponse:(id)arg1;
- (void)_updateFreeBusyWithArray:(id)arg1 forCUAddress:(id)arg2;
- (void)_removeAttendees:(id)arg1;
- (void)lookupFreeBusyForLocations:(id)arg1 forEvent:(id)arg2;
- (void)setPreferredWidth:(double)arg1;
- (id)fieldValuesForTextField:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)_handleDownInControl:(id)arg1 textView:(id)arg2;
- (BOOL)_handleUpInControl:(id)arg1 textView:(id)arg2;
- (BOOL)handleDeleteInTokenField:(id)arg1 textView:(id)arg2 withCommand:(SEL)arg3 forward:(BOOL)arg4;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlDidFinishEditingForTextField:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_updateWithTextField:(id)arg1;
- (void)_updateWithTextView:(id)arg1 andTokenField:(id)arg2;
- (id)participantForEditingString:(id)arg1;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)stringValueOnLeftOfCursorInTextView:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)sendEmail:(id)arg1;
- (void)_inviteAttendeeAgain:(id)arg1;
- (void)inviteAgain:(id)arg1;
- (void)addToAddressBook:(id)arg1;
- (void)doubleClickOnTokenCell:(id)arg1;
- (void)openInAddressBook:(id)arg1;
- (void)previewAttendee:(id)arg1;
- (void)copyAddress:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)toggleOptional:(id)arg1;
- (void)chooseAddress:(id)arg1;
- (void)_commitAttendeesPreservingTokenSelection;
- (id)currentPrincipal;
- (id)_recentsSourceID;
- (void)_addAttendeesToRecents:(id)arg1;
- (id)completionsForSubstring:(id)arg1 inTextView:(id)arg2;
- (void)processAttendeesToAdd:(id)arg1 attendeesToRemove:(id)arg2;
- (void)processAttendeeToAdd:(id)arg1 attendeeToRemove:(id)arg2;
- (void)removeCachedAttendeeDataForAttendee:(id)arg1;
- (void)removeCachedAttendeeDataForKeys:(id)arg1;
- (void)removeCachedAttendeeDataForKey:(id)arg1;
- (void)setCachedFreeBusy:(int)arg1 forKey:(id)arg2;
- (int)cachedFreeBusyForKey:(id)arg1;
- (id)keyForObject:(id)arg1;
- (BOOL)isEditable;
- (void)_refreshObjectValueForTokenField;
- (void)selectAllFromEditingField:(id)arg1;
- (void)deleteTokenFromEditingField;
- (void)commitTypedAttendee;
- (int)freeBusyForAttendee:(id)arg1;
- (void)triggerAutocomplete:(id)arg1;
- (void)updateAutocomplete:(id)arg1;
- (void)setAttendeeTokens:(id)arg1 forEvent:(id)arg2;
- (void)clearCachedData;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

