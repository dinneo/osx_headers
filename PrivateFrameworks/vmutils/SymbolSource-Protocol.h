//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol SymbolSource
- (unsigned int)addressOfSymbolWithCName:(const char *)arg1 inLibrary:(const char *)arg2;
- (unsigned int)addressOfSymbolWithCName:(const char *)arg1;
- (struct _NSRange)addressRangeOfSymbolWithCName:(const char *)arg1;
- (struct _NSRange)addressRangeOfSymbolWithAddress:(unsigned int)arg1;
- (const char *)cnameOfSymbolWithAddress:(unsigned int)arg1;
@end

