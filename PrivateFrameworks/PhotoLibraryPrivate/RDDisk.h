//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSString, NSURL;

@interface RDDisk : NSObject <NSCopying>
{
    BOOL _isNetwork;
    NSString *_uuid;
    NSString *_resourceId;
    NSData *_bookmarkData;
    NSString *_kind;
    NSString *_name;
    NSURL *_url;
}

+ (id)diskWithVolumeURL:(id)arg1;
+ (id)diskWithDiskInfo:(struct __CFDictionary *)arg1;
+ (id)uuidFromDiskInfo:(struct __CFDictionary *)arg1;
@property(nonatomic) BOOL isNetwork; // @synthesize isNetwork=_isNetwork;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSData *bookmarkData; // @synthesize bookmarkData=_bookmarkData;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToDisk:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDiskInfo:(struct __CFDictionary *)arg1;
- (id)initWithVolumeURL:(id)arg1;

@end

