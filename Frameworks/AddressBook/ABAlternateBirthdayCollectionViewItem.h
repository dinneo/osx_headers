//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABDateCollectionViewItem.h>

__attribute__((visibility("hidden")))
@interface ABAlternateBirthdayCollectionViewItem : ABDateCollectionViewItem
{
}

- (void)takeValueFromGregorianBirthday;
- (id)collectionViewAction;
- (BOOL)allowsLabelCustomization;
- (void)setLabel:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)_validateLabelMenuItem:(id)arg1;
- (id)_labelMenuItems;
- (id)labelItemWithTitle:(id)arg1 calendarIdentifier:(id)arg2;
- (id)dateComponentsValueTransformer;
- (id)placeholderString;
- (void)_updateViewLabel;
- (id)_localizedLabel;

@end
