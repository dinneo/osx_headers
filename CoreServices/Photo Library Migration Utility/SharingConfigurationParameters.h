//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SharingConfigurationParameters : NSObject
{
    NSDictionary *parameters;
}

+ (double)annotationUpdateInterval;
+ (id)sharedConfigurationParameters;
@property(retain) NSDictionary *parameters; // @synthesize parameters;
- (void)writeCacheFile;
- (id)cacheDirectoryURL;
- (id)cacheFileURL;
- (void)storeServerParameters:(id)arg1;
- (void)updateParametersInBackground;
- (void)setupParameters;
- (void)dealloc;
- (id)init;

@end

