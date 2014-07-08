//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKCandidates, IMKEvent, IMKInputController, IMKPreferences, NSBundle, NSConnection, NSLock, NSMenu, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSTask, NSTimer, NSXPCConnection, NSXPCListener;

@interface IMKServerPrivate : NSObject
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSConnection *_connection;
    NSXPCListener *_inputMethodXPCListener;
    NSXPCConnection *_launcherXPCConnection;
    NSRecursiveLock *_imkConnectionModesLock;
    int _imkConnectionReplyWaitCount;
    NSTimer *_imkTimerForDelayedEndpointCheckin;
    Class _controllerClass;
    Class _delegateClass;
    NSMutableDictionary *_controllers;
    IMKInputController *_currentController;
    NSBundle *_bundle;
    BOOL _hasKeys;
    id _keyBindingState;
    id _keybindings;
    NSMutableArray *_runLoopInvocations;
    NSMutableDictionary *_eventDictionaries;
    NSLock *_privateLock;
    long long _clientCount;
    NSTask *serverTask;
    id currentClientWrapper;
    int _eventStatus;
    NSMenu *_cachedMenu;
    IMKPreferences *_preferences;
    IMKCandidates *_candidates;
    IMKEvent *_currentIMKEvent;
    BOOL _stopping;
}

@property(readonly) NSString *_bundleIdentifier; // @synthesize _bundleIdentifier;
@property BOOL _stopping; // @synthesize _stopping;
@property(nonatomic) IMKCandidates *_candidates; // @synthesize _candidates;
- (void)replyWaitCount_decrementWithLocking;
- (void)replyWaitCount_incrementWithLocking;
- (void)replyWaitCount_unlock;
- (void)replyWaitCount_lockDecrement;
- (void)replyWaitCount_lockIncrement;
- (int)replyWaitCount_testWithLocking;
- (void)dealloc;
@property(nonatomic) id currentClientWrapper; // @dynamic currentClientWrapper;

@end
