//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ErrorButton, NSExtendedImageView;

@interface MyStatusImageControl : NSView
{
    NSExtendedImageView *_statusImage;
    ErrorButton *_errorButton;
    id _target;
    SEL _action;
    BOOL _isShowingDisconnectedButton;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
- (void)setAccessibilityValue:(id)arg1;
- (void)showErrorButtonAsAlert;
- (void)showErrorButtonAsDisconnection;
- (void)showStatusImage:(id)arg1;
- (void)_showErrorButtonWithState:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
