//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@interface ModernSignInViewController : NSViewController
{
    BOOL _timedOutDuringSignIn;
    BOOL _shouldShowCreateNewAccountButton;
    unsigned long long _failureCount;
}

@property(nonatomic) BOOL shouldShowCreateNewAccountButton; // @synthesize shouldShowCreateNewAccountButton=_shouldShowCreateNewAccountButton;
@property(nonatomic) unsigned long long failureCount; // @synthesize failureCount=_failureCount;
@property(nonatomic) BOOL timedOutDuringSignIn; // @synthesize timedOutDuringSignIn=_timedOutDuringSignIn;
- (void)_authenticationTimedOut:(id)arg1;
- (void)_accountRemoved:(id)arg1;
- (void)_registrationStateChanged:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (void)forgot:(id)arg1;
- (void)learnMore:(id)arg1;
- (void)textFieldAction:(id)arg1;
- (void)createNewAccount:(id)arg1;
- (void)cancel:(id)arg1;
- (void)signIn:(id)arg1;
- (void)password:(id)arg1;
- (void)appleID:(id)arg1;
- (void)setCredentials:(id)arg1 password:(id)arg2;
- (id)_registrationController;
- (void)_updateButtons;
- (void)_updateUI;
- (void)_displayRegistrationErrorDialog:(id)arg1;
- (void)_displayForgotPasswordDialog;
- (void)_attemptToPrefillAccount;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

