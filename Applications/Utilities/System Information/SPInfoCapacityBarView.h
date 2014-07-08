//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSMutableArray, NSTextField, SPInfoCapacityBarLabel;

@interface SPInfoCapacityBarView : NSView
{
    NSTextField *_catLabel1;
    NSTextField *_catLabel2;
    NSTextField *_catLabel3;
    NSTextField *_catLabel4;
    NSTextField *_catLabel5;
    NSTextField *_catLabel6;
    NSTextField *_catSize1;
    NSTextField *_catSize2;
    NSTextField *_catSize3;
    NSTextField *_catSize4;
    NSTextField *_catSize5;
    NSTextField *_catSize6;
    SPInfoCapacityBarLabel *_catColor1;
    SPInfoCapacityBarLabel *_catColor2;
    SPInfoCapacityBarLabel *_catColor3;
    SPInfoCapacityBarLabel *_catColor4;
    SPInfoCapacityBarLabel *_catColor5;
    SPInfoCapacityBarLabel *_catColor6;
    NSMutableArray *_categories;
    NSArray *_catLabels;
    NSArray *_catColors;
    NSArray *_catSizes;
    unsigned long long _capacity;
}

@property unsigned long long capacity; // @synthesize capacity=_capacity;
- (void)showValues;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (void)setValue:(unsigned long long)arg1 forCategory:(unsigned long long)arg2;
- (void)resetValues;
@property(readonly) NSArray *categoriesBySize;
@property(readonly) NSArray *categories;
- (void)dealloc;
- (void)awakeFromNib;
- (void)initCategories;

@end
