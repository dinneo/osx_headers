//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, RDAlbum;

@interface RDLibrarySearchResult : NSObject
{
    NSMutableArray *_assets;
    unsigned long long _cachedHash;
    NSArray *_userTokens;
    NSArray *_categoryData;
    NSString *_userSearchString;
    RDAlbum *_album;
}

+ (id)matchTypeDescription:(int)arg1;
@property(readonly) NSArray *assets; // @synthesize assets=_assets;
@property(retain) RDAlbum *album; // @synthesize album=_album;
@property(retain) NSString *userSearchString; // @synthesize userSearchString=_userSearchString;
@property(retain) NSArray *categoryData; // @synthesize categoryData=_categoryData;
@property(retain) NSArray *userTokens; // @synthesize userTokens=_userTokens;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addVersion:(id)arg1;
- (id)initWithLibrarySearchResultLookupHelper:(id)arg1;
- (id)initWithUserTokens:(id)arg1 categoryData:(id)arg2;

@end

