//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABPerson.h>

@interface ABSubscribedPerson : ABPerson
{
}

+ (BOOL)_isPublicRecord;
+ (id)nts_People;
+ (id)nts_PeopleWithAddressBook:(id)arg1;
+ (id)nts_PeopleAtRemoteLocation:(id)arg1;
+ (id)nts_PeopleAtRemoteLocation:(id)arg1 withAddressBook:(id)arg2;
+ (id)searchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5;
+ (id)builtInProperties;
- (BOOL)isSubscribed;

@end

