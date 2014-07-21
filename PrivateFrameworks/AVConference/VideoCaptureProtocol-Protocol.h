//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol VideoCaptureProtocol
- (BOOL)isPreviewRunning;
- (int)copyColorInfo:(const struct __CFDictionary **)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)stop:(_Bool)arg1;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;

@optional
- (int)frameBecameAvailableCount:(int *)arg1 figBufferQueueEmptyCount:(int *)arg2 figBufferQueueErrorCount:(int *)arg3;
- (int)getPreviewFrameCount:(int *)arg1 captureFrameCount:(int *)arg2 reset:(BOOL)arg3;
- (int)setFrameRatePercentage:(double)arg1 newFramerate:(int *)arg2;
- (int)getCameraType:(int *)arg1;
- (int)setCameraType:(int)arg1;
- (int)getCamera:(unsigned int *)arg1;
- (int)setCamera:(unsigned int)arg1;
@end

