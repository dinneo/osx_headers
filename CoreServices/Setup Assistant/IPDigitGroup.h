//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IPDigitGroup : NSObject
{
    unsigned short _digits[4];
    unsigned int _digitCount;
    BOOL _hasHex;
}

- (void)flushCharsToData:(id)arg1;
- (unsigned int)maskValue;
- (BOOL)isLegalMask:(BOOL)arg1;
- (BOOL)isLegalV6Mask;
- (BOOL)isLegalV4Mask;
- (BOOL)isLegalColonGroup;
- (BOOL)isLegalDotGroup;
- (unsigned short *)digits;
- (unsigned int)digitCount;
- (BOOL)hasHex;
- (void)appendDigit:(unsigned short)arg1;
- (void)reset;

@end
