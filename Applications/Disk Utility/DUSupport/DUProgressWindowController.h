//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DUWindowControllerProtocol.h"

@class NSString;

@interface DUProgressWindowController : NSObject <DUWindowControllerProtocol>
{
    BOOL interfaceLock;
    id _progressView;
}

- (void)printModuleSpecific:(id)arg1;
- (BOOL)canPrint;
- (id)warnOnSwitch;
- (id)warnOnQuit;
- (id)warnOnClose;
- (void)notifyWindowOfCompletion:(id)arg1;
- (void)notifyWindowOfEvent:(id)arg1 diskNotification:(id)arg2;
- (void)forceUpdateWindow:(id)arg1;
- (BOOL)globalTextPersistent;
- (void)setGlobalPersistentAttributedMessageText:(id)arg1;
- (void)setGlobalPersistentMessageText:(id)arg1;
- (void)setSecondaryProgressText:(id)arg1;
- (void)setGlobalProgressText:(id)arg1;
- (void)activateGlobalProgressText:(BOOL)arg1;
- (void)activateGlobalProgressBar:(BOOL)arg1;
- (void)stopGlobalProgressBarAnimation:(id)arg1;
- (void)startGlobalProgressBarAnimation:(id)arg1;
- (void)setGlobalProgressBarIndeterminate:(BOOL)arg1;
- (void)setGlobalProgressBarValue:(double)arg1;
- (id)globalProgressBar;
- (BOOL)interfaceLock;
- (void)resetInterfaceLock;
- (void)setInterfaceLock;
- (id)allSelectedItems:(BOOL)arg1 filterDuplicates:(BOOL)arg2;
- (id)allSelectedItems;
- (id)selectedRAIDs;
- (id)selectedVolumes;
- (id)selectedDisks;
- (void)skipButton:(id)arg1;
- (void)cancelButton:(id)arg1;
- (void)okButton:(id)arg1;
- (void)diskName:(id)arg1;
- (id)window;
- (void)skipButtonHit:(id)arg1;
- (void)cancelButtonHit:(id)arg1;
- (oneway void)setNeedsWarningOnQuit:(BOOL)arg1;
- (oneway void)endProgress;
- (oneway void)updateProgressOptions:(id)arg1;
- (oneway void)beginProgressWithOptions:(id)arg1;
- (oneway void)beginProgressWithMessage:(id)arg1 withInformationText:(id)arg2 allowCancel:(BOOL)arg3 cancelButtonTitle:(id)arg4 allowSkip:(BOOL)arg5 skipButtonTitle:(id)arg6 usingDelegate:(id)arg7 andCancelSelector:(SEL)arg8 andSkipSelector:(SEL)arg9 andContext:(id)arg10;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (void)setGlobalPersistentMessageTextOnMainThread:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
