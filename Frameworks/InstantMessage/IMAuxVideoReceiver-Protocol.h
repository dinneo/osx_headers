//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol IMAuxVideoReceiver
- (oneway void)provider:(NSString *)arg1 updateControlBarFromDictionaryRepresentation:(NSDictionary *)arg2;
- (oneway void)provider:(NSString *)arg1 sentBuffer:(int)arg2 withAttachments:(NSDictionary *)arg3;
- (oneway void)provider:(NSString *)arg1 bundleID:(NSString *)arg2 connectWithPixelFormat:(unsigned int)arg3 videoStills:(BOOL)arg4 replacement:(BOOL)arg5 audioChannels:(int)arg6 controlsDictionary:(NSDictionary *)arg7;
@end
