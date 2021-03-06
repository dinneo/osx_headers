//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSProgressIndicator, NSTextField, NSTimer, NSWindow;

@interface AUGenericModalTaskSheetController : NSWindowController
{
    NSTextField *_description;
    NSProgressIndicator *_progress;
    NSProgressIndicator *_spinner;
    NSWindow *_hostingWindow;
    id _sheetDelegate;
    SEL _sheetSelector;
    void *_sheetContext;
    NSTimer *_restartTimeout;
}

+ (id)auGenericModalTaskSheetController;
@property(nonatomic) NSTimer *restartTimeout; // @synthesize restartTimeout=_restartTimeout;
@property(nonatomic) void *sheetContext; // @synthesize sheetContext=_sheetContext;
@property(nonatomic) SEL sheetSelector; // @synthesize sheetSelector=_sheetSelector;
@property(nonatomic) id sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
@property(nonatomic) NSWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property NSProgressIndicator *progress; // @synthesize progress=_progress;
@property NSTextField *description; // @synthesize description=_description;
- (void)restartTimeoutCallback:(id)arg1;
- (void)deviceRestartingPhase;
- (void)endModalTaskSheet;
- (void)endModalTaskNotification:(id)arg1;
- (void)beginModalTaskSheet;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

