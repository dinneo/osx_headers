//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CPAction, NSURL;

@interface CPQuickTime : NSObject
{
    id <CPQuickTimeMovieSource> mSource;
    long long mNumberOfImages;
    CPAction *mAction;
    NSURL *outputURL;
}

@property NSURL *outputURL; // @synthesize outputURL;
- (id)getImageAtArrayIndex:(long long)arg1;
- (long long)getNumberOfImages;
- (void)addVideoSamples;
- (void)performCreationWithAction:(id)arg1;
- (struct __CVBuffer *)pixelBufferFromNSImage:(id)arg1;
- (void)movieFromSource:(id)arg1;

@end

