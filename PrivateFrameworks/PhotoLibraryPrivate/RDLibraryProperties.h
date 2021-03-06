//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSString, RDLibrary;

@interface RDLibraryProperties : NSObject
{
    BOOL _photoStreamExplicitlyDisabled;
    NSDictionary *_libraryPropertyMap;
    RDLibrary *_library;
}

@property(nonatomic) __weak RDLibrary *library; // @synthesize library=_library;
@property BOOL photoStreamExplicitlyDisabled; // @synthesize photoStreamExplicitlyDisabled=_photoStreamExplicitlyDisabled;
@property(retain, nonatomic) NSDictionary *libraryPropertyMap; // @synthesize libraryPropertyMap=_libraryPropertyMap;
- (void).cxx_destruct;
@property long long versionMinor;
@property long long versionMajor;
@property(retain) NSData *versionIdsNeedingFaceTileUpgrade;
@property BOOL useEmbeddedJPEGs;
@property BOOL touchedByIPhoto;
@property BOOL touchedByAperture;
@property long long timeMachineSyncCounter;
@property(retain) NSString *timeMachineSyncUuid;
@property(retain) NSString *thumbnailGroupsNeedingFaceTileUpgrade;
@property BOOL showLastNMonths;
@property(retain) NSString *rawCameraBundleVersion;
@property long long previewSizeLimit;
@property double previewQuality;
@property BOOL photoStreamAutoUpload;
@property(retain) NSString *lastProjectUuid;
@property long long lastNMonthsValue;
@property(retain) NSData *importRecentProjects;
@property long long imageProxySegmentIndexLimit;
@property(retain) NSData *imageProxySegmentFreeIndexes;
@property(retain) NSString *imageIOVersion;
@property(retain) NSData *geoLocateVersionIds;
@property BOOL facesIsEnabled;
@property(retain) NSString *databaseUuid;
@property(retain) NSDate *createDate;
@property long long compatibleBackToMinorVersion;
@property BOOL closedCleanly;
@property BOOL automaticallyGeneratePreviews;
- (id)readValueForSelector:(SEL)arg1;
- (void)writeValue:(id)arg1 forSelector:(SEL)arg2;
- (void)setAdminDataTablePropertyValue:(id)arg1 blob:(id)arg2 dataType:(unsigned char)arg3 forPropertyArea:(id)arg4 propertyName:(id)arg5 persistAfterRebuild:(BOOL)arg6;
- (id)queryAdminDataTableForPropertyArea:(id)arg1 propertyName:(id)arg2;
- (id)_getModelObjectForPropertyArea:(id)arg1 propertyName:(id)arg2;
- (id)initWithLibrary:(id)arg1;

@end

