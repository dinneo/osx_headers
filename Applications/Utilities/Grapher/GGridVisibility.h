//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GAxis, GGrid;

@interface GGridVisibility : NSObject
{
    GGrid *mGrid;
    GAxis *mAxis;
}

- (id)localizedName;
- (BOOL)canBeVisible;
- (void)setVisible:(BOOL)arg1;
- (BOOL)isVisible;
- (id)initWithGrid:(id)arg1 axis:(id)arg2;

@end

