//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook, NSString;

__attribute__((visibility("hidden")))
@interface ABFindsLinkedPersons : NSObject
{
    ABAddressBook *_addressBook;
    NSString *_linkId;
}

- (id)processDictionaries:(id)arg1;
- (id)fetchDictionariesWithContext:(id)arg1 request:(id)arg2;
- (id)makeFetchRequestWithContext:(id)arg1;
- (id)fetchDictionaries;
- (id)buildSummaryOfLinkedPersons;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 linkId:(id)arg2;
- (id)initWithAddressBook:(id)arg1;

@end

