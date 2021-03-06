//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface ABAccountComparer : NSObject
{
    NSDictionary *_accountConfigurationsByIdentifier;
}

+ (id)iCloudDomains;
+ (id)comparisonKeys;
- (BOOL)isUseSSLConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (unsigned long long)effectiveServerPortForConfiguration:(id)arg1;
- (BOOL)isServerPortConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (BOOL)isHost:(id)arg1 equivalentToHost:(id)arg2;
- (id)usernameByStrippingDomain:(id)arg1;
- (BOOL)isiCloudUsername:(id)arg1 equivalentToUserName:(id)arg2;
- (BOOL)isUsername:(id)arg1 equivalentToUsername:(id)arg2;
- (BOOL)isExistingValue:(id)arg1 equivalentToProposedValue:(id)arg2 forConfigKey:(id)arg3;
- (BOOL)isExistingConfiguration:(id)arg1 equivalentToProposedConfig:(id)arg2;
- (id)duplicateAccountIdentifierForConfiguration:(id)arg1;
- (void)dealloc;
- (id)initWithAccountConfigurationsByIdentifier:(id)arg1;

@end

