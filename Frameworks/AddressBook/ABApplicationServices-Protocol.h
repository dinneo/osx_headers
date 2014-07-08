//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, NSWindow;

@protocol ABApplicationServices <NSObject>
- (void)displayGoogleWebLoginAlertWithWebLoginURL:(NSURL *)arg1 completion:(void (^)(BOOL))arg2;
- (void)showMCCConfigForAccountID:(NSString *)arg1;
- (void)showPasswordPanelModalForWindow:(NSWindow *)arg1 withSettings:(NSDictionary *)arg2 completion:(void (^)(NSString *, BOOL))arg3;
- (void)showContactWithUniqueId:(NSString *)arg1 shouldUnify:(BOOL)arg2;
@end
