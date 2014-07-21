//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCController;

@interface GCMotion : NSObject
{
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    struct GCQuaternion _attitude;
    CDStruct_31142d93 _rotationRate;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
}

@property(copy) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(readonly) __weak GCController *controller; // @synthesize controller=_controller;
@property(readonly) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly) struct GCQuaternion attitude; // @synthesize attitude=_attitude;
@property(readonly) CDStruct_31142d93 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(readonly) CDStruct_31142d93 gravity; // @synthesize gravity=_gravity;
- (void).cxx_destruct;
- (void)_stopDeviceMotionUpdates;
- (void)_startDeviceMotionUpdates;
- (id)initWithController:(id)arg1;

@end

