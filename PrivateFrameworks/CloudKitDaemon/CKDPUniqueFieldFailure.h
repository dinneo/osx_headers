//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier;

@interface CKDPUniqueFieldFailure : PBCodable <NSCopying>
{
    CKDPIdentifier *_identifierForConstraintFailure;
}

@property(retain, nonatomic) CKDPIdentifier *identifierForConstraintFailure; // @synthesize identifierForConstraintFailure=_identifierForConstraintFailure;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIdentifierForConstraintFailure;

@end
