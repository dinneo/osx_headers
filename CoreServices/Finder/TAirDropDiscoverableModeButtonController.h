//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSString, TAirDropDiscoveryController;

@interface TAirDropDiscoverableModeButtonController : TViewController
{
    struct TNSRef<TAirDropDiscoveryController *> _discoveryController;
    struct TNSRef<TAirDropDiscoverableModePopoverViewController *> _popoverViewContoller;
    struct TKeyValueBinder _discoverableModeDCToPVCBinder;
    struct TKeyValueBinder _discoverableModePVCToDCBinder;
    struct TNotificationCenterObserver _popoverWillCloseObserver;
    _Bool _popoverIsOpen;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
+ (id)keyPathsForValuesAffectingEnabled;
+ (id)keyPathsForValuesAffectingButtonTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)popoverWillClose;
- (void)buttonPressed:(id)arg1;
@property(readonly, nonatomic) _Bool shouldBeVisible; // @dynamic shouldBeVisible;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
@property(readonly, retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(readonly, nonatomic) TAirDropDiscoveryController *discoveryController;
- (void)initCommon;

@end

