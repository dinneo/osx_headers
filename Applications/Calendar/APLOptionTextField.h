//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSString;

@interface APLOptionTextField : NSTextField
{
    NSString *_previousValue;
}

- (void).cxx_destruct;
- (void)fireAction;
- (void)fireActionIfNecessary;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)resignFirstResponder;
- (void)setStringValue:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
