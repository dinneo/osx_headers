//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMPlatformCore/IMCollectionViewGridLayout.h>

@class NSIndexPath;

@interface IMCollectionViewDrawerLayout : IMCollectionViewGridLayout
{
    BOOL _hasDrawer;
    NSIndexPath *_drawerTargetIndexPath;
    double _drawerHeight;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) double drawerHeight; // @synthesize drawerHeight=_drawerHeight;
@property(nonatomic) BOOL hasDrawer; // @synthesize hasDrawer=_hasDrawer;
@property(retain, nonatomic) NSIndexPath *drawerTargetIndexPath; // @synthesize drawerTargetIndexPath=_drawerTargetIndexPath;
- (void).cxx_destruct;
- (id)supportedSupplementaryViewKinds;
- (void)_adjustLayoutAttribute:(id)arg1 toAccountForExpandedIndexPath:(id)arg2;
- (void)_setDrawerTargetIndexPath:(id)arg1 withTransaction:(BOOL)arg2;
- (id)layoutAttributesForElementAtPoint:(struct CGPoint)arg1;
- (void)applyUpdate:(id)arg1;
- (id)adjustedLayoutAttributesForSupplementaryViewOfkind:(id)arg1 atIndexPath:(id)arg2;
- (id)adjustedLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)contentFullSize;
- (void)prepareLayout;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end
