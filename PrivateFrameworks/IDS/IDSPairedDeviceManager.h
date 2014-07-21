//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDaemonListenerProtocol.h"

@class NSString, _IDSCompletionHandler;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol>
{
    _IDSCompletionHandler *_deleteCompletion;
    _IDSCompletionHandler *_localCompletion;
    _IDSCompletionHandler *_pairedCompletion;
}

+ (id)sharedInstance;
- (void)pairedDeviceInfo:(id)arg1;
- (void)localDeviceInfo:(id)arg1;
- (void)device:(id)arg1 pairingDeleted:(BOOL)arg2;
- (void)device:(id)arg1 pairingAdded:(BOOL)arg2;
- (void)getPairedDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)getLocalDeviceInfoWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(struct dispatch_queue_s *)arg2;
- (void)deletePairedDevice:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2 queue:(struct dispatch_queue_s *)arg3;
- (void)savePublicKey:(id)arg1 forIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

