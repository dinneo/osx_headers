//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CMCachingThread : NSObject
{
    NSString *_cacheFilePath;
    BOOL _cacheManagerWantsMeToTakeAHike;
}

- (void)storeObjects:(id)arg1;
- (BOOL)isCancelled;
- (void)cancel;
- (void)dealloc;
- (id)initWithCacheFilePath:(id)arg1 cacheRecordAsIs:(BOOL)arg2;

@end

