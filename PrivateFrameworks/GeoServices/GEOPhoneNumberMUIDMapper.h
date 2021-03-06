//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GEOPhoneNumberMUIDMapper : NSObject
{
    struct dispatch_queue_s *_writeQ;
    NSMutableArray *_uniquePhoneNumbers;
    NSMutableDictionary *_phoneNumberMuidMapping;
    NSString *_filePath;
}

- (void)_save;
- (void)_pruneToSize:(unsigned long long)arg1;
- (void)setMuid:(unsigned long long)arg1 forPhoneNumber:(unsigned long long)arg2;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithMappingFilePath:(id)arg1;

@end

