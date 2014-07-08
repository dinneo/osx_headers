//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPerson.h"

@interface ABPerson (ABScripting)
+ (id)mappingFromKey:(id)arg1;
- (id)handleRemoveCommand:(id)arg1;
- (BOOL)removeArgument:(id)arg1;
- (id)handleAddCommand:(id)arg1;
- (BOOL)addArgument:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)valueWithUniqueID:(id)arg1 inPropertyWithKey:(id)arg2;
- (id)valueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2;
- (id)related;
- (id)date;
- (id)socialProfile;
- (id)address;
- (id)instantMessage;
- (id)icq;
- (id)yahoo;
- (id)msn;
- (id)jabber;
- (id)aim;
- (id)email;
- (id)url;
- (id)phone;
- (void)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2;
- (void)insertValue:(id)arg1 inPropertyWithKey:(id)arg2;
- (void)insertValue:(id)arg1 atIndex:(unsigned long long)arg2 inPropertyWithKey:(id)arg3;
- (void)replaceValueAtIndex:(unsigned long long)arg1 inPropertyWithKey:(id)arg2 withValue:(id)arg3;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (BOOL)company;
- (void)setCompany:(BOOL)arg1;
- (id)vCardRep;
- (void)setNote:(id)arg1;
- (id)note;
- (void)setHomepage:(id)arg1;
- (id)homepage;
- (void)setJobtitle:(id)arg1;
- (id)jobtitle;
- (void)setBirthdate:(id)arg1;
- (id)birthdate;
- (void)setDepartment:(id)arg1;
- (id)department;
- (void)setOrganization:(id)arg1;
- (id)organization;
- (void)setMaidenname:(id)arg1;
- (id)maidenname;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (void)setSuffix:(id)arg1;
- (id)suffix;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setPhoneticmiddlename:(id)arg1;
- (id)phoneticmiddlename;
- (void)setMiddlename:(id)arg1;
- (id)middlename;
- (void)setPhoneticlastname:(id)arg1;
- (id)phoneticlastname;
- (void)setPhoneticfirstname:(id)arg1;
- (id)phoneticfirstname;
- (void)setLastname:(id)arg1;
- (id)lastname;
- (void)setFirstname:(id)arg1;
- (id)firstname;
- (id)objectSpecifier;
@end
