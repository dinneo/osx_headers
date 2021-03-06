//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSURL;

@interface PKProductInfo : NSObject
{
    NSDictionary *_productInfoDictionary;
    NSURL *_baseURL;
    NSArray *_cachedPackageReferences;
}

- (id)baseURL;
- (id)dictionaryRepresentation;
- (id)packageReferences;
- (id)preferredDistributionURL;
- (id)distributionURLForLocalization:(id)arg1;
- (id)localizations;
- (id)_distributionsDictionary;
- (id)productVersion;
- (id)productIdentifier;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 baseURL:(id)arg2;
- (void)setProductIdentifier:(id)arg1 version:(id)arg2;
- (void)setPackageReferences:(id)arg1;
- (void)setDistributionURL:(id)arg1 forLocalization:(id)arg2;
- (id)init;

@end

