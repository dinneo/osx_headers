//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAppleEventDescriptor.h"

@interface NSAppleEventDescriptor (BLAdditions)
+ (id)descriptorWithProcessSerialNumber:(struct ProcessSerialNumber)arg1;
+ (id)descriptorWithPath:(id)arg1;
- (BOOL)sendWithoutWaitingForReply;
- (BOOL)sendWithTimeout:(int)arg1;
- (BOOL)send;
@end

