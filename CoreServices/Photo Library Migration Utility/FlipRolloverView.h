//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface FlipRolloverView : NSView
{
    long long mTrackingRect;
    BOOL mMouseOver;
    id mControl;
    BOOL mMouseDown;
    BOOL mIsEnabled;
}

@property(setter=setEnabled:) BOOL isEnabled; // @synthesize isEnabled=mIsEnabled;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)awakeFromNib;

@end
