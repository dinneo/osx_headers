//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ICScannerBandData, IKScannerDeviceView, NSData, NSDictionary, NSError, NSURL;

@protocol IKScannerDeviceViewDelegate

@optional
- (void)scannerDeviceView:(IKScannerDeviceView *)arg1 didEncounterError:(NSError *)arg2;
- (void)scannerDeviceView:(IKScannerDeviceView *)arg1 didScanToBandData:(ICScannerBandData *)arg2 scanInfo:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)scannerDeviceView:(IKScannerDeviceView *)arg1 didScanToURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)scannerDeviceView:(IKScannerDeviceView *)arg1 didScanToURL:(NSURL *)arg2 fileData:(NSData *)arg3 error:(NSError *)arg4;
@end

