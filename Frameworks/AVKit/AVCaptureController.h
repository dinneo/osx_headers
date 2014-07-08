//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class AVCaptureAudioPreviewOutput, AVCaptureDeviceInput, AVCaptureDeviceSelectionController, AVCaptureFileOutput, AVCaptureQualityItem, AVCaptureSession, NSArray, NSNumber, NSObject<OS_dispatch_source>, NSString;

@interface AVCaptureController : NSResponder
{
    AVCaptureSession *_session;
    unsigned int _sessionHasBeenSet:1;
    AVCaptureFileOutput *_fileOutput;
    id _didStartRunningObserver;
    id _didStopRunningObserver;
    NSObject<OS_dispatch_source> *_recordingTimeAndSizeTimer;
    NSObject<OS_dispatch_source> *_audioLevelIndicatorTimer;
    AVCaptureAudioPreviewOutput *_captureAudioPreviewOutput;
    NSArray *_captureQualityItems;
    AVCaptureQualityItem *_selectedQualityItem;
    BOOL _videoPreviewEnabled;
    BOOL _audioPreviewEnabled;
    BOOL _wantsDefaultConfiguration;
    BOOL _captureSessionRunning;
    BOOL _canStartRecording;
    float _audioPreviewVolume;
    id <AVCaptureControllerDelegate> _delegate;
    long long _status;
    double _recordedTime;
    NSNumber *_recordedFileSize;
    double _audioLevel;
    AVCaptureDeviceSelectionController *_captureDeviceSelectionController;
}

+ (id)keyPathsForValuesAffectingCanStopRecording;
+ (id)keyPathsForValuesAffectingCanResumeRecording;
+ (id)keyPathsForValuesAffectingCanPauseRecording;
+ (id)keyPathsForValuesAffectingDeviceErrorDescription;
+ (id)keyPathsForValuesAffectingDeviceDisabledDescription;
+ (id)keyPathsForValuesAffectingAudioInputSourceItems;
+ (id)keyPathsForValuesAffectingVideoInputSourceItems;
+ (id)keyPathsForValuesAffectingAudioInput;
+ (id)keyPathsForValuesAffectingVideoInput;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingRecording;
@property(retain) AVCaptureDeviceSelectionController *captureDeviceSelectionController; // @synthesize captureDeviceSelectionController=_captureDeviceSelectionController;
@property BOOL canStartRecording; // @synthesize canStartRecording=_canStartRecording;
@property(nonatomic) float audioPreviewVolume; // @synthesize audioPreviewVolume=_audioPreviewVolume;
@property double audioLevel; // @synthesize audioLevel=_audioLevel;
@property(getter=isCaptureSessionRunning) BOOL captureSessionRunning; // @synthesize captureSessionRunning=_captureSessionRunning;
@property(retain) NSNumber *recordedFileSize; // @synthesize recordedFileSize=_recordedFileSize;
@property double recordedTime; // @synthesize recordedTime=_recordedTime;
@property(readonly) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <AVCaptureControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL wantsDefaultConfiguration; // @synthesize wantsDefaultConfiguration=_wantsDefaultConfiguration;
@property(getter=isAudioPreviewEnabled) BOOL audioPreviewEnabled; // @synthesize audioPreviewEnabled=_audioPreviewEnabled;
@property(getter=isVideoPreviewEnabled) BOOL videoPreviewEnabled; // @synthesize videoPreviewEnabled=_videoPreviewEnabled;
- (void).cxx_destruct;
- (void)stopRecording:(id)arg1;
- (void)resumeRecording:(id)arg1;
- (void)pauseRecording:(id)arg1;
- (void)startRecording:(id)arg1;
@property(readonly) BOOL canStopRecording;
@property(readonly) BOOL canResumeRecording;
@property(readonly) BOOL canPauseRecording;
- (void)updateCanStartRecording;
@property(readonly) NSString *deviceErrorDescription;
- (id)audioDeviceErrorDescription;
- (id)videoDeviceErrorDescription;
@property(readonly) NSString *deviceDisabledDescription;
@property(retain) AVCaptureQualityItem *selectedQualityItem;
@property(copy) NSArray *captureQualityItems;
- (void)selectInputSourceItem:(id)arg1;
@property(readonly) NSArray *audioInputSourceItems;
@property(readonly) NSArray *videoInputSourceItems;
@property(readonly) AVCaptureDeviceInput *audioInput;
@property(readonly) AVCaptureDeviceInput *videoInput;
- (void)updateAudioLevel;
- (void)stopAudioLevelIndicatorTimer;
- (void)startAudioLevelIndicatorTimer;
- (void)changeAudioPreviewVolumeToMinimum:(id)arg1;
- (void)changeAudioPreviewVolumeToMaximum:(id)arg1;
- (void)decreaseAudioPreviewVolume:(id)arg1;
- (void)increaseAudioPreviewVolume:(id)arg1;
@property(readonly) struct CGSize contentDimensions;
- (void)updateCaptureSessionRunning;
- (void)updateRecordingTimeAndSize;
- (void)stopRecordingTimeAndSizeTimer;
- (void)startRecordingTimeAndSizeTimer;
- (void)setStatus:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, getter=isRecording) BOOL recording;
@property(getter=isFinishingRecording) BOOL finishingRecording;
- (void)setFileOutput:(id)arg1;
@property(readonly) AVCaptureFileOutput *fileOutput;
- (void)setSession:(id)arg1 videoPreviewEnabled:(BOOL)arg2 audioPreviewEnabled:(BOOL)arg3;
@property(readonly) BOOL sessionHasBeenSet;
@property(readonly) AVCaptureSession *session;
- (void)_createDefaultSessionAndFileOutputAsynchronously:(BOOL)arg1;
- (void)createDefaultSessionAndFileOutputAsynchronously;
- (void)_updateVideoInputForSession:(id)arg1;
- (void)_updateAudioInputForSession:(id)arg1;
- (id)_firstDeviceInputWithConnectionOfMediaType:(id)arg1 fromSession:(id)arg2;
- (id)_inputSourceItemsForCaptureDevices:(id)arg1 selectedSourceItem:(id)arg2 mediaType:(id)arg3;
- (id)_defaultCaptureQualityItems;
- (id)_selectedAudioSourceItem;
- (id)_selectedVideoSourceItem;
- (void)dealloc;
- (id)init;
- (BOOL)canHandleSelector:(SEL)arg1 withEvent:(id)arg2 shouldIgnoreSpaceKey:(BOOL)arg3;
- (void)_handleSpaceKeyWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;

@end
