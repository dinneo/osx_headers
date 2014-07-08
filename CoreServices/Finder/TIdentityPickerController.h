//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBIdentityPicker;

@interface TIdentityPickerController : NSObject
{
    CBIdentityPicker *_identityPicker;
    id <TIdentityPickerDelegate> _delegate;
}

- (void)setShowHiddenIdentities:(_Bool)arg1;
- (void)setShowGroups:(_Bool)arg1;
- (void)setShowUsers:(_Bool)arg1;
- (void)setAllowsMultipleSelection:(_Bool)arg1;
- (void)setDisabledIdentities:(const struct TIdentityVector *)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)getIdentities:(struct TIdentityVector *)arg1;
- (void)identityPickerDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)runAsSheetOnWindow:(id)arg1;
- (long long)runModal;
- (void)dealloc;
- (id)init;

@end
