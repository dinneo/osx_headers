//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface EWSSRVRecord : NSObject
{
    NSDictionary *_srvRecord;
}

@property(readonly, copy, nonatomic) NSDictionary *srvRecord; // @synthesize srvRecord=_srvRecord;
- (id)description;
@property(readonly, nonatomic) NSNumber *weight;
@property(readonly, nonatomic) NSNumber *priority;
@property(readonly, nonatomic) NSNumber *port;
@property(readonly, copy, nonatomic) NSString *host;
- (void)dealloc;
- (id)initWithSRVRecord:(id)arg1;
- (id)init;

@end
