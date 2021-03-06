//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class NSTrackingArea;

@interface BKNoteMarginScrollView : NSScrollView
{
    NSTrackingArea *_tskTrackingArea;
    BOOL _wantsOnlyOverlayScrollers;
}

@property(nonatomic) BOOL wantsOnlyOverlayScrollers; // @synthesize wantsOnlyOverlayScrollers=_wantsOnlyOverlayScrollers;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)setAutohidesScrollers:(BOOL)arg1;
- (void)setScrollerStyle:(long long)arg1;
- (void)pConfigureForLegacyStyle;
- (void)dealloc;

@end

