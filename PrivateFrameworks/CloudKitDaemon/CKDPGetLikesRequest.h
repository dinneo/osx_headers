//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPLikedId;

@interface CKDPGetLikesRequest : PBRequest <NSCopying>
{
    CKDPLikedId *_identifier;
    unsigned int _limit;
    CDStruct_88fc3008 _has;
}

+ (id)options;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) CKDPLikedId *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasLimit;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

