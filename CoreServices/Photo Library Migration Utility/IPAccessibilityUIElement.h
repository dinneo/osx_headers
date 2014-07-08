//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IPAccessibilityUIElement : NSObject
{
    NSString *_role;
    void *_contextInfo;
    id _contextObject;
    unsigned long long _contextIndex;
    id _parent;
    id _delegate;
}

+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextIndex:(unsigned long long)arg3;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextObject:(id)arg3;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3;
+ (id)staticTextAttributeNames;
+ (id)growAreaAttributeNames;
+ (id)imageAttributeNames;
+ (id)buttonAttributeNames;
+ (id)defaultAttributeNames;
@property(readonly, nonatomic) NSString *role; // @synthesize role=_role;
@property(readonly, nonatomic) id parent; // @synthesize parent=_parent;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contextIndex; // @synthesize contextIndex=_contextIndex;
@property(readonly, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
@property(readonly, nonatomic) void *contextInfo; // @synthesize contextInfo=_contextInfo;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)contextObjectAsString;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextIndex:(unsigned long long)arg3;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextObject:(id)arg3;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3;
- (id)_initWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3 contextObject:(id)arg4 contextIndex:(unsigned long long)arg5;

@end
