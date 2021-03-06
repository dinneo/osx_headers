//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowRestoration.h"

@class ABPersonListSearchController, NSString, NSWindow;

@interface ABCleanWindowRestorationController : NSObject <NSWindowRestoration>
{
    NSWindow *_window;
    ABPersonListSearchController *_personListSearchController;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)encodeRestorableState:(id)arg1;
- (void)decodeRestoreableState:(id)arg1;
- (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 personListSearchController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

