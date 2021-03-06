//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRDisplayWindow.h>

@class SCRCTargetSelectorTimer, SCRDisplayAllWebGroupsLayer, SCRDisplayWebGroupLayer, SCRElement<SCRWebGroupWindowDelegate>;

__attribute__((visibility("hidden")))
@interface SCRDisplayWebGroupWindow : SCRDisplayWindow
{
    SCRDisplayWebGroupLayer *_webGroupLayer;
    SCRDisplayAllWebGroupsLayer *_allWebGroupsLayer;
    SCRCTargetSelectorTimer *_scrollUpdateTimer;
    SCRElement<SCRWebGroupWindowDelegate> *_delegate;
    struct CGPoint _originOffset;
}

+ (int)initialWindowLevel;
+ (id)webGroupWindow;
- (id)webGroupLayer;
- (void)handleScrollWheelEvent:(struct _CGSEventRecord)arg1;
- (void)_notifyScrollWheelDelegate;
- (void)enableMouseEventsWithOptions:(int)arg1;
- (void)dealloc;
- (id)_initWithScreenRect:(struct CGRect)arg1;
- (id)_allWebGroupsLayer;
- (id)_webGroupLayer;
- (id)webGroupWindowDelegate;
- (void)setWebGroupWindowDelegate:(id)arg1;
- (void)clearWebGroups;
- (void)appendWebGroup:(struct CGRect)arg1;
- (void)clearWebGroup;
- (void)displayWebGroup:(struct CGRect)arg1 option:(int)arg2;

@end

