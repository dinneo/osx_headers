//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalABListener.h>

@class CalLimitingQueue;

@interface CalBirthdayListener : CalABListener
{
    BOOL _needsReset;
    CalLimitingQueue *_updateQueue;
}

+ (id)sharedListener;
@property BOOL needsReset; // @synthesize needsReset=_needsReset;
- (id)createEventInCalendar:(id)arg1 withABUID:(id)arg2 withLinkID:(id)arg3 withSummary:(id)arg4 withBirthday:(id)arg5 withName:(id)arg6 isYearless:(BOOL)arg7 isYearlessLeapMonthBirthday:(BOOL)arg8 lunarCalendarString:(id)arg9;
- (id)createBirthdayCalendarInContext:(id)arg1;
- (id)createFacebookCalendarInContext:(id)arg1;
- (void)putContactInAppropriateBirthdayCalendar:(id)arg1 basedOnExistingEvent:(id)arg2 withCalendars:(id)arg3 eventsCreatedSoFar:(id)arg4 inContext:(id)arg5;
- (void)putContactInAppropriateBirthdayCalendar:(id)arg1 withCalendars:(id)arg2 eventsCreatedSoFar:(id)arg3 inContext:(id)arg4;
- (void)putContactInAppropriateBirthdayCalendar:(id)arg1 forExistingEvent:(id)arg2 withCalendars:(id)arg3 eventsCreatedSoFar:(id)arg4 inContext:(id)arg5 birthday:(id)arg6 birthdayYearlessness:(BOOL)arg7 lunarCalendarString:(id)arg8;
- (id)_calendarInWhichToCreateEventWithCalendars:(id)arg1 calendarType:(int)arg2 context:(id)arg3;
- (void)populateExistingBirthdayEventsInCalendars:(id)arg1 withPeople:(id)arg2 birthdayEventDictionaryToPopulate:(id)arg3 lunarBirthdayEventDictionaryToPopulate:(id)arg4 context:(id)arg5;
- (id)_addressBookUIDForEvent:(id)arg1;
- (void)_deleteEventIfNecessary:(id)arg1 forUnifiedPerson:(id)arg2 birthdayEventDictionary:(id)arg3 lunarBirthdayEventDictionary:(id)arg4 addressBookUID:(id)arg5 context:(id)arg6;
- (void)_deleteEventIfNecessary:(id)arg1 forUnifiedPerson:(id)arg2 birthdayEventDictionary:(id)arg3 addressBookUID:(id)arg4 preferredBirthday:(BOOL)arg5 context:(id)arg6;
- (id)_existingBirthdayEventsInCalendars:(id)arg1 context:(id)arg2;
- (id)uniquePeopleWithBirthdays;
- (id)_peopleWithBirthdays;
- (id)_peopleWithProperty:(id)arg1 inAddressBook:(id)arg2;
- (id)findBirthdayCalendarsInContext:(id)arg1 createLocalCalendarIfNeeded:(BOOL)arg2;
- (void)saveEventsAndObtainIDsFor:(id)arg1 inContext:(id)arg2;
- (void)getRidOfFacebookCalendarIfEmpty:(id)arg1;
- (void)_resetInManagedObjectContext:(id)arg1;
- (id)unifiedPersonHelperForPerson:(id)arg1 linkIDsSeenSoFar:(id)arg2;
- (id)unifiedPersonHelperForEvent:(id)arg1 linkIDsSeenSoFar:(id)arg2 usingAddressBook:(id)arg3;
- (id)peopleFromDeletedUIDs:(id)arg1 updatedUIDs:(id)arg2 insertedRecords:(id)arg3 inContext:(id)arg4;
- (void)_gatherUIDsFromPeople:(id)arg1 allUIDs:(id)arg2 preferredUIDs:(id)arg3;
- (void)_runQuickUpdateInBackground:(id)arg1;
- (id)_masterEventsFromUIDs:(id)arg1 inContext:(id)arg2;
- (id)_unifiedPeopleAssociatedWithNotification:(id)arg1 inContext:(id)arg2;
- (void)_addressBookChanged:(id)arg1;
- (void)_runUpdateJobIfNecessaryInBackground;
- (void)disableBirthdayCalendars;
- (void)addBirthdayCalendars;
- (BOOL)areBirthdaysEnabled;
- (void)dealloc;
- (id)init;

@end

