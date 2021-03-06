//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SetupAssistantSubView.h"

@class BluetoothHIDDeviceController, IOBluetoothDevice, IOBluetoothDeviceInfoGatherer, IOBluetoothDevicePair, IOBluetoothHostController, IOBluetoothPasskeyDisplay, NSImageView, NSPanel, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView;

@interface SubViewPairDevice2008 : SetupAssistantSubView
{
    NSTextField *mTextFieldStatus;
    NSTextField *mTextFieldStatusExplanation;
    NSTextField *mTextFieldStatusExplanation2;
    NSProgressIndicator *mProgressBar;
    NSImageView *mErrorImage;
    IOBluetoothHostController *_hostController;
    NSView *_BTPasskeyView;
    IOBluetoothPasskeyDisplay *_BTPasskeyDisplay;
    NSString *mPINCode;
    IOBluetoothDevice *_device;
    BOOL mInfoGathered;
    BOOL mPairedOK;
    BOOL mBusy;
    BOOL _SDPComplete;
    BOOL _mouseTriedNullPinCode;
    NSPanel *_panelPasscode;
    NSTextField *_panelPasscode_textFieldPassCode;
    NSTimer *mTimeoutTimer;
    NSString *mStringInstructionText;
    NSString *mStringInstructionText2;
    NSString *mStringAttemptSucceeded;
    IOBluetoothDevicePair *_devicePair;
    IOBluetoothDeviceInfoGatherer *mGatherer;
    BluetoothHIDDeviceController *mBluetoothHIDDeviceController;
}

@property(retain) IOBluetoothDeviceInfoGatherer *deviceInfoGatherer; // @synthesize deviceInfoGatherer=mGatherer;
@property(copy) NSString *PINCode; // @synthesize PINCode=mPINCode;
- (void).cxx_destruct;
- (void)timeoutTimerFired;
- (void)stopTimeoutTimer;
- (void)startTimeoutTimer;
- (void)newBluetoothHIDDevice:(id)arg1;
- (void)clearAllStatusControls;
- (void)setUpUIForErrorConditionWithString:(id)arg1;
- (void)setUpUIForYesNo:(unsigned int)arg1;
- (void)setUpUIForAutomaticPairing;
- (void)setUpUIForPasskeyExchange;
- (void)gathererProgressSelector:(id)arg1;
- (void)deviceInfoGatheringComplete;
- (void)startDeviceInfoGathering;
- (void)passCodePanelOKClicked:(id)arg1;
- (void)passCodePanelCancelClicked:(id)arg1;
- (void)deviceAddressSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)startPasscodePanel;
- (void)sheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)devicePairingFinished:(id)arg1 error:(int)arg2;
- (void)devicePairingKeypressNotification:(id)arg1 type:(unsigned char)arg2;
- (void)devicePairingUserPasskeyNotification:(id)arg1 passkey:(unsigned int)arg2;
- (void)devicePairingUserConfirmationRequest:(id)arg1 numericValue:(unsigned int)arg2;
- (void)devicePairingPINCodeRequest:(id)arg1;
- (void)devicePairingConnecting:(id)arg1;
- (void)devicePairingStarted:(id)arg1;
- (void)startPairingWithDevice;
- (void)initiatePairingOrSDP;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
- (void)bluetoothStatusChanged:(id)arg1;
- (void)subViewRemoved:(id)arg1;
- (id)getNextSubView;
- (BOOL)canRemoveSubView:(id)arg1 direction:(int)arg2;
- (BOOL)goBackButtonEnabled;
- (BOOL)continueButtonEnabled;
- (void)subViewAdded:(id)arg1;
- (BOOL)subViewWillBeAddedForward:(id)arg1;
- (BOOL)subViewWillBeAdded:(id)arg1;
- (id)getName;

@end

