//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RichMessageCellBase.h"

@class NSAttributedString, NSButton, NSColor, NSImageView, NSLayoutConstraint, NSMutableArray, NSStackView, NSTextField, ThreadDisclosureTextField, _SenderPhotoView, _ToCCIndicator;

@interface RichMessageCellView : RichMessageCellBase
{
    NSColor *_textColor;
    BOOL _showToCc;
    BOOL _showMailbox;
    NSTextField *_senderView;
    NSTextField *_subjectView;
    NSTextField *_snippetView;
    NSTextField *_dateView;
    unsigned long long _numberOfSnippetLines;
    NSMutableArray *_flagViews;
    _SenderPhotoView *_photoView;
    NSLayoutConstraint *_photoMargin;
    NSLayoutConstraint *_photoPadding;
    NSLayoutConstraint *_photoVerticalPosition;
    _ToCCIndicator *_toCcIndicator;
    NSLayoutConstraint *_toCcSenderAlignment;
    NSLayoutConstraint *_toCcSubjectAlignment;
    NSLayoutConstraint *_toCcSubjectSpacing;
    ThreadDisclosureTextField *_threadDisclosureControl;
    NSLayoutConstraint *_threadMargin;
    NSLayoutConstraint *_threadSubjectAlignment;
    NSLayoutConstraint *_threadSubjectPadding;
    NSImageView *_unreadView;
    NSImageView *_attachmentView;
    NSButton *_replyButton;
    NSStackView *_statusStack;
    NSImageView *_statusView;
    NSLayoutConstraint *_statusAlignment;
    NSLayoutConstraint *_statusSenderPadding;
    NSLayoutConstraint *_statusDatePadding;
    NSTextField *_mailboxView;
    NSLayoutConstraint *_subjectMailboxAlignment;
    NSLayoutConstraint *_subjectMailboxPadding;
    NSLayoutConstraint *_mailboxThreadPadding;
    NSLayoutConstraint *_mailboxDateAlignment;
    NSLayoutConstraint *_threadSnippetPadding;
    NSLayoutConstraint *_threadMailboxVerticalPadding;
}

+ (id)keyPathsForValuesAffectingThreadCount;
+ (id)keyPathsForValuesAffectingIsOpen;
+ (id)keyPathsForValuesAffectingSnippetString;
+ (double)heightWithNumberOfSnippetLines:(unsigned long long)arg1;
@property(retain, nonatomic) NSLayoutConstraint *threadMailboxVerticalPadding; // @synthesize threadMailboxVerticalPadding=_threadMailboxVerticalPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSnippetPadding; // @synthesize threadSnippetPadding=_threadSnippetPadding;
@property(retain, nonatomic) NSLayoutConstraint *mailboxDateAlignment; // @synthesize mailboxDateAlignment=_mailboxDateAlignment;
@property(retain, nonatomic) NSLayoutConstraint *mailboxThreadPadding; // @synthesize mailboxThreadPadding=_mailboxThreadPadding;
@property(retain, nonatomic) NSLayoutConstraint *subjectMailboxPadding; // @synthesize subjectMailboxPadding=_subjectMailboxPadding;
@property(retain, nonatomic) NSLayoutConstraint *subjectMailboxAlignment; // @synthesize subjectMailboxAlignment=_subjectMailboxAlignment;
@property(retain, nonatomic) NSTextField *mailboxView; // @synthesize mailboxView=_mailboxView;
@property(retain, nonatomic) NSLayoutConstraint *statusDatePadding; // @synthesize statusDatePadding=_statusDatePadding;
@property(retain, nonatomic) NSLayoutConstraint *statusSenderPadding; // @synthesize statusSenderPadding=_statusSenderPadding;
@property(retain, nonatomic) NSLayoutConstraint *statusAlignment; // @synthesize statusAlignment=_statusAlignment;
@property(retain, nonatomic) NSImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSStackView *statusStack; // @synthesize statusStack=_statusStack;
@property(retain, nonatomic) NSButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) NSImageView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(retain, nonatomic) NSImageView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) NSLayoutConstraint *threadSubjectPadding; // @synthesize threadSubjectPadding=_threadSubjectPadding;
@property(retain, nonatomic) NSLayoutConstraint *threadSubjectAlignment; // @synthesize threadSubjectAlignment=_threadSubjectAlignment;
@property(retain, nonatomic) NSLayoutConstraint *threadMargin; // @synthesize threadMargin=_threadMargin;
@property(retain, nonatomic) ThreadDisclosureTextField *threadDisclosureControl; // @synthesize threadDisclosureControl=_threadDisclosureControl;
@property(retain, nonatomic) NSLayoutConstraint *toCcSubjectSpacing; // @synthesize toCcSubjectSpacing=_toCcSubjectSpacing;
@property(retain, nonatomic) NSLayoutConstraint *toCcSubjectAlignment; // @synthesize toCcSubjectAlignment=_toCcSubjectAlignment;
@property(retain, nonatomic) NSLayoutConstraint *toCcSenderAlignment; // @synthesize toCcSenderAlignment=_toCcSenderAlignment;
@property(retain, nonatomic) _ToCCIndicator *toCcIndicator; // @synthesize toCcIndicator=_toCcIndicator;
@property(retain, nonatomic) NSLayoutConstraint *photoVerticalPosition; // @synthesize photoVerticalPosition=_photoVerticalPosition;
@property(retain, nonatomic) NSLayoutConstraint *photoPadding; // @synthesize photoPadding=_photoPadding;
@property(retain, nonatomic) NSLayoutConstraint *photoMargin; // @synthesize photoMargin=_photoMargin;
@property(retain, nonatomic) _SenderPhotoView *photoView; // @synthesize photoView=_photoView;
@property(readonly, nonatomic) NSMutableArray *flagViews; // @synthesize flagViews=_flagViews;
@property(nonatomic) __weak NSTextField *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) __weak NSTextField *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak NSTextField *subjectView; // @synthesize subjectView=_subjectView;
@property(nonatomic) __weak NSTextField *senderView; // @synthesize senderView=_senderView;
- (void).cxx_destruct;
- (void)setThreadDisclosureTarget:(id)arg1;
- (void)setThreadDisclosureAction:(SEL)arg1;
- (void)setReplyTarget:(id)arg1;
- (void)setReplyAction:(SEL)arg1;
- (void)_updateFlags;
- (id)_anchorViewForNewFlag:(double *)arg1;
- (void)_updatePhotoView;
- (void)_updateToCCIndicator;
- (void)_updateThreadControl;
- (void)_updateMailboxLabel;
- (void)_updateReplyButton;
- (void)_updateAttachmentView;
- (void)_updateUnreadIndicator;
- (void)_updateStatusView;
- (void)prepareForReuse;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
@property(nonatomic) unsigned long long photoSize;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
@property(readonly, nonatomic) unsigned long long threadCount;
@property(readonly, nonatomic) BOOL isOpen;
@property(readonly, nonatomic) NSAttributedString *snippetString;
@property(nonatomic) BOOL showMailbox; // @synthesize showMailbox=_showMailbox;
@property(nonatomic) BOOL showToCc; // @synthesize showToCc=_showToCc;
- (BOOL)isHighlighted;
- (BOOL)isValidMessageDoubleClick:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_richTableCellViewCommonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

