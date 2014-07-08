//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDFaceTable;

@interface RDFaceModel : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long faceTileVersion;
@property(nonatomic) BOOL manual;
@property(retain, nonatomic) NSDate *inTrashDate;
@property(nonatomic) BOOL isInTrash;
@property(nonatomic) BOOL hidden;
@property(nonatomic) BOOL ignored;
@property(nonatomic) BOOL falsePositive;
@property(nonatomic) double mouthY;
@property(nonatomic) double mouthX;
@property(nonatomic) double rightEyeY;
@property(nonatomic) double rightEyeX;
@property(nonatomic) double leftEyeY;
@property(nonatomic) double leftEyeX;
@property(nonatomic) double size;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) long long faceOrigin;
@property(nonatomic) long long faceType;
@property(nonatomic) long long sourceHeight;
@property(nonatomic) long long sourceWidth;
@property(retain, nonatomic) NSString *eventId;
@property(nonatomic) long long personId;
@property(retain, nonatomic) NSString *imageId;
@property(readonly, nonatomic) RDFaceTable *table;

@end
