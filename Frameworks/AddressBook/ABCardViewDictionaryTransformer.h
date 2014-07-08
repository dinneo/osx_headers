//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ABCardViewDictionaryTransformer : NSValueTransformer
{
    NSString *_valueKey;
    NSDictionary *_currentDictionary;
}

+ (BOOL)allowsReverseTransformation;
@property(copy, nonatomic) NSString *valueKey; // @synthesize valueKey=_valueKey;
@property(retain, nonatomic) NSDictionary *currentDictionary; // @synthesize currentDictionary=_currentDictionary;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (void)dealloc;
- (id)initWithValueKey:(id)arg1;

@end
