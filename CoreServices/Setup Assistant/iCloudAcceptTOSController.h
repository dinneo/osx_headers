//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

#import "MBUIDelegate.h"
#import "MBWebKitViewControllerDelegate.h"

@class LicenseContentViewController, MMMBWebKitViewController, NSString, NSView;

@interface iCloudAcceptTOSController : iCloudViewControllerBase <MBUIDelegate, MBWebKitViewControllerDelegate>
{
    MMMBWebKitViewController *webViewVC;
    BOOL _didFinishLoadingCalled;
    BOOL _cancelMeansBack;
    BOOL _done;
    BOOL _debugAllJS;
    CDUnknownBlockType _nativeTOSHandler;
    BOOL _controlsAreOurs;
    BOOL _acceptedTermsNag;
    LicenseContentViewController *_nativeTermsController;
    NSView *_webViewPurgatory;
}

@property BOOL acceptedTermsNag; // @synthesize acceptedTermsNag=_acceptedTermsNag;
@property BOOL controlsAreOurs; // @synthesize controlsAreOurs=_controlsAreOurs;
@property(retain) NSView *webViewPurgatory; // @synthesize webViewPurgatory=_webViewPurgatory;
@property(retain) LicenseContentViewController *nativeTermsController; // @synthesize nativeTermsController=_nativeTermsController;
@property(readonly) BOOL didLoad; // @synthesize didLoad=_didFinishLoadingCalled;
- (void)mbWebkitViewSaveFile:(id)arg1 content:(id)arg2;
- (void)mbWebkitViewControllerDidFail:(id)arg1 error:(id)arg2;
- (void)mbWebkitViewControllerDidSucceed:(id)arg1;
- (void)mbWebkitViewControllerDidCancel:(id)arg1;
- (void)mbWebkitViewControllerDidDismiss:(id)arg1 reason:(id)arg2;
- (void)mbWebkitViewControllerDidFinishLoading:(id)arg1;
- (void)mbWebkitViewTermsAndConditions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetWindowMessage:(id)arg1;
- (void)mbWebkitViewSetWindowTitle:(id)arg1;
- (void)_showNagSheet;
- (void)alternatePaneWithHandler:(CDUnknownBlockType)arg1;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)willBecomeVisible;
- (id)init;
- (id)alternateViewIdentifier;
- (id)previousViewIdentifier;
- (id)nextViewIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

