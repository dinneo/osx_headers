//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PVSearchResultItem.h"

@interface PVSearchResultPageItem : PVSearchResultItem
{
    unsigned long long _pageIndex;
}

@property(readonly) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)mediaElement;
- (id)ordinalValue;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 relevanceScore:(double)arg2;

@end
