//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AudioDeviceController.h"

@class NSPopUpButton, NSTextField;

@interface InputAudioDeviceController : AudioDeviceController
{
    NSTextField *sampleRateConversionLabel;
    NSPopUpButton *sampleRateConversionPopup;
}

- (void)iaSampleRateConversionStateChanged:(id)arg1;
- (void)setCurrentDevice:(const struct CAAudioHardwareDevice *)arg1;
- (id)init;

@end

