//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSExtendedBox, NSImageView, NSTextField, SOGradientView;

@interface ARDWarningView : NSView
{
    SOGradientView *_gradientView;
    NSTextField *_message;
    NSImageView *_icon;
    NSButton *_help;
    NSExtendedBox *_box;
}

- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (double)autosizeHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
