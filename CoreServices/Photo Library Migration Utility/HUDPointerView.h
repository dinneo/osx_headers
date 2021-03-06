//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUDView.h"

@interface HUDPointerView : HUDView
{
    int mPointerEdge;
}

+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1;
+ (double)titleBarHeight;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setUsesBGArt:(BOOL)arg1 withName:(id)arg2;
- (BOOL)hasDismissButton;
- (void)drawRect:(struct CGRect)arg1;
- (void)pointAtFrame:(struct CGRect)arg1;
- (struct CGRect)contentRect;
- (struct CGPoint)inspectorCenter;
- (id)backgroundColor;
- (void)defaultsChanged:(id)arg1;
- (void)dealloc;
- (BOOL)validateMenuItem:(id)arg1;
- (void)performClose:(id)arg1;
- (void)viewWillBeInstalledInWindow:(id)arg1;

@end

