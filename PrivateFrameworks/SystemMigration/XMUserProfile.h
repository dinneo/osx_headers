//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMUser.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "XMProfile.h"

@class NSArray, NSData, NSDictionary, NSNumber;

@interface XMUserProfile : SMUser <XMProfile, NSSecureCoding, NSCopying>
{
    NSArray *_components;
    BOOL _isAdministrator;
    NSNumber *_size;
    NSData *_imageData;
    NSDictionary *attributes;
}

+ (id)keyPathsForValuesAffectingExtraInfoColor;
+ (id)keyPathsForValuesAffectingDisplayExtraInfo;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)supportsSecureCoding;
+ (id)_randomImageData;
+ (id)keyPathsForValuesAffectingCanTransfer;
+ (id)validAndUniqueMacShortnameFromShortname:(id)arg1;
+ (id)profileWithDictionary:(id)arg1;
@property(retain) NSDictionary *attributes; // @synthesize attributes;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToXMUserProfile:(id)arg1;
- (id)extraInfoColor;
- (id)displayExtraInfo;
- (id)displayName;
- (id)longNameForImport;
- (void)setShortNameForImport:(id)arg1;
- (BOOL)allowOverwriteOfConflictedShortName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)windowsSID;
- (BOOL)isAdministrator;
- (id)size;
- (id)components;
- (id)image;
- (id)imageData;
@property(readonly) BOOL canTransfer;
- (id)identifier;
- (id)localizedDescription;
- (id)description;
- (id)_dictionaryRepresentationSanitized:(BOOL)arg1;
- (id)sanitizedDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithShortname:(id)arg1 longname:(id)arg2 attributes:(id)arg3 components:(id)arg4;

@end

