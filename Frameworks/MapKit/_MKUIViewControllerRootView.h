//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class _MKUIViewController;

@interface _MKUIViewControllerRootView : NSView
{
    _MKUIViewController *_viewController;
}

@property(nonatomic) __weak _MKUIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)layout;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end

