//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPCExpression : NSObject
{
}

+ (id)variableExpressionWithVariable:(id)arg1;
+ (id)functionExpressionWithFunction:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
+ (id)operatorExpressionWithOperator:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
+ (id)literalExpressionWithObject:(id)arg1;
+ (id)expressionForString:(id)arg1 error:(id *)arg2;
- (id)referencedVariables;
- (id)variable;
- (id)arguments;
- (id)functionName;
- (id)objectValue;
@property(readonly, nonatomic) long long expressionType;
- (id)evaluateWithEnvironment:(id)arg1 error:(id *)arg2;

@end

