//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JavaScriptAppleEvents/JSOCTypePointer.h>

@class JSOCType, NSArray;

@interface JSOCTypeCallable : JSOCTypePointer
{
    JSOCType *_returnValueType;
    NSArray *_argumentTypes;
}

@property(readonly) NSArray *argumentTypes; // @synthesize argumentTypes=_argumentTypes;
- (void).cxx_destruct;
- (long long)numberOfArguments;
- (id)argumentTypeAtIndex:(long long)arg1;
@property(readonly) JSOCType *returnValueType;
- (const char *)objCTypes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithReturnValueType:(id)arg1 argumentTypes:(id)arg2;

@end
