//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class PhotostreamController;

@interface PhotoStreamUpdateOperation : NSOperation
{
    PhotostreamController *_photostreamController;
    SEL _callbackSelector;
}

@property SEL callbackSelector; // @synthesize callbackSelector=_callbackSelector;
@property(retain) PhotostreamController *photostreamController; // @synthesize photostreamController=_photostreamController;
- (void)main;
- (void)dealloc;

@end

