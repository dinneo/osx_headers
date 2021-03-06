//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOServiceVersion : PBCodable <NSCopying>
{
    unsigned int _minimumVersion;
    NSMutableArray *_versionDomains;
    struct {
        unsigned int minimumVersion:1;
    } _has;
}

@property(nonatomic) unsigned int minimumVersion; // @synthesize minimumVersion=_minimumVersion;
@property(retain, nonatomic) NSMutableArray *versionDomains; // @synthesize versionDomains=_versionDomains;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMinimumVersion;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;
- (void)dealloc;

@end

