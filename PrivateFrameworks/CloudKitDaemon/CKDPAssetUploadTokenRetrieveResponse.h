//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray *_uploadTokens;
}

@property(retain, nonatomic) NSMutableArray *uploadTokens; // @synthesize uploadTokens=_uploadTokens;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadTokensCount;
- (void)addUploadTokens:(id)arg1;
- (void)clearUploadTokens;

@end

