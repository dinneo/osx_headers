//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMovie.h>

@class AVFragmentedMovieInternal, NSArray;

@interface AVFragmentedMovie : AVMovie
{
    AVFragmentedMovieInternal *_fragmentedMovie;
}

- (void)_setMindingInterval:(double)arg1;
- (double)_mindingInterval;
@property(readonly, nonatomic) NSArray *tracks;
- (Class)_classForMovieTracks;
- (void)finalize;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end

