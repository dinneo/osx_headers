//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPShare, NSString;

@interface CKDPShareCreateRequest : PBRequest <NSCopying>
{
    NSString *_invitationImageUrl;
    NSString *_invitationMessage;
    CKDPShare *_share;
}

+ (id)options;
@property(retain, nonatomic) NSString *invitationImageUrl; // @synthesize invitationImageUrl=_invitationImageUrl;
@property(retain, nonatomic) NSString *invitationMessage; // @synthesize invitationMessage=_invitationMessage;
@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
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
@property(readonly, nonatomic) BOOL hasInvitationImageUrl;
@property(readonly, nonatomic) BOOL hasInvitationMessage;
@property(readonly, nonatomic) BOOL hasShare;

@end

