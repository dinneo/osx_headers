//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSTextField;

@interface IPMapEditCalloutView : NSView
{
    NSTextField *_titleField;
    NSButton *_confirmButton;
    NSButton *_resetButton;
    NSView *_documentView;
}

- (void)_buildView;
- (id)_buttonWithFrame:(struct CGRect)arg1 image:(id)arg2 altImage:(id)arg3;
- (void)_loadArt;
- (void)setFrame:(struct CGRect)arg1;
- (void)viewDidMoveToSuperview;
- (void)setResetTarget:(id)arg1 action:(SEL)arg2;
- (void)setConfirmTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitleString:(id)arg1;
- (id)titleString;
- (void)awakeFromNib;

@end

