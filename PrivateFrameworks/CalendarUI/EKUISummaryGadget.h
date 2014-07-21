//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUISingleTextFieldGadget.h>

#import "EKUISummary.h"

@class NSString;

@interface EKUISummaryGadget : EKUISingleTextFieldGadget <EKUISummary>
{
}

- (void)updateWithChanges:(id)arg1;
- (void)setActiveKeyboardHover:(BOOL)arg1;
- (id)attributedSummaryString;
- (id)summaryString;
- (BOOL)isEditable;
- (id)initWithEventViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

