//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet;

@interface PVTempFileManager : NSObject
{
    NSCountedSet *_retainedPathsCountedSet;
}

+ (id)sharedInstance;
- (void)releaseFileURL:(id)arg1;
- (void)retainFileURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)canonicalPathForURL:(id)arg1;

@end
