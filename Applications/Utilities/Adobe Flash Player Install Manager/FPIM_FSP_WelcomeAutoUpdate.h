//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FPIMForwardSequencePanel.h"

@class FPIMTextField, FPIMVersionManager, NSButton, NSDate, NSProgressIndicator, NSString, NSView;

@interface FPIM_FSP_WelcomeAutoUpdate : FPIMForwardSequencePanel
{
    NSView *mPanelView;
    NSDate *mTimeOfInitialRequest;
    NSProgressIndicator *mUpdateProgressIndicator;
    FPIMTextField *mPanelTitle;
    NSButton *mInstallOrDoneButton;
    FPIMVersionManager *mVersionManager;
    NSString *mVersionString;
    BOOL mUpdateIsAvailable;
}

- (BOOL)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned int)arg4 stillSelecting:(BOOL)arg5;
- (id)webView:(id)arg1 contextMenuItemsForElement:(id)arg2 defaultMenuItems:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)XMLWasReceivedNotificationHandler:(id)arg1;
- (void)_updateUIBasedOnXMLResponse;
- (void)panelDidDisplay;
- (BOOL)shouldDisplayPanel;
- (id)contentView;
- (id)_newAutoUpdatePanel;
- (void)_updatePanelForNoAutoUpdate;
- (void)_updatePanelForAutoUpdate;
- (void)dealloc;
- (void)iaInstallButtonPressed:(id)arg1;
- (void)iaRemindMeLaterButtonPressed:(id)arg1;

@end
