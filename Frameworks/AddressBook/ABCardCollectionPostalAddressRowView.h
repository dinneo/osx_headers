//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardCollectionRowView.h>

@class ABPostalAddressStackView, CNPostalAddress, NSArray;

__attribute__((visibility("hidden")))
@interface ABCardCollectionPostalAddressRowView : ABCardCollectionRowView
{
    CNPostalAddress *_postalAddress;
    ABPostalAddressStackView *_addressFieldsContainer;
    BOOL _isEditing;
    NSArray *_postalConstraints;
}

@property(readonly) BOOL isEditing; // @synthesize isEditing=_isEditing;
@property(retain) ABPostalAddressStackView *addressFieldsContainer; // @synthesize addressFieldsContainer=_addressFieldsContainer;
@property(retain) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void)processControlTextDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)textFieldWillResignFirstResponder:(id)arg1;
- (void)textFieldWillBecomeFirstResponder:(id)arg1;
- (BOOL)isEmptyAndNotFirstResponder;
- (BOOL)hasValue;
- (id)updateKeyViewLoop;
- (void)updateValueView;
- (void)didInsertIntoCollectionView:(id)arg1;
- (void)rebuildAddressEntryFields;
- (id)firstTextField;
- (void)setAddressFieldsEnabled:(BOOL)arg1;
- (id)labelTopInsetConstraint;
- (id)baselineAlignmentConstraint;
- (id)actionGlyphButton;
- (void)updateConstraints;
- (id)valueView;
- (void)dealloc;

@end

