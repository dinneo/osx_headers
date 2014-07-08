//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EQZone.h"

@class NSBezierPath, NSMutableArray;

@interface EQChar : EQZone
{
    unsigned short mChar;
    BOOL mFirstChar;
    BOOL mLastChar;
    unsigned long long mFlags;
    NSMutableArray *mOrnaments;
    struct CGPoint mOrigin;
    struct CGSize mInitialSize;
    double mInitialCenterLine;
    struct CGPoint mInitialOrigin;
    struct CGPoint mInitialOffset;
    NSBezierPath *mPath;
}

+ (id)symbolFontNameForChar:(unsigned short)arg1;
+ (id)charWithParent:(id)arg1 character:(unsigned short)arg2;
+ (id)charWithParent:(id)arg1 character:(unsigned short)arg2 flags:(unsigned long long)arg3;
+ (id)zoneFromText:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)treeWithOutlinedChars;
- (BOOL)flag:(unsigned long long)arg1;
- (void)setFlag:(unsigned long long)arg1;
- (void)removeFlag:(unsigned long long)arg1;
- (id)lastOrnament;
- (void)addOrnament:(id)arg1;
- (BOOL)isInWord;
- (void)setInWord:(BOOL)arg1;
- (id)getWordString;
- (void)appendToString:(id)arg1 info:(id)arg2;
- (void)drawSelfInRect:(struct CGRect)arg1;
- (void)updateDepth;
- (void)refresh;
- (void)calcSize;
- (void)initialSize:(struct CGSize *)arg1 centerLine:(double *)arg2 origin:(struct CGPoint *)arg3 offset:(struct CGPoint *)arg4;
- (void)setAttribute:(id)arg1 to:(id)arg2;
- (void)notLastChar;
- (void)notFirstChar;
- (BOOL)isLastChar;
- (BOOL)isFirstChar;
- (BOOL)isChar:(id)arg1;
- (id)bezierPath;
- (id)font;
- (unsigned short)character;
- (void)dealloc;
- (id)initWithParent:(id)arg1 character:(unsigned short)arg2 flags:(unsigned long long)arg3;
- (id)LaTeXExpression;
- (id)LaTeXEquivalent:(id)arg1;

@end
