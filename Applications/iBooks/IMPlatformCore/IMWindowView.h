//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSViewController, NSWindow;

@interface IMWindowView : NSView
{
    NSViewController *_viewController;
    NSWindow *_childWindow;
}

@property(retain) NSWindow *childWindow; // @synthesize childWindow=_childWindow;
@property(retain) NSViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)windowDidResize:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (void)closeWindow;
- (id)initWithViewController:(id)arg1;

@end

