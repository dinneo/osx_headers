//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInputHelper, AVAssetWriterInputPassDescriptionResponder, AVWeakReference;

@interface AVAssetWriterInputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    struct dispatch_queue_s *helperQueue;
    BOOL attachedToPixelBufferAdaptor;
    BOOL attachedToMetadataAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    long long numberOfAppendFailures;
    struct dispatch_queue_s *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
}

@end
