//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMPlatformCore/IMCollectionViewLayout.h>

@interface IMCollectionViewGridLayout : IMCollectionViewLayout
{
    struct {
        char hasContentSize;
    } _layoutFlags;
    double _minimumInteritemSpacing;
    double _minimumLineSpacing;
    unsigned long long _numberOfItemsPerRow;
    struct CGSize _itemSize;
    struct CGSize _contentSize;
    CDStruct_3c058996 _sectionInset;
    struct CGRect _layoutCollectionViewBounds;
}

@property(nonatomic) unsigned long long numberOfItemsPerRow; // @synthesize numberOfItemsPerRow=_numberOfItemsPerRow;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect layoutCollectionViewBounds; // @synthesize layoutCollectionViewBounds=_layoutCollectionViewBounds;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_minimumLineSpacing;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(nonatomic) CDStruct_3c058996 sectionInset; // @synthesize sectionInset=_sectionInset;
- (double)scrollerWidth;
- (long long)numberOfItems;
- (double)lineSpacing;
- (double)interitemSpacing;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (long long)columnAtX:(double)arg1;
- (long long)rowAtY:(double)arg1;
- (struct _NSRange)visibleItemsInRect:(struct CGRect)arg1 capToItemCount:(BOOL)arg2;
- (unsigned long long)numberOfItemPerRow;
- (struct CGSize)contentFullSize;
- (id)indexPathForItemBelowIndexPath:(id)arg1;
- (id)indexPathForItemAboveIndexPath:(id)arg1;
- (id)indexPathForItemTrailingIndexPath:(id)arg1;
- (id)indexPathForItemToLeadingIndexPath:(id)arg1;
- (id)layoutAttributesForElementAtPoint:(struct CGPoint)arg1;
- (id)adjustedLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (struct CGSize)collectionViewContentSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
