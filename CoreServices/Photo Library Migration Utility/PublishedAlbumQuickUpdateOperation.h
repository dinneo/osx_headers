//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSData, NSDictionary, NSError, NSString, PublishedAlbum;

@interface PublishedAlbumQuickUpdateOperation : NSOperation
{
    PublishedAlbum *album;
    NSString *keyPhotoPublicationUID;
    NSDictionary *keyPhotoInfo;
    NSData *photoData;
    NSData *photoPreviewData;
    NSError *error;
}

@property(retain) NSData *photoPreviewData; // @synthesize photoPreviewData;
@property(retain) NSData *photoData; // @synthesize photoData;
@property(copy) NSString *keyPhotoPublicationUID; // @synthesize keyPhotoPublicationUID;
@property(retain) NSError *error; // @synthesize error;
@property(retain) NSDictionary *keyPhotoInfo; // @synthesize keyPhotoInfo;
@property(retain) PublishedAlbum *album; // @synthesize album;
- (BOOL)dataHasJFIFPrefix:(id)arg1;
- (void)downloadPhotoInfo;
- (id)_downloadDataForURL:(id)arg1 error:(id *)arg2;
- (void)main;
- (void)dealloc;

@end
