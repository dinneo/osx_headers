//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <vCard/CNVCardLine.h>

@class NSString;

@interface ABvCardLiteralLine : CNVCardLine
{
    NSString *_literalValue;
}

+ (id)lineWithLiteralValue:(id)arg1;
- (void)serializeWithStrategy:(id)arg1;
- (id)initWithLiteralValue:(id)arg1;

@end
