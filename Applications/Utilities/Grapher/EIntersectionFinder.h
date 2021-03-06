//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EEvaluator.h"

@class EIntersectionDisplay, GGraph, GSystem;

@interface EIntersectionFinder : EEvaluator
{
    EIntersectionDisplay *mIntersectionDisplay;
    GGraph *mFirstGraph;
    GSystem *mFirstSystem;
    GGraph *mSecondGraph;
    GSystem *mSecondSystem;
}

+ (id)sharedInspector;
- (void)startEvaluationWithViewController:(id)arg1;
- (BOOL)canStartEvaluationWithViewController:(id)arg1;
- (BOOL)setFirstGraph:(id)arg1 secondGraph:(id)arg2;
- (void)evaluate;
- (double)valueAt:(const double *)arg1;
- (id)viewsToBeDisplayed;
- (BOOL)removeInputFromOutput;
- (id)windowNibName;

@end

