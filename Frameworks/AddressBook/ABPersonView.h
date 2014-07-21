//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ABAddressBook, ABPerson, ABPersonViewNotificationWatcher;

@interface ABPersonView : NSView
{
    ABAddressBook *_addressBook;
    ABPerson *_person;
    id _delegate;
    NSView *_view;
    id _container;
    id _controller;
    id _watcher;
    id _reserved1;
}

+ (struct CGSize)defaultContentSize;
+ (id)keyPathsForValuesAffectingLoaded;
+ (id)keyPathsForValuesAffectingEditing;
+ (id)keyPathsForValuesAffectingContentSize;
@property(retain) ABPersonViewNotificationWatcher *watcher; // @synthesize watcher=_watcher;
@property id <ABPersonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) ABPerson *person; // @synthesize person=_person;
@property(retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (id)hostWindowForShareSheet;
- (id)profilePhotoImage;
- (struct CGRect)profilePhotoScreenRect;
- (void)refreshView;
- (void)notifyDelegateActionWasPerformed;
- (void)dealloc;
- (id)cardViewController;
- (id)cardView;
- (void)set_quicklook_fetchAsynchronously:(BOOL)arg1;
- (BOOL)_quicklook_fetchAsynchronously;
- (void)setShowsShowInMapsButtons:(BOOL)arg1;
- (BOOL)showsShowInMapsButtons;
- (void)setPerson:(id)arg1 shouldShowLinkedPeople:(BOOL)arg2;
@property BOOL shouldShowLinkedPeople;
- (void)addressBookWillReset:(id)arg1;
- (void)purgeAllContentForStoreAtPath:(id)arg1;
- (void)purgeAllContent;
- (void)commitEditing;
- (void)setHighlighted:(BOOL)arg1 forProperty:(id)arg2 identifier:(id)arg3;
- (void)editProperty:(id)arg1 label:(id)arg2;
- (void)editProperty:(id)arg1;
- (BOOL)isAvailableKey:(id)arg1;
@property(readonly, getter=isLoaded) BOOL loaded;
- (struct CGRect)imageFrame;
@property(readonly) struct CGSize contentSize;
- (void)setBackgroundStyle:(long long)arg1;
- (long long)backgroundStyle;
@property BOOL editing;
- (id)defaultProperties;
- (BOOL)isSelectable;
- (void)setSelectable:(BOOL)arg1;
- (BOOL)canEditContact;
- (BOOL)isEditable;
- (void)setEditable:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (BOOL)isOpaque;
- (void)clearCustomImage;
- (void)beginEditingCustomImage;
- (double)bottomMargin;
- (double)topMargin;
- (void)setAutoSave:(BOOL)arg1;
- (BOOL)autoSave;

@end

