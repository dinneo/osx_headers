//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class IMCustomButtonCell;

@interface IMCustomButton : NSButton
{
}

+ (Class)cellClass;
- (void)viewDidChangeBackingProperties;
- (void)setShowPointingHandCursorWhenHovering:(BOOL)arg1;
- (void)setTitleUnderlineStyle:(unsigned long long)arg1 forState:(int)arg2;
- (void)setTitleAlignment:(unsigned long long)arg1 forState:(int)arg2;
- (void)setTitleFont:(id)arg1 forState:(int)arg2;
- (void)setTitleColor:(id)arg1 forState:(int)arg2;
- (void)setTitleShadow:(id)arg1 forState:(int)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(int)arg2;
- (void)setImage:(id)arg1 forState:(int)arg2;
- (double)baselineOffsetFromBottom;
- (struct CGSize)intrinsicContentSize;
- (void)p_windowChangedMainStatus:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
@property(readonly, nonatomic) IMCustomButtonCell *customCell;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

