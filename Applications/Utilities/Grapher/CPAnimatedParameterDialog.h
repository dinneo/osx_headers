//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModalDialog.h"

@class CPAnimatedParameterEditorView;

@interface CPAnimatedParameterDialog : CPModalDialog
{
    id mMinValue;
    id mMaxValue;
    id mStepNumber;
    id mStepStepper;
    id mStepSize;
    id mContinuousValues;
    id mAnimationSpeed;
    id mLoopBackAndForth;
    CPAnimatedParameterEditorView *mEditorView;
}

- (void)update:(id)arg1;
- (void)dialogDidOK;
- (void)showWithAnimatedParameterEditorView:(id)arg1;
- (void)updateStepSize;
- (id)parentWindow;

@end

