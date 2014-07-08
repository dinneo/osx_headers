//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSFont;

@interface IAAutoSizedTextView : NSTextField
{
    NSFont *_startFont;
    BOOL _keepsTextCentered;
    double _stickySize;
    struct CGSize _visibleSize;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)viewResized;
- (void)setString:(id)arg1;
- (void)recalculateSize;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setKeepsTextCentered:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
