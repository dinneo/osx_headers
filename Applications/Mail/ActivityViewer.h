//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MVTerminationHandler.h"
#import "NSWindowDelegate.h"

@class NSDate, NSMutableArray, NSPanel, NSScrollView, NSStackView, NSString, NSTimer;

@interface ActivityViewer : NSObject <MVTerminationHandler, NSWindowDelegate>
{
    NSMutableArray *_entries;
    BOOL _userIsBeingPromptedForTermination;
    NSStackView *_docView;
    NSScrollView *_scrollView;
    NSPanel *_window;
    NSTimer *_updateTimer;
    NSDate *_updateTimerStartDate;
}

@property(nonatomic) BOOL userIsBeingPromptedForTermination; // @synthesize userIsBeingPromptedForTermination=_userIsBeingPromptedForTermination;
@property(retain, nonatomic) NSDate *updateTimerStartDate; // @synthesize updateTimerStartDate=_updateTimerStartDate;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSPanel *window; // @synthesize window=_window;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSStackView *docView; // @synthesize docView=_docView;
- (void).cxx_destruct;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)statusMessageForTarget:(id)arg1;
- (void)toggleActivityViewerVisible;
- (BOOL)isActivityViewerVisible;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)_promptUserForTermination;
- (BOOL)needsToPromptUserBeforeTermination:(id)arg1;
- (long long)countOfBackgroundActivities;
- (BOOL)hasBackgroundActivity;
- (void)removeEntry:(id)arg1;
- (void)_appendEntry:(id)arg1;
- (void)_addViewToViewerWindow:(id)arg1;
- (void)_updateAllEntries;
- (void)_handleNewActivity:(id)arg1;
- (void)awakeFromNib;
- (void)initializeFromDefaults;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

