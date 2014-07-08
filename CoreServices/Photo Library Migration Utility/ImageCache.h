//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSMutableDictionary, NSString;

@interface ImageCache : NSObject
{
    NSString *m_name;
    NSImage *m_image;
    NSMutableDictionary *m_cachedParts;
    long long m_leftSize;
    long long m_middleSize;
    long long m_rightSize;
    long long m_spacing;
    long long m_rowHeight;
    long long m_blockWidth;
    long long m_rowCount;
}

+ (void)registerImageCacheWithName:(id)arg1 columns:(long long)arg2 rows:(long long)arg3;
+ (void)registerImageCacheWithName:(id)arg1 rows:(long long)arg2;
+ (void)registerImageCacheWithName:(id)arg1 leftSize:(long long)arg2 middleSize:(long long)arg3 rightSize:(long long)arg4 spacing:(long long)arg5 rows:(long long)arg6;
+ (id)imageCacheWithName:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 columns:(long long)arg2 rows:(long long)arg3;
- (id)initWithName:(id)arg1 leftSize:(long long)arg2 middleSize:(long long)arg3 rightSize:(long long)arg4 spacing:(long long)arg5 rows:(long long)arg6;
- (id)initWithName:(id)arg1 leftSize:(long long)arg2 middleSize:(long long)arg3 rightSize:(long long)arg4 spacing:(long long)arg5 rows:(long long)arg6 columns:(long long)arg7;
- (struct CGSize)cellSize;
- (long long)height;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 column:(long long)arg3 row:(long long)arg4;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 column:(long long)arg3 row:(long long)arg4 opacity:(double)arg5;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 state:(int)arg3 value:(long long)arg4;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 state:(int)arg3 value:(long long)arg4 opacity:(double)arg5;
- (void)drawInRect:(struct CGRect)arg1 inView:(id)arg2 state:(int)arg3 value:(long long)arg4 opacity:(double)arg5 leftEnd:(BOOL)arg6 rightEnd:(BOOL)arg7;
- (id)imagePart:(int)arg1 state:(int)arg2 value:(long long)arg3;
- (struct CGRect)rectForPart:(int)arg1 state:(int)arg2 value:(long long)arg3;

@end
