//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface SFInternalAdvertisement : NSObject
{
    NSData *_advertisementPayload;
    NSDictionary *_options;
}

@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
- (void)dealloc;
- (id)description;
- (id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2;

@end

