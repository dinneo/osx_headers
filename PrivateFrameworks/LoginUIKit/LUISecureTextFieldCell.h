//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSecureTextFieldCell.h"

@interface LUISecureTextFieldCell : NSSecureTextFieldCell
{
    BOOL _shouldSmoothFonts;
}

@property BOOL shouldSmoothFonts; // @synthesize shouldSmoothFonts=_shouldSmoothFonts;
- (id)accessibilityPlaceholderValue;
- (id)placeholderString;
- (void)setPlaceholderString:(id)arg1;
- (void)setPlaceholderAttributedString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)init;
- (id)setUpFieldEditorAttributes:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setupDefaults;

@end

