//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMAVMicrophone, NSArray, NSMutableArray;

@interface IMAVMicrophoneController : NSObject
{
    id _internal;
    NSMutableArray *_microphones;
    struct dispatch_queue_s *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVMicrophone *currentMicrophone;
- (void)_loadSavedMicrophone;
- (void)_rebuildMicrophoneList;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSArray *microphones;
- (id)init;

@end

