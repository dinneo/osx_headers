//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPlace, GEOPlace, GEORPMapLocation, NSMutableArray, NSString;

@interface GEORPProblemContext : PBCodable <NSCopying>
{
    CDStruct_612aec5b _sessionId;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEORPMapLocation *_mapLocation;
    GEOPlace *_originalPlace;
    int _pinType;
    GEOPDPlace *_place;
    NSString *_tileStateLog;
    NSMutableArray *_visibleTileSets;
    struct {
        unsigned int sessionId:1;
        unsigned int pinType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) NSString *tileStateLog; // @synthesize tileStateLog=_tileStateLog;
@property(retain, nonatomic) NSMutableArray *visibleTileSets; // @synthesize visibleTileSets=_visibleTileSets;
@property(retain, nonatomic) GEORPMapLocation *mapLocation; // @synthesize mapLocation=_mapLocation;
@property(retain, nonatomic) GEOPlace *originalPlace; // @synthesize originalPlace=_originalPlace;
@property(nonatomic) int pinType; // @synthesize pinType=_pinType;
@property(nonatomic) CDStruct_612aec5b sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(readonly, nonatomic) BOOL hasPlace;
@property(readonly, nonatomic) BOOL hasTileStateLog;
- (id)visibleTileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleTileSetsCount;
- (void)addVisibleTileSet:(id)arg1;
- (void)clearVisibleTileSets;
@property(readonly, nonatomic) BOOL hasMapLocation;
@property(readonly, nonatomic) BOOL hasOriginalPlace;
@property(nonatomic) BOOL hasPinType;
@property(nonatomic) BOOL hasSessionId;
- (void)dealloc;

@end

