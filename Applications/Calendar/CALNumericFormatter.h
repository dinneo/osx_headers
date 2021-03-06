//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALCharacterSetFormatter.h"

@interface CALNumericFormatter : CALCharacterSetFormatter
{
    long long _maxValue;
    long long _minValue;
}

- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (void)setMinValue:(long long)arg1;
- (void)setMaxValue:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCharacterSet:(id)arg1;

@end

