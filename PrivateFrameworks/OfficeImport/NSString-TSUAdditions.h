//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TSUAdditions)
+ (id)stringByHexEncodingData:(id)arg1;
+ (id)stringWithXMLString:(const char *)arg1;
+ (id)stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2 breakLines:(BOOL)arg3;
+ (id)stringByBase64EncodingBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)stringWithHexFromBytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)listSeparator;
+ (id)stringByIndentingString:(id)arg1;
+ (id)stringByIndentingString:(id)arg1 times:(unsigned long long)arg2;
+ (id)stringWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)stringWithUUID;
- (BOOL)containsSubstring:(id)arg1;
- (void)enumerateRangesOfCharactersInSet:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)range;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 updatingSearchRange:(struct _NSRange *)arg3;
- (id)tolerantStringByAppendingPathExtension:(id)arg1;
- (BOOL)containsOnlyCharactersFromSet:(id)arg1;
- (id)unescapeXML;
- (id)escapeXML;
- (id)stringByMakingFirstCharacterUppercase;
- (id)stringByMakingFirstCharacterLowercase;
- (id)encodeStringBase64;
- (id)stringByTrimmingCharactersInSetFromFront:(id)arg1;
- (id)stringWithPathRelativeTo:(id)arg1 allowBacktracking:(BOOL)arg2;
- (id)stringWithPathRelativeTo:(id)arg1;
- (id)substringWithComposedCharacterSequencesToFileSystemLength:(unsigned long long)arg1;
- (id)substringWithComposedCharacterSequencesToIndex:(unsigned long long)arg1;
- (id)stringWithRealpath;
- (BOOL)isChildOfPath:(id)arg1;
- (BOOL)isDescendantOfPath:(id)arg1;
- (id)escapeForIcuRegex;
- (unsigned long long)countInstancesOfString:(id)arg1 options:(unsigned long long)arg2;
- (id)stringByReplacingInstancesOfCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)stringByRemovingCharactersInSet:(id)arg1;
- (id)stringByRemovingCharactersInSet:(id)arg1 options:(unsigned int)arg2;
- (id)md5Hash;
- (id)stringByFixingBrokenSurrogatePairs;
- (id)stringByUniquingPathInsideDirectory:(id)arg1 withFormat:(id)arg2;
- (id)stringByUniquingPathInsideDirectory:(id)arg1;
- (id)stringByAddingCSVEscapes;
- (id)stringByAppendingSeparator:(id)arg1 format:(id)arg2;
- (id)stringQuotedIfContainsCharacterSet:(id)arg1;
- (id)stringByExpandingTableFormatting;
@end

