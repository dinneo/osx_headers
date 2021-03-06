//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRequest.h>

@class LiModelChangeHistoricalMarker;

@interface LiSubscribeToModelChangeRequest : LiRequest
{
    LiModelChangeHistoricalMarker *_historicalMarker;
}

@property(retain) LiModelChangeHistoricalMarker *historicalMarker; // @synthesize historicalMarker=_historicalMarker;
- (void).cxx_destruct;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)description;
- (id)initWithHistoricalMarker:(id)arg1;

@end

