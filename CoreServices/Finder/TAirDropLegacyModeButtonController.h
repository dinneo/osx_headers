//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSString, TAirDropDiscoveryController;

@interface TAirDropLegacyModeButtonController : TViewController
{
    struct TNSRef<TAirDropDiscoveryController *> _discoveryController;
    struct TNSRef<TAirDropLegacyModePopoverViewController *> _popoverViewContoller;
    struct TNotificationCenterObserver _popoverWillCloseObserver;
}

+ (id)keyPathsForValuesAffectingButtonTitle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)popoverWillClose;
- (void)buttonPressed:(id)arg1;
@property(readonly, retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(readonly) TAirDropDiscoveryController *discoveryController;
- (void)initCommon;

@end

