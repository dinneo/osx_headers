//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNATextField, NSArray, NSButton, NSProgressIndicator, NSSegmentedControl, NSString, NSView, NSWindow, WebView;

@interface CNAWindowController : NSObject
{
    NSWindow *_mainWindow;
    WebView *_webView;
    NSString *_interface;
    NSView *_controlsView;
    NSSegmentedControl *_navControl;
    NSButton *_cancelButton;
    CNATextField *_URLTextField;
    NSProgressIndicator *_progressIndicator;
    struct __CFURLStorageSession *_storageSession;
    NSArray *_topLevelObjects;
}

@property NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property CNATextField *URLTextField; // @synthesize URLTextField=_URLTextField;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSSegmentedControl *navControl; // @synthesize navControl=_navControl;
@property NSView *controlsView; // @synthesize controlsView=_controlsView;
@property(copy) NSString *interface; // @synthesize interface=_interface;
@property WebView *webView; // @synthesize webView=_webView;
@property NSWindow *mainWindow; // @synthesize mainWindow=_mainWindow;
- (void)dealloc;
- (id)init;
- (void)awakeFromNib;
- (id)firstResponder;
- (void)loadRequest:(id)arg1;
- (void)goForward;
- (void)goBack;
- (void)cancel;
- (void)navControlPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setForwardButtonEnabled:(BOOL)arg1;
- (void)setBackButtonEnabled:(BOOL)arg1;
- (void)stopProgressIndicator;
- (void)startProgressIndicator;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)_setupConstraints;
- (void)_createPrivateStorageSession;

@end
