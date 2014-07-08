//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBIdentityPicker : NSObject
{
    id _reserved[2];
}

- (id)disabledIdentities;
- (void)setDisabledIdentities:(id)arg1;
- (id)defaultButtonTitle;
- (void)setDefaultButtonTitle:(id)arg1;
- (BOOL)showsAddressBookGroups;
- (void)setShowsAddressBookGroups:(BOOL)arg1;
- (BOOL)showsAddressBook;
- (void)setShowsAddressBook:(BOOL)arg1;
- (BOOL)showsNewPersonButton;
- (void)setShowsNewPersonButton:(BOOL)arg1;
- (BOOL)showsNetworkIdentities;
- (void)setShowsNetworkIdentities:(BOOL)arg1;
- (BOOL)showsSharingOnlyUsers;
- (void)setShowsSharingOnlyUsers:(BOOL)arg1;
- (BOOL)showsLocalIdentities;
- (void)setShowsLocalIdentities:(BOOL)arg1;
- (BOOL)showsUsers;
- (void)setShowsUsers:(BOOL)arg1;
- (BOOL)showsGroups;
- (void)setShowsGroups:(BOOL)arg1;
- (BOOL)showsNetworkGroups;
- (void)setShowsNetworkGroups:(BOOL)arg1;
- (BOOL)showsNetworkUsers;
- (void)setShowsNetworkUsers:(BOOL)arg1;
- (BOOL)showsLocalGroups;
- (void)setShowsLocalGroups:(BOOL)arg1;
- (BOOL)showsLocalUsers;
- (void)setShowsLocalUsers:(BOOL)arg1;
- (BOOL)showsHiddenIdentities;
- (void)setShowsHiddenIdentities:(BOOL)arg1;
- (id)identities;
- (void)runModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)identityPickerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (long long)runModal;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)init;

@end
