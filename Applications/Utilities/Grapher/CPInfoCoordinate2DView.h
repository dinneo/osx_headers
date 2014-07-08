//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPInfoView.h"

@interface CPInfoCoordinate2DView : CPInfoView
{
    id mXName;
    id mYName;
    id mRName;
    id mPhiName;
    id mXValue;
    id mYValue;
    id mRValue;
    id mPhiValue;
    BOOL mUseCurrentPoint;
    double mCurrentPoint[3];
}

- (void)hideCoordinates;
- (void)showCoordinates:(double *)arg1;
- (BOOL)shouldDisplay;
- (void)dealloc;
- (void)awakeFromNib;
- (void)viewDidChange:(id)arg1;
- (void)updateUI;
- (void)setName:(id)arg1 ofAxis:(id)arg2;
- (void)cursorsDidChange:(id)arg1;
- (void)updateCoord;
- (id)coordValues;
- (void)updateCoordsOfSystems:(id)arg1 ofCartesianPoint:(double [3])arg2;
- (void)setCoord:(id)arg1:(id)arg2:(id)arg3 ofSystem:(id)arg4 ofCartesianCoord:(double *)arg5;
- (BOOL)currentFrameCoord:(double *)arg1;
- (id)currentHairCross;
- (id)currentView;

@end
