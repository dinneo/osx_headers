//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SMAutoLoaderServer, SMPassCode, SlingShotConnectionServer;

@interface SMNetworkMigrationManager : NSObject
{
    SMAutoLoaderServer *_alServer;
    SlingShotConnectionServer *_slServer;
    SMPassCode *_passcode;
}

+ (id)generateReadableNameOfLength:(int)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)sharedSecret;
- (id)slingshotServiceName;
- (id)startSlingShotServer:(id)arg1;
- (void)stopSlingShotServer;
- (void)setTrustedPassCode:(id)arg1;

@end
