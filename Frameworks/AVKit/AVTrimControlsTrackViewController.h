//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AVPlayerController, AVTrimControlsTrackView;

@interface AVTrimControlsTrackViewController : NSViewController
{
    AVPlayerController *_playerController;
    unsigned int _showsAlternateMediaTrackPreview:1;
    AVTrimControlsTrackView *_trackView;
}

- (void).cxx_destruct;
- (void)updateTrackViewIfNeeded;
- (void)loadView;
@property BOOL showsAlternateMediaTrackPreview;
@property __weak AVPlayerController *playerController;

@end
