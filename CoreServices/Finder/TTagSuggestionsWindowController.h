//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSString, TTaggingTokenField;

@interface TTagSuggestionsWindowController : NSWindowController <NSWindowDelegate>
{
    TTaggingTokenField *_taggingTokenField;
    struct CGRect _tokenFieldFrameInWindowCache;
    struct TRef<__CFMachPort *, TRetainReleasePolicy<CFMachPortRef>> _localEventMonitor;
    struct TRef<__CFRunLoopSource *, TRetainReleasePolicy<CFRunLoopSourceRef>> _localEventSource;
    _Bool _hideSuggestionsWindowOnMouseUp;
    _Bool _isShowingSuggestionsWindow;
    struct TNotificationCenterObserver _tfWillMoveToWindowObserver;
    struct TNotificationCenterObserver _tfDidMoveToWindowObserver;
    struct TNotificationCenterObserver _tfFrameDidChangeObserver;
    struct TNotificationCenterObserver _tfSuperScrollViewDidScrollObserver;
    struct TKeyValueObserver _tfWindowFirstResponderObserver;
    struct TNotificationCenterObserver _tfWindowDidBecomeKeyObserver;
    struct TNotificationCenterObserver _tfWindowDidResignKeyObserver;
    struct TNotificationCenterObserver _tfWindowWillZoomClosedObserver;
    struct TNotificationCenterObserver _tfWindowWillCloseObserver;
    struct TNotificationCenterObserver _tfWindowDidResizeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_postAccessibilityTaggingWindowCreatedNotification;
- (void)showSuggestionsWindow;
- (void)hideSuggestionsWindow;
- (void)hideSuggestionsWindowWithCommit:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWindowFrame;
- (void)windowWillClose:(id)arg1;
- (void)superScrollViewDidScroll:(id)arg1;
- (void)tokenFieldWindowFrameChanged:(id)arg1;
- (void)tokenFieldWindowWillClose;
- (void)tokenFieldWindowResignedKey;
- (void)tokenFieldWindowBecameKey:(id)arg1;
- (void)tokenFieldFrameMayHaveChanged;
- (void)tokenFieldDidMoveToWindow;
- (void)tokenFieldWillMoveToWindow:(id)arg1;
- (void)stopObservingTokenFieldWindow;
- (void)startObservingTokenFieldWindow:(id)arg1;
- (void)setTaggingTokenField:(id)arg1;
- (void)deallocCommon;
- (void)finalize;
- (void)dealloc;
- (id)initWithSuggestionsTable:(id)arg1 taggingTokenField:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) TTaggingTokenField *taggingTokenField; // @dynamic taggingTokenField;

@end

