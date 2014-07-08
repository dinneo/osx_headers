//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInputStream, NSString;

@interface MGMultipartDataPart : NSObject
{
    NSString *_headersAsString;
    NSInputStream *_contentAsStream;
    unsigned long long _contentLength;
}

+ (id)partWithName:(id)arg1 fileContent:(id)arg2 vendorID:(id)arg3;
+ (id)partWithName:(id)arg1 dataContent:(id)arg2 vendorID:(id)arg3;
@property(readonly, nonatomic) unsigned long long contentLength; // @synthesize contentLength=_contentLength;
@property(readonly, nonatomic) NSInputStream *contentAsStream; // @synthesize contentAsStream=_contentAsStream;
@property(readonly, nonatomic) NSString *headersAsString; // @synthesize headersAsString=_headersAsString;
- (void).cxx_destruct;
- (id)initWithHeaders:(id)arg1 streamContent:(id)arg2 length:(unsigned long long)arg3;
- (id)initWithHeaders:(id)arg1 dataContent:(id)arg2;
- (id)initWithName:(id)arg1 fileContent:(id)arg2 vendorID:(id)arg3;
- (id)initWithName:(id)arg1 dataContent:(id)arg2 vendorID:(id)arg3;

@end
