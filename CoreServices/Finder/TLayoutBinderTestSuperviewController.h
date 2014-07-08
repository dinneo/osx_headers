//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLayoutBinderTestViewController.h"

@class TLayoutBinderTestBox;

@interface TLayoutBinderTestSuperviewController : TLayoutBinderTestViewController
{
    TLayoutBinderTestBox *_slaveBox;
    TLayoutBinderTestBox *_superviewMasterBox;
    struct CGRect _initialSlaveFrame;
    struct CGRect _initialSuperviewMasterFrame;
    struct CGRect _slaveBoxFrame;
}

- (id).cxx_construct;
- (_Bool)runTest:(_Bool *)arg1;
- (void)superviewTest4YAxisSlaveBoxFrameChanged:(id)arg1;
- (void)superviewTest4XAxisSlaveBoxFrameChanged:(id)arg1;
- (_Bool)configureSuperviewTest4:(struct CGRect *)arg1 expectedMasterFrame:(struct CGRect *)arg2 expectedSlaveFrame:(struct CGRect *)arg3;
- (_Bool)configureSuperviewTest3:(double *)arg1 masterSize:(double *)arg2 expectedMasterOrigin:(double *)arg3 expectedMasterSize:(double *)arg4 expectedSlaveOrigin:(double *)arg5 expectedSlaveSize:(double *)arg6;
- (_Bool)configureSuperviewTest2:(double *)arg1 masterSize:(double *)arg2 expectedMasterOrigin:(double *)arg3 expectedMasterSize:(double *)arg4 expectedSlaveOrigin:(double *)arg5 expectedSlaveSize:(double *)arg6;
- (_Bool)configureSuperviewTest1:(double *)arg1 masterSize:(double *)arg2 expectedMasterOrigin:(double *)arg3 expectedMasterSize:(double *)arg4 expectedSlaveOrigin:(double *)arg5 expectedSlaveSize:(double *)arg6;
- (void)reset;
- (void)setIsFlipped:(BOOL)arg1;
- (void)viewLoaded;

@end
