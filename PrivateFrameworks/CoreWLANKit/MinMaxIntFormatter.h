//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreWLANKit/APFormatter.h>

@interface MinMaxIntFormatter : APFormatter
{
    int _minimum;
    int _maximum;
}

+ (id)formatterForMin:(int)arg1 max:(int)arg2;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (int)maximum;
- (void)setMaximum:(int)arg1;
- (int)minimum;
- (void)setMinimum:(int)arg1;
- (id)initWithMin:(int)arg1 max:(int)arg2;

@end

