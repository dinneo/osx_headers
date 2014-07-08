//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface ISCMTSwipeData : NSObject <NSCopying>
{
    id <NSCopying> _minObject;
    id <NSCopying> _maxObject;
    long long _swipeCount;
    long long _firstLaggedSwipeOrdinality;
    unsigned long long _indexOfMinObject;
    unsigned long long _indexOfMaxObject;
}

@property unsigned long long indexOfMaxObject; // @synthesize indexOfMaxObject=_indexOfMaxObject;
@property unsigned long long indexOfMinObject; // @synthesize indexOfMinObject=_indexOfMinObject;
@property long long firstLaggedSwipeOrdinality; // @synthesize firstLaggedSwipeOrdinality=_firstLaggedSwipeOrdinality;
@property long long swipeCount; // @synthesize swipeCount=_swipeCount;
@property(retain) id <NSCopying> maxObject; // @synthesize maxObject=_maxObject;
@property(retain) id <NSCopying> minObject; // @synthesize minObject=_minObject;
- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
