//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

@interface CollapseView : NSClipView
{
    double _expandedHeight;
}

- (void)takeStateFromSender:(id)arg1;
- (void)toggleCollapsed:(id)arg1;
- (void)collapse:(BOOL)arg1 animate:(BOOL)arg2;
- (void)collapse:(BOOL)arg1;
- (void)_resizeWindowToFrame:(struct CGRect)arg1 animate:(BOOL)arg2;
- (id)_highestAncestor:(id)arg1;
- (BOOL)isCollapsed;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
