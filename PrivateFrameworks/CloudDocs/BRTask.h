//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BRTask : NSObject
{
    NSArray *_argv;
    NSString *_redirectStdoutToFileAtPath;
    int _redirectStdoutToFileDescriptor;
    NSString *_redirectStderrToFileAtPath;
    int _redirectStderrToFileDescriptor;
    int _waitStatus;
}

+ (id)sanitizeStringForFilename:(id)arg1;
+ (id)taskWithCommandWithArguments:(id)arg1;
+ (id)taskWithCommand:(id)arg1;
@property(readonly, nonatomic) int waitStatus; // @synthesize waitStatus=_waitStatus;
@property(nonatomic) int redirectStderrToFileDescriptor; // @synthesize redirectStderrToFileDescriptor=_redirectStderrToFileDescriptor;
@property(retain, nonatomic) NSString *redirectStderrToFileAtPath; // @synthesize redirectStderrToFileAtPath=_redirectStderrToFileAtPath;
@property(nonatomic) int redirectStdoutToFileDescriptor; // @synthesize redirectStdoutToFileDescriptor=_redirectStdoutToFileDescriptor;
@property(retain, nonatomic) NSString *redirectStdoutToFileAtPath; // @synthesize redirectStdoutToFileAtPath=_redirectStdoutToFileAtPath;
@property(retain, nonatomic) NSArray *argv; // @synthesize argv=_argv;
- (void)resetRedirect;
- (int)exec;
- (void)setCommandWithArguments:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)dealloc;
- (id)init;

@end
