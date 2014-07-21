//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NCLineView, NCListViewDeleteButton, NSButton, NSLayoutConstraint, NSView, _NCShieldView;

@interface NCListItemViewController : NSViewController
{
    NSViewController *_contentViewController;
    double _originaldeleteButtonWidth;
    _Bool _deleting;
    _Bool _expandedShield;
    _Bool _shieldExpandedInEditMode;
    _Bool _deleteAreaHidden;
    _Bool _delegateCalled;
    _Bool _canBeReordered;
    BOOL _canBeRemoved;
    BOOL _dividerLineHidden;
    BOOL _editing;
    BOOL _shieldEnabled;
    _Bool _deleteButtonHidden;
    id <NCWidgetListItemDelegate> _delegate;
    NSView *_containerView;
    NSLayoutConstraint *_rightMarginConstraint;
    NSView *_itemView;
    NSView *_removeContainer;
    NSLayoutConstraint *_itemTrailingConstraint;
    NSLayoutConstraint *_itemLeadingConstraint;
    NSLayoutConstraint *_deleteButtonSpacingConstraint;
    NCListViewDeleteButton *_deleteButton;
    NSButton *_removeButton;
    NSView *_grabberContainer;
    NSButton *_grabberButton;
    _NCShieldView *_shieldView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_deleteButtonWidthConstraint;
    NCLineView *_dividerLine;
}

@property __weak NCLineView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property __weak NSLayoutConstraint *deleteButtonWidthConstraint; // @synthesize deleteButtonWidthConstraint=_deleteButtonWidthConstraint;
@property __weak NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(nonatomic) __weak _NCShieldView *shieldView; // @synthesize shieldView=_shieldView;
@property(nonatomic) __weak NSButton *grabberButton; // @synthesize grabberButton=_grabberButton;
@property(nonatomic) __weak NSView *grabberContainer; // @synthesize grabberContainer=_grabberContainer;
@property(nonatomic) __weak NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NCListViewDeleteButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) _Bool deleteButtonHidden; // @synthesize deleteButtonHidden=_deleteButtonHidden;
@property(nonatomic) __weak NSLayoutConstraint *deleteButtonSpacingConstraint; // @synthesize deleteButtonSpacingConstraint=_deleteButtonSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *itemLeadingConstraint; // @synthesize itemLeadingConstraint=_itemLeadingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *itemTrailingConstraint; // @synthesize itemTrailingConstraint=_itemTrailingConstraint;
@property(retain, nonatomic) NSView *removeContainer; // @synthesize removeContainer=_removeContainer;
@property(nonatomic) __weak NSView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) __weak NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL shieldEnabled; // @synthesize shieldEnabled=_shieldEnabled;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) BOOL dividerLineHidden; // @synthesize dividerLineHidden=_dividerLineHidden;
@property(nonatomic) BOOL canBeRemoved; // @synthesize canBeRemoved=_canBeRemoved;
@property(nonatomic) _Bool canBeReordered; // @synthesize canBeReordered=_canBeReordered;
@property(nonatomic) _Bool delegateCalled; // @synthesize delegateCalled=_delegateCalled;
@property(nonatomic) _Bool deleteAreaHidden; // @synthesize deleteAreaHidden=_deleteAreaHidden;
@property(nonatomic) _Bool shieldExpandedInEditMode; // @synthesize shieldExpandedInEditMode=_shieldExpandedInEditMode;
@property(nonatomic) _Bool expandedShield; // @synthesize expandedShield=_expandedShield;
@property(nonatomic) _Bool deleting; // @synthesize deleting=_deleting;
@property(nonatomic) __weak id <NCWidgetListItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)deleteAction:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewWillLayout;
- (id)nibBundle;
- (void)loadView;

@end

