//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseItemIdType.h>

@class NSString;

@interface EWSOccurrenceItemIdType : EWSBaseItemIdType
{
    NSString *_RecurringMasterId;
    NSString *_ChangeKey;
    long long _InstanceIndex;
}

+ (id)definition;
@property(nonatomic) long long InstanceIndex; // @synthesize InstanceIndex=_InstanceIndex;
@property(copy, nonatomic) NSString *ChangeKey; // @synthesize ChangeKey=_ChangeKey;
@property(copy, nonatomic) NSString *RecurringMasterId; // @synthesize RecurringMasterId=_RecurringMasterId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
