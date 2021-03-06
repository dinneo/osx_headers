//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableSet, NSString;

@protocol SettingsProtocol <NSObject>
@property(readonly, nonatomic) NSMutableSet *settingsDelegates;
- (BOOL)hasEditMode;
- (int)settingsLevel;
- (BOOL)hasSettingsLevel:(int)arg1;
- (int)refreshSettings;

@optional
@property(nonatomic) id <AssistantCallbackUIDelegate> uiDelegate;
@property(nonatomic) id <SettingsFunctionDelegate> settingsFunctionDelegate;
@property(nonatomic) id <SettingsValueDelegate> settingsValueDelegate;
@property(copy, nonatomic) NSString *settingsKeyToEdit;
@property(nonatomic) BOOL rememberBasePassword;
- (int)stateForProblem:(unsigned int)arg1;
- (int)busyState;
- (unsigned int)taskCode;
- (int)taskState;
- (int)endEdit:(BOOL)arg1;
- (BOOL)isEditing;
- (BOOL)hasChanges;
- (int)beginEdit;
- (int)setSettingsLevel:(int)arg1;
- (int)performFunctionWithParamDict:(NSDictionary *)arg1;
- (int)unIgnoreProblemCode:(unsigned int)arg1;
- (int)ignoreProblemCode:(unsigned int)arg1;
- (NSArray *)validateSettingsAndGetErrors:(NSArray *)arg1;
- (NSArray *)validateAllSettingsAndGetErrors;
- (NSArray *)possibleValuesForSubproperty:(NSDictionary *)arg1 includeHiddenValues:(BOOL)arg2;
- (NSArray *)possibleValuesForSettingKey:(NSString *)arg1 andMetadataKey:(NSString *)arg2 includeHiddenValues:(BOOL)arg3;
- (BOOL)isConflictingValue:(id)arg1 forSettingKey:(NSString *)arg2 andMetadataKey:(NSString *)arg3 andMetaDataIndex:(unsigned long long)arg4 conflictBodyKey:(id *)arg5 conflictAlertPromptKey:(id *)arg6;
- (BOOL)isValidMetaDataRecord:(NSDictionary *)arg1 atIndex:(unsigned long long)arg2 forSettingKey:(NSString *)arg3;
- (BOOL)isValidValue:(id)arg1 forSettingKey:(NSString *)arg2 andMetadataKey:(NSString *)arg3 andRecord:(NSDictionary *)arg4;
- (int)getValue:(id *)arg1 forSettingKey:(NSString *)arg2;
- (NSArray *)allKeychainMACAddresses;
- (NSString *)bestKeychainMACAddress;
- (void)deleteKeychainBasePassword;
- (void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;
- (int)snapshotPop:(BOOL)arg1;
- (int)snapshotPush;
- (BOOL)snapshotDirty;
- (void)snapshotResetAll;
- (NSArray *)snapshotChangedKeys;
- (int)setValue:(id)arg1 forSettingKey:(NSString *)arg2;
@end

