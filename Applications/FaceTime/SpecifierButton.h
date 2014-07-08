//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSView;

@interface SpecifierButton : NSButton
{
    NSView *_customView;
}

+ (double)buttonHeight;
+ (Class)cellClass;
- (void).cxx_destruct;
- (void)setTitleInsideEdge:(double)arg1;
- (void)setLabelInsideEdge:(double)arg1;
- (void)setLeftCheckmark:(BOOL)arg1;
- (void)setTimedOutTitle:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (void)setShowChevron:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
