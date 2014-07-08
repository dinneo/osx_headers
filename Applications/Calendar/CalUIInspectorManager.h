//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUIKUserActivityCompliant.h"
#import "EKEVentViewApplicationDelegate.h"

@class CalUIDayViewController, CalUIInspectorPopoverController, CalUIRetargetableInspectorWindowController, NSMutableDictionary, NSString;

@interface CalUIInspectorManager : NSObject <CUIKUserActivityCompliant, EKEVentViewApplicationDelegate>
{
    CalUIRetargetableInspectorWindowController *_retargetableInspector;
    CalUIDayViewController *_dayViewInspector;
    CalUIInspectorPopoverController *_popoverInspector;
    NSMutableDictionary *_standaloneInspectors;
}

@property(retain) NSMutableDictionary *standaloneInspectors; // @synthesize standaloneInspectors=_standaloneInspectors;
@property(retain) CalUIInspectorPopoverController *popoverInspector; // @synthesize popoverInspector=_popoverInspector;
@property(retain) CalUIDayViewController *dayViewInspector; // @synthesize dayViewInspector=_dayViewInspector;
@property(retain) CalUIRetargetableInspectorWindowController *retargetableInspector; // @synthesize retargetableInspector=_retargetableInspector;
- (void).cxx_destruct;
- (int)workDayEndMinutes;
- (int)workDayStartMinutes;
- (BOOL)timeZoneSupportEnabled;
- (void)selectCalendar:(id)arg1;
- (id)undoDelegate;
- (id)decisionDelegate;
- (id)commitDelegate;
- (void)openAvailabilityPanelForEvent:(id)arg1;
- (void)trackEventSelection:(id)arg1;
- (BOOL)isMatchForActivity:(id)arg1;
- (id)representedActivity;
- (void)uiOccurrence:(id)arg1 willUpdateFromEvent:(id)arg2 toEvent:(id)arg3;
- (void)changeInspectorsToFloat:(BOOL)arg1;
- (void)popoverDetached:(id)arg1;
- (id)openPopoverInspectorForEvent:(id)arg1 relativeToView:(id)arg2 onMainController:(id)arg3;
- (id)openRetargetableInspectorForEvent:(id)arg1;
- (id)openStandaloneInspectorForEvent:(id)arg1 onMainController:(id)arg2;
- (struct CGPoint)getNextOriginForInspectorWindow;
- (BOOL)inspectorAtPoint:(struct CGPoint)arg1;
- (void)closeAndRemoveStandaloneInspectorForEvent:(id)arg1;
- (void)closeInlineInspector;
- (BOOL)shouldMakeInlineInspectorStandalone;
- (void)selectTitleForEvent:(id)arg1;
- (id)preferredOpenInspectorForEvent:(id)arg1;
- (id)saveInspectors;
- (void)_saveInspector:(id)arg1 toDictionary:(id)arg2 type:(int)arg3;
- (id)allOpenInspectorEventsOnMainController:(id)arg1;
- (id)allOpenInspectorControllersForEvent:(id)arg1;
- (id)_openInspectorsAmongInspectors:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
