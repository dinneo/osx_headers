//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSString, SGTInput, _SGTSpotlightSuggesterTiming;

__attribute__((visibility("hidden")))
@interface _SGTQueryContext : NSObject
{
    long long queryID;
    NSSet *attributeNames;
    NSArray *additionalAttributeNames;
    NSString *inputString;
    SGTInput *input;
    _SGTSpotlightSuggesterTiming *timing;
    BOOL hasFilterQuery;
}

- (void)dealloc;

@end
