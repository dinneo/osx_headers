//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface NSUnitFormatter : NSFormatter
{
    NSNumberFormatter *_numberFormatter;
    long long _unitStyle;
    struct UAMeasureFormat *_formatter;
    struct UPluralRules *_prules;
    BOOL _modified;
    NSString *_localeID;
}

- (id)unitStringFromValue:(double)arg1 unit:(unsigned long long)arg2;
- (id)stringForValue:(double)arg1 unit:(unsigned long long)arg2;
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;
- (id)init;

@end
