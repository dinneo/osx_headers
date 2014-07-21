//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABCardViewActionDataSource.h"
#import "ABCardViewImageDataSource.h"
#import "ABMutableKeyValueCoding.h"
#import "ABNameViewDataSource.h"
#import "NSObject.h"

@class NSArray, NSSet, NSString, NSTimer, NSURL;

@protocol ABCardViewDataSource <ABNameViewDataSource, ABCardViewImageDataSource, ABCardViewActionDataSource, ABMutableKeyValueCoding, NSObject>
- (void)setTexttone:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)texttone;
- (void)setRingtone:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)ringtone;
- (void)setPreferredForName:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)preferredForName;
- (void)setLinkedPeople:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)linkedPeople;
- (void)setPostalAddresses:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)postalAddresses;
- (void)setNote:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)note;
- (void)setMaidenName:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)maidenName;
- (void)setRelatedNames:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)relatedNames;
- (void)setSocialProfiles:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)socialProfiles;
- (void)setInstantMessageAddresses:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)instantMessageAddresses;
- (void)setUrlAddresses:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)urlAddresses;
- (void)setOtherDateComponents:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)otherDateComponents;
- (void)setAlternateBirthdayComponents:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)alternateBirthdayComponents;
- (void)setBirthdayComponents:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)birthdayComponents;
- (void)setEmailAddresses:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)emailAddresses;
- (void)setPhoneNumbers:(id <ABCardViewMultiValue>)arg1;
- (id <ABCardViewMultiValue>)phoneNumbers;
- (void)manuallyAddPropertyKey:(NSString *)arg1;
- (BOOL)hasKeyBeenManuallyAdded:(NSString *)arg1;
- (NSArray *)phoneticNameKeys;
- (NSArray *)nameKeys;
- (BOOL)keyAvailable:(NSString *)arg1;
- (NSArray *)multiValueKeys;
- (void)markAsViewed:(NSTimer *)arg1;
- (NSURL *)URL;
- (BOOL)isAvailableForFaceTime;
- (BOOL)hasChanges;
- (BOOL)isEmpty;
- (BOOL)isDirectoryResult;
- (BOOL)isReadOnly;
- (BOOL)isMe;
- (NSSet *)uniqueIdentifiers;
@end

