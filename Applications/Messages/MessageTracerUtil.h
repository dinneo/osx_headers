//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MessageTracerUtil : NSObject
{
}

+ (BOOL)submitPrefsIfNecessary;
+ (void)_logWeeklyStats;
+ (void)_logServicesUsed;
+ (BOOL)_getAndClearBoolInPreference:(id)arg1;
+ (long long)_getAndClearIntInPreference:(id)arg1;
+ (void)incrementNumWithPreferenceKey:(id)arg1;
+ (void)enablePrefForServiceName:(id)arg1;
+ (void)_enableServicePrefForKey:(id)arg1;
+ (void)logInMessageTracerOutOfOrder:(int)arg1;
+ (void)logInMessageTracerStyle:(id)arg1 groupStyle:(id)arg2 incomingBGColor:(id)arg3 outgoingBGColor:(id)arg4 incomingFont:(id)arg5 outgoingFont:(id)arg6 saveHistory:(id)arg7;
+ (void)logInMessageTracerWithDomain:(id)arg1 withResult:(const char *)arg2 withSignature:(id)arg3 withFirstValue:(int)arg4 withSecondValue:(int)arg5;
+ (void)logInMessageTracerWithDomain:(id)arg1 withResult:(const char *)arg2 withSignature:(id)arg3 withFirstValue:(int)arg4;
+ (void)logInMessageTracerWithDomain:(id)arg1 withResult:(const char *)arg2 withSignature:(id)arg3;
+ (id)domainWithName:(id)arg1;
+ (id)_version;
+ (id)_bundleID;

@end
