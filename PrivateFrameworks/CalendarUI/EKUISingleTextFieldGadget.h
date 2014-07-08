//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUIIsolateableSingleViewGadget.h>

#import "NSTextFieldDelegate.h"

@class EKUIResizingTextField, NSColor, NSString;

@interface EKUISingleTextFieldGadget : EKUIIsolateableSingleViewGadget <NSTextFieldDelegate>
{
    EKUIResizingTextField *_textField;
    NSColor *_previousFontColor;
}

@property(retain) NSColor *previousFontColor; // @synthesize previousFontColor=_previousFontColor;
@property(retain) EKUIResizingTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)performDragOperation:(id)arg1;
- (void)setActiveKeyboardHover:(BOOL)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (void)updateEvent;
- (id)control;
- (id)placeholderText;
- (id)initWithEventViewController:(id)arg1;
- (id)initWithNoTextFieldWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
