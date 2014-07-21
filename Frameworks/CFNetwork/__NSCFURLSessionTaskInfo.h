//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSError, NSString, NSURL, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding>
{
    BOOL _hasStarted;
    BOOL _expectingResumeCallback;
    BOOL _establishedConnection;
    BOOL _disablesRetry;
    BOOL _shouldCancelOnDisconnect;
    BOOL _discretionary;
    unsigned long long _identifier;
    unsigned long long _taskKind;
    double _creationTime;
    long long _state;
    unsigned long long _suspendCount;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSError *_error;
    NSURL *_fileURL;
    NSURL *_downloadFileURL;
    NSString *_bundleID;
    NSString *_sessionID;
    unsigned long long _retryCount;
    unsigned long long _lowThroughputTimerRetryCount;
    long long _basePriority;
    NSString *_uniqueIdentifier;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSDictionary *__backgroundTaskTimingData;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *_backgroundTaskTimingData; // @synthesize _backgroundTaskTimingData=__backgroundTaskTimingData;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(retain) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(getter=isDiscretionary) BOOL discretionary; // @synthesize discretionary=_discretionary;
@property long long basePriority; // @synthesize basePriority=_basePriority;
@property BOOL shouldCancelOnDisconnect; // @synthesize shouldCancelOnDisconnect=_shouldCancelOnDisconnect;
@property BOOL disablesRetry; // @synthesize disablesRetry=_disablesRetry;
@property unsigned long long lowThroughputTimerRetryCount; // @synthesize lowThroughputTimerRetryCount=_lowThroughputTimerRetryCount;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property BOOL establishedConnection; // @synthesize establishedConnection=_establishedConnection;
@property BOOL expectingResumeCallback; // @synthesize expectingResumeCallback=_expectingResumeCallback;
@property BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSURL *downloadFileURL; // @synthesize downloadFileURL=_downloadFileURL;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy) NSError *error; // @synthesize error=_error;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property long long state; // @synthesize state=_state;
@property double creationTime; // @synthesize creationTime=_creationTime;
@property unsigned long long taskKind; // @synthesize taskKind=_taskKind;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDownloadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithUploadTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithDataTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;
- (id)initWithTask:(id)arg1 bundleID:(id)arg2 sessionID:(id)arg3;

@end

