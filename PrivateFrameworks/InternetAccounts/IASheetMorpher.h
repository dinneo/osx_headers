//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPrefCrossFadeView, NSPrefCrossFadeWindow, NSWindow;

@interface IASheetMorpher : NSObject
{
    NSPrefCrossFadeWindow *_hostSheet;
    NSPrefCrossFadeView *_crossFadeImageView;
}

@property(retain) NSWindow *hostSheet; // @synthesize hostSheet=_hostSheet;
- (void).cxx_destruct;
- (void)setContentView:(id)arg1 displayAndAnimate:(BOOL)arg2;
- (id)initWithHostSheet:(id)arg1;

@end
