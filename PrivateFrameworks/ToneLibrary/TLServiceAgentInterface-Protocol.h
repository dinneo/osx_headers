//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TLServiceAgentInterface <NSObject>
- (void)setCurrentToneIdentifier:(NSString *)arg1 forPreferenceKey:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)retrieveCurrentTonePreferencesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
@end

