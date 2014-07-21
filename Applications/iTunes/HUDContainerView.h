//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class HUDHandlerView;

@interface HUDContainerView : NSView
{
    NSView *_webView;
    HUDHandlerView *_hudView;
    _Bool _handlingMouseMoved;
}

- (BOOL)becomeFirstResponder;
- (void)mouseMoved:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setHUDViewController:(struct WebKitHUDViewController *)arg1;
- (id)initWithWebView:(id)arg1 hudHandlerView:(id)arg2;

@end

