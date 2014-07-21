//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import "NSAccessibilityButton.h"
#import "NSUserInterfaceValidations.h"

@class NSImage, NSString;

@interface NSButton : NSControl <NSUserInterfaceValidations, NSAccessibilityButton>
{
}

+ (void)initialize;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (double)baselineOffsetFromBottom;
- (CDStruct_3c058996)alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)intrinsicContentSize;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)stopSpeaking:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (id)_sound;
- (void)_setSound:(id)arg1;
- (id)sound;
- (void)setSound:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isFlipped;
- (id)_popupToSubstituteInInit;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)altModifySelection:(id)arg1;
- (void)shiftModifySelection:(id)arg1;
- (void)setTitleWithMnemonic:(id)arg1;
- (BOOL)performMnemonic:(id)arg1;
- (void)_setWindow:(id)arg1;
- (id)_recursiveFindDefaultButtonCell;
- (BOOL)_canBecomeDefaultButton;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_keyEquivalentModifierMaskMatchesModifierFlags:(unsigned long long)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)highlight:(BOOL)arg1;
@property unsigned long long keyEquivalentModifierMask;
@property(copy) NSString *keyEquivalent;
- (void)getPeriodicDelay:(float *)arg1 interval:(float *)arg2;
- (void)setPeriodicDelay:(float)arg1 interval:(float)arg2;
- (id)_focusRingBleedRegion;
@property(getter=isTransparent) BOOL transparent;
@property(getter=isBordered) BOOL bordered;
@property long long state;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (unsigned long long)imageScaling;
@property unsigned long long imagePosition;
@property(retain) NSImage *alternateImage;
@property(retain) NSImage *image;
- (void)setAttributedAlternateTitle:(id)arg1;
- (id)attributedAlternateTitle;
- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
@property(copy) NSString *alternateTitle;
@property(copy) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;
@property unsigned long long bezelStyle;
- (void)setNextState;
@property BOOL allowsMixedState;
- (void)_clearMouseTrackingForCell:(id)arg1;
- (void)_setMouseTrackingForCell:(id)arg1;
@property BOOL showsBorderOnlyWhileMouseInside;
- (id)ns_widgetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

