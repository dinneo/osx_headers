//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface CKDPOperation : PBCodable <NSCopying>
{
    NSString *_operationUUID;
    int _type;
    BOOL _last;
    BOOL _synchronousMode;
    struct {
        unsigned int type:1;
        unsigned int last:1;
        unsigned int synchronousMode:1;
    } _has;
}

@property(nonatomic) BOOL last; // @synthesize last=_last;
@property(nonatomic) BOOL synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *operationUUID; // @synthesize operationUUID=_operationUUID;
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
@property(nonatomic) BOOL hasLast;
@property(nonatomic) BOOL hasSynchronousMode;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasOperationUUID;

@end

