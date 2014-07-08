//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (queryParsingExtensions)
+ (id)publicDotMacAccessURLWithBase:(id)arg1 andFilename:(id)arg2;
+ (id)publicDotMacAccessFilename:(id)arg1;
+ (id)iDiskSmallNameCompatibleNameForFilename:(id)arg1;
+ (id)davCompatibleFilenameForFilename:(id)arg1;
+ (id)URLWithBase:(id)arg1 andFilename:(id)arg2;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(long long)arg3 uri:(id)arg4;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(long long)arg3 path:(id)arg4;
+ (id)URLWithDirtyString:(id)arg1;
+ (long long)classicPortForScheme:(id)arg1;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(long long)arg3 path:(id)arg4;
- (id)URLByRemovingLastPathComponent;
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;
- (id)queryParameters;
- (id)initWithScheme:(id)arg1 host:(id)arg2 port:(long long)arg3 uri:(id)arg4;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (id)URLWithUsername:(id)arg1;
- (id)uri;
- (id)initWithDirtyString:(id)arg1;
@end
