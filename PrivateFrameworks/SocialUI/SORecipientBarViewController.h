//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOChatViewController.h>

#import "CNContactPickerDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"
#import "SOBuddyOutlineViewControllerDelegate.h"

@class CNContactPicker, NSButton, NSLayoutConstraint, NSPopover, NSString, NSTextField, SOBuddyOutlineViewController, SOChatDetailsPageViewController, SOHeaderView, SOProgressBarViewController, SORecipientBarView, SOTokenFieldController;

@interface SORecipientBarViewController : SOChatViewController <NSMenuDelegate, NSPopoverDelegate, CNContactPickerDelegate, SOBuddyOutlineViewControllerDelegate>
{
    NSButton *_layoutTestDetailsButton;
    BOOL _reloadContactPicker;
    SOProgressBarViewController *_progressBarViewController;
    NSTextField *_toLabel;
    SOTokenFieldController *_recipientTokenFieldController;
    SOHeaderView *_recipientScrollViewContentView;
    NSButton *_addRecipientButton;
    NSButton *_detailsButton;
    NSPopover *_detailsViewPopover;
    SOChatDetailsPageViewController *_detailsPageViewController;
    NSLayoutConstraint *_maximumRecipientScrollViewHeightConstraint;
    NSLayoutConstraint *_maximumRecipientScrollViewContentsHeightConstraint;
    NSLayoutConstraint *_recipientTokenFieldWidth;
    NSLayoutConstraint *_toLabelLeadingMarginConstraint;
    NSLayoutConstraint *_toLabelTopMarginConstraint;
    NSLayoutConstraint *_recipientTokenFieldTopMarginConstraint;
    NSLayoutConstraint *_recipientTokenFieldBottomMarginConstraint;
    NSLayoutConstraint *_recipientActionsViewBottomMarginConstraint;
    NSLayoutConstraint *_recipientActionsViewTrailingMarginConstraint;
    CNContactPicker *_contactPicker;
    SOBuddyOutlineViewController *_buddyViewController;
}

+ (id)_detailsButtonTitleAttributes;
@property BOOL reloadContactPicker; // @synthesize reloadContactPicker=_reloadContactPicker;
@property(retain) SOBuddyOutlineViewController *buddyViewController; // @synthesize buddyViewController=_buddyViewController;
@property(retain) CNContactPicker *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain) NSLayoutConstraint *recipientActionsViewTrailingMarginConstraint; // @synthesize recipientActionsViewTrailingMarginConstraint=_recipientActionsViewTrailingMarginConstraint;
@property(retain) NSLayoutConstraint *recipientActionsViewBottomMarginConstraint; // @synthesize recipientActionsViewBottomMarginConstraint=_recipientActionsViewBottomMarginConstraint;
@property(retain) NSLayoutConstraint *recipientTokenFieldBottomMarginConstraint; // @synthesize recipientTokenFieldBottomMarginConstraint=_recipientTokenFieldBottomMarginConstraint;
@property(retain) NSLayoutConstraint *recipientTokenFieldTopMarginConstraint; // @synthesize recipientTokenFieldTopMarginConstraint=_recipientTokenFieldTopMarginConstraint;
@property(retain) NSLayoutConstraint *toLabelTopMarginConstraint; // @synthesize toLabelTopMarginConstraint=_toLabelTopMarginConstraint;
@property(retain) NSLayoutConstraint *toLabelLeadingMarginConstraint; // @synthesize toLabelLeadingMarginConstraint=_toLabelLeadingMarginConstraint;
@property(retain) NSLayoutConstraint *recipientTokenFieldWidth; // @synthesize recipientTokenFieldWidth=_recipientTokenFieldWidth;
@property(retain) NSLayoutConstraint *maximumRecipientScrollViewContentsHeightConstraint; // @synthesize maximumRecipientScrollViewContentsHeightConstraint=_maximumRecipientScrollViewContentsHeightConstraint;
@property(retain) NSLayoutConstraint *maximumRecipientScrollViewHeightConstraint; // @synthesize maximumRecipientScrollViewHeightConstraint=_maximumRecipientScrollViewHeightConstraint;
@property(retain) SOChatDetailsPageViewController *detailsPageViewController; // @synthesize detailsPageViewController=_detailsPageViewController;
@property(retain) NSPopover *detailsViewPopover; // @synthesize detailsViewPopover=_detailsViewPopover;
@property(retain) NSButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain) NSButton *addRecipientButton; // @synthesize addRecipientButton=_addRecipientButton;
@property(retain) SOHeaderView *recipientScrollViewContentView; // @synthesize recipientScrollViewContentView=_recipientScrollViewContentView;
@property(retain) SOTokenFieldController *recipientTokenFieldController; // @synthesize recipientTokenFieldController=_recipientTokenFieldController;
@property(retain) NSTextField *toLabel; // @synthesize toLabel=_toLabel;
@property(retain) SOProgressBarViewController *progressBarViewController; // @synthesize progressBarViewController=_progressBarViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)contactPicker:(id)arg1 didSearchForString:(id)arg2;
- (void)contactPicker:(id)arg1 didChooseContact:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)outlineViewController:(id)arg1 selectedHandle:(id)arg2;
- (BOOL)popoverShouldDetach:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)popoverWillShow:(id)arg1;
- (void)_updatePopoverMaxHeight;
- (void)_popoverWindowDidChangeScreen:(id)arg1;
- (void)showContacts:(id)arg1;
- (void)accountLoginStatusChanged:(id)arg1;
- (void)_tokenFieldDidChange:(id)arg1;
- (void)_chatDisplayControllerRecipientHandlesDidChange:(id)arg1;
- (void)_chatStatusDidChange:(id)arg1;
- (void)_handleInfoDidChange:(id)arg1;
- (void)_startObservingRecipientHandles:(id)arg1;
- (void)_stopObservingRecipientHandles:(id)arg1;
- (void)addRecipientActionView:(id)arg1 verticalOffset:(double)arg2;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (void)showDetails:(id)arg1;
- (void)recipientsSelected:(id)arg1;
@property(nonatomic) BOOL allowsTokenFieldScrolling; // @dynamic allowsTokenFieldScrolling;
@property double defaultFontSize;
@property double tokenFieldBottomMargin; // @dynamic tokenFieldBottomMargin;
@property double recipientActionsViewTrailingMargin; // @dynamic recipientActionsViewTrailingMargin;
@property double recipientActionsViewBottomMargin; // @dynamic recipientActionsViewBottomMargin;
@property double tokenFieldTopMargin; // @dynamic tokenFieldTopMargin;
@property double toLabelTopMargin; // @dynamic toLabelTopMargin;
@property double toLabelLeadingMargin; // @dynamic toLabelLeadingMargin;
@property double maximumStaticRecipientViewHeight; // @dynamic maximumStaticRecipientViewHeight;
@property double maximumRecipientScrollViewHeight; // @dynamic maximumRecipientScrollViewHeight;
@property(readonly) SORecipientBarView *recipientBarView; // @dynamic recipientBarView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

