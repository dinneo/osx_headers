//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CalUIPasswordPanelController : NSObject
{
    NSMutableDictionary *_currentlyAuthenticatingAccounts;
    NSMutableDictionary *_needToShowPasswordPromptsFor;
    NSMutableDictionary *_cancelledAccounts;
    NSObject<OS_dispatch_queue> *_groupsChangedQueue;
}

+ (id)_mainWindow;
+ (id)sharedController;
@property(readonly) NSObject<OS_dispatch_queue> *groupsChangedQueue; // @synthesize groupsChangedQueue=_groupsChangedQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finishedAuthenticatingAccountID:(id)arg1;
- (void)userCancelledAuthenticationForAccount:(id)arg1;
- (BOOL)recentlyCancelledAuthenticationForAccount:(id)arg1 isUserInitiated:(BOOL)arg2;
- (void)showPasswordPanelForAccountInUserContext:(id)arg1 isUserInitiated:(BOOL)arg2 forError:(id)arg3;
- (void)showPasswordPanelForAccount:(id)arg1 isUserInitiated:(BOOL)arg2 forError:(id)arg3;
- (void)showPasswordPanelForAccount:(id)arg1 forError:(id)arg2;
- (void)showPasswordPanelForSource:(id)arg1 forError:(id)arg2;
- (void)checkNeedsToShowPasswordPrompts;
- (void)checkForAuthErrorsWithUserInfo:(id)arg1;
- (void)groupsChangedExternally:(id)arg1;
- (id)init;

@end

