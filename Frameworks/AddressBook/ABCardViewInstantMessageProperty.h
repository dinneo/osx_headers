//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardViewProperty.h>

@class ABCardViewInstantMessageServiceGenerator;

__attribute__((visibility("hidden")))
@interface ABCardViewInstantMessageProperty : ABCardViewProperty
{
    ABCardViewInstantMessageServiceGenerator *_serviceGenerator;
}

- (id)emptyValueForMultiValue:(id)arg1 label:(id)arg2;
- (BOOL)isValueEmpty:(id)arg1;
- (void)dealloc;
- (id)initWithServiceGenerator:(id)arg1;

@end
