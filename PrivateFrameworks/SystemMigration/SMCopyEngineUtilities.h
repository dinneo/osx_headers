//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SMCopyEngineUtilities : NSObject
{
}

+ (void)ensureParentPathExists:(id)arg1 matchingPermissionsOfPath:(id)arg2;
+ (void)ensureParentPathExists:(id)arg1;
+ (void)unTouchProgressCookieForPath:(id)arg1;
+ (void)touchProgressCookieForPath:(id)arg1;
+ (BOOL)existingPath:(id)arg1 onSameDeviceAsExistingPath:(id)arg2;
+ (void)initialize;
+ (BOOL)shouldIgnoreErrorFile:(id)arg1;

@end
