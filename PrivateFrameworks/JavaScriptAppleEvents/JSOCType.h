//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JSOCType : NSObject
{
    const char *_objCType;
    struct _ffi_type *_ffiType;
}

+ (id)typeWithObjCTypes:(const char *)arg1;
+ (id)typeWithObjCType:(const char *)arg1;
+ (id)typeWithName:(id)arg1;
+ (id)structWithTag:(id)arg1 properties:(id)arg2;
+ (id)methodWithReturnValueTypeName:(id)arg1 argumentTypeNames:(id)arg2;
+ (id)methodWithReturnValueType:(id)arg1 argumentTypes:(id)arg2 variadic:(BOOL)arg3 nullTerminated:(BOOL)arg4;
+ (id)method;
+ (id)blockWithReturnValueTypeName:(id)arg1 argumentTypeNames:(id)arg2;
+ (id)blockWithReturnValueType:(id)arg1 argumentTypes:(id)arg2 variadic:(BOOL)arg3 nullTerminated:(BOOL)arg4;
+ (id)block;
+ (id)functionWithReturnValueTypeName:(id)arg1 argumentTypeNames:(id)arg2;
+ (id)functionWithReturnValueType:(id)arg1 argumentTypes:(id)arg2 variadic:(BOOL)arg3 nullTerminated:(BOOL)arg4;
+ (id)function;
+ (id)selector;
+ (id)class;
+ (id)object;
+ (id)string;
+ (id)boolean;
+ (id)longdouble;
+ (id)double;
+ (id)float;
+ (id)int64;
+ (id)uint64;
+ (id)int32;
+ (id)uint32;
+ (id)int16;
+ (id)uint16;
+ (id)int8;
+ (id)uint8;
+ (id)pointer;
+ (id)void;
@property(readonly) struct _ffi_type *ffiType; // @synthesize ffiType=_ffiType;
@property(readonly) const char *objCType; // @synthesize objCType=_objCType;
@property(readonly) JSOCType *deref;
@property(readonly) JSOCType *ref;
@property(readonly) BOOL isStruct;
- (BOOL)isMethod;
@property(readonly) BOOL isBlock;
@property(readonly) BOOL isFunction;
@property(readonly) BOOL isSelector;
@property(readonly) BOOL isClass;
@property(readonly) BOOL isObject;
@property(readonly) BOOL isString;
@property(readonly) BOOL isBoolean;
@property(readonly) BOOL isNumeric;
@property(readonly) BOOL isReference;
@property(readonly) BOOL isVoid;
@property(readonly) NSString *structTag;
@property(readonly) BOOL nullTerminated;
@property(readonly) BOOL variadic;
@property(readonly) long long firstVisibleArgument;
@property(readonly) long long numberOfArguments;
- (id)argumentTypeAtIndex:(long long)arg1;
@property(readonly) JSOCType *returnValueType;
@property(readonly) const char *objCTypes;
@property(readonly) const char *extendedObjCType;
@property(readonly) unsigned long long align;
@property(readonly) unsigned long long size;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

