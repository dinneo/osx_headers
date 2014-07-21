//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEORouteMatch, VKAnimation, VKPuckAnimatorLocationProjector, VKRunningCurve;

@interface VKPuckAnimator : NSObject
{
    id <VKPuckAnimatorTarget> _target;
    VKAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    double _vehicleHeading;
    id <VKPuckAnimatorDelegate> _delegate;
    long long _pausedCount;
    BOOL _suspended;
    double _tracePlaybackSpeedMultiplier;
    unsigned long long _behavior;
    struct VKPoint _lastProjectedPosition;
    GEORouteMatch *_lastProjectedLocation;
}

@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) double tracePlaybackSpeedMultiplier; // @synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier;
@property(retain, nonatomic) GEORouteMatch *lastProjectedLocation; // @synthesize lastProjectedLocation=_lastProjectedLocation;
@property(nonatomic) id <VKPuckAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <VKPuckAnimatorTarget> target; // @synthesize target=_target;
- (id).cxx_construct;
- (void)updateVehicleHeading:(double)arg1;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)_step;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

