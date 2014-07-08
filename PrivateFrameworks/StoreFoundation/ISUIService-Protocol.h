//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISServiceRemoteObject.h"

@class ISDialog;

@protocol ISUIService <ISServiceRemoteObject>
- (void)dismissDialog:(ISDialog *)arg1 withExitCode:(long long)arg2;
- (void)displayDialog:(ISDialog *)arg1 withDelegate:(id <ISDialogDelegate>)arg2 replyBlock:(void (^)(long long, ISSignInPromptResponse *))arg3;
- (void)displayDialog:(ISDialog *)arg1;
- (void)removeDialogHost:(id <ISUIHostProtocol>)arg1;
- (void)addDialogHost:(id <ISUIHostProtocol>)arg1;
@end
