//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData;

@protocol TKProtocolSmartCardSession
- (void)terminate;
- (void)setSensitive:(BOOL)arg1;
- (void)sessionRequested:(void (^)(void))arg1;
- (void)transmit:(NSData *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
@end
