//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDResources, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject
{
    EDResources *mResources;
    unsigned long long mStringIndex;
    unsigned long long mContentFormatId;
    int mPosition;
    _Bool mShowLeaderLines;
    _Bool mShowCategoryName;
    _Bool mShowSeriesName;
    _Bool mShowPercent;
    _Bool mShowBubbleSize;
    _Bool mShowValue;
    _Bool mShowLegendKey;
    _Bool mIsPositionAffineTransform;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (_Bool)isPositionAffineTransform;
- (void)setIsPositionAffineTransform:(_Bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setShowLegendKey:(_Bool)arg1;
- (_Bool)isShowLegendKey;
- (void)setShowValue:(_Bool)arg1;
- (_Bool)isShowValue;
- (void)setShowBubbleSize:(_Bool)arg1;
- (_Bool)isShowBubbleSize;
- (void)setShowPercent:(_Bool)arg1;
- (_Bool)isShowPercent;
- (void)setShowSeriesName:(_Bool)arg1;
- (_Bool)isShowSeriesName;
- (void)setShowCategoryName:(_Bool)arg1;
- (_Bool)isShowCategoryName;
- (void)setShowLeaderLines:(_Bool)arg1;
- (_Bool)isShowLeaderLines;
- (void)setPosition:(int)arg1;
- (int)position;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (void)setString:(id)arg1;
- (id)string;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;
- (void)setStringIndex:(unsigned long long)arg1;
- (unsigned long long)stringIndex;

@end

