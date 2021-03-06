//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"

@class HorizontalFadingLine, NSButton, NSLayoutConstraint, NSMutableSet, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTimer, SOStaticImageView, SOWebLinkButton;

@interface AliasSelectionViewController : NSViewController <NSTextFieldDelegate>
{
    NSTextField *_iMessageTitleLabel;
    NSTableView *_aliasTableView;
    NSButton *_backButton;
    NSButton *_doneButton;
    NSTextField *_initialAliasTextField;
    NSProgressIndicator *_verifyInitialAliasProgressIndicator;
    NSTextField *_verifyInitialAlisHelpTextField;
    NSTextField *_appleIDField;
    NSTextField *_youCanBeReachedLabel;
    NSButton *_readReceiptsCheckbox;
    HorizontalFadingLine *_topDividerLine;
    HorizontalFadingLine *_bottomDividerLine;
    SOStaticImageView *_topPocket;
    SOStaticImageView *_bottomPocket;
    NSTextField *_readReceiptBlurbField;
    SOWebLinkButton *_resendEmailButton;
    NSLayoutConstraint *_aliasTableMaxHeightConstraint;
    NSLayoutConstraint *_aliasTableHeightConstraint;
    NSMutableSet *_selectedAliases;
    NSTimer *_resendEmailTimer;
}

@property(retain) NSTimer *resendEmailTimer; // @synthesize resendEmailTimer=_resendEmailTimer;
@property(retain) NSMutableSet *selectedAliases; // @synthesize selectedAliases=_selectedAliases;
@property(retain) NSLayoutConstraint *aliasTableHeightConstraint; // @synthesize aliasTableHeightConstraint=_aliasTableHeightConstraint;
@property(retain) NSLayoutConstraint *aliasTableMaxHeightConstraint; // @synthesize aliasTableMaxHeightConstraint=_aliasTableMaxHeightConstraint;
@property(retain) SOWebLinkButton *resendEmailButton; // @synthesize resendEmailButton=_resendEmailButton;
@property(retain) NSTextField *readReceiptBlurbField; // @synthesize readReceiptBlurbField=_readReceiptBlurbField;
@property(retain) SOStaticImageView *bottomPocket; // @synthesize bottomPocket=_bottomPocket;
@property(retain) SOStaticImageView *topPocket; // @synthesize topPocket=_topPocket;
@property(retain) HorizontalFadingLine *bottomDividerLine; // @synthesize bottomDividerLine=_bottomDividerLine;
@property(retain) HorizontalFadingLine *topDividerLine; // @synthesize topDividerLine=_topDividerLine;
@property(retain) NSButton *readReceiptsCheckbox; // @synthesize readReceiptsCheckbox=_readReceiptsCheckbox;
@property(retain) NSTextField *youCanBeReachedLabel; // @synthesize youCanBeReachedLabel=_youCanBeReachedLabel;
@property(retain) NSTextField *appleIDField; // @synthesize appleIDField=_appleIDField;
@property(retain) NSTextField *verifyInitialAlisHelpTextField; // @synthesize verifyInitialAlisHelpTextField=_verifyInitialAlisHelpTextField;
@property(retain) NSProgressIndicator *verifyInitialAliasProgressIndicator; // @synthesize verifyInitialAliasProgressIndicator=_verifyInitialAliasProgressIndicator;
@property(retain) NSTextField *initialAliasTextField; // @synthesize initialAliasTextField=_initialAliasTextField;
@property(retain) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) NSButton *backButton; // @synthesize backButton=_backButton;
@property(retain) NSTableView *aliasTableView; // @synthesize aliasTableView=_aliasTableView;
@property(retain) NSTextField *iMessageTitleLabel; // @synthesize iMessageTitleLabel=_iMessageTitleLabel;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)controlTextDidChange:(id)arg1;
- (void)accountAliasVerificationStatusChanged:(id)arg1;
- (void)accountAliasCountChanged:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateAliasTable;
- (void)aliasCheck:(id)arg1;
- (void)showAliasValidationErrorForAlias:(id)arg1 errorUserInfo:(id)arg2;
- (void)showAliasMustBeEmailError;
- (void)resendVerificationEmail:(id)arg1;
- (void)showResendEmailButton:(id)arg1;
- (void)showVerificationInstructions;
- (void)back:(id)arg1;
- (void)done:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

