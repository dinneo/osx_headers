//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ABContactSectionHeader : NSObject
{
    NSDictionary *_info;
    NSString *_nameTransform;
}

@property(readonly) NSString *nameTransform; // @synthesize nameTransform=_nameTransform;
@property(readonly) NSArray *headers;
@property(readonly) NSString *lastCharacter;
@property(readonly) NSString *firstCharacterAfterLanguage;
- (id)description;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
