//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalPreferences;

@interface CALViewModel : NSObject
{
    CalPreferences *_preferences;
    CalPreferences *_calPreferences;
}

+ (id)viewModel;
@property(retain) CalPreferences *calPreferences; // @synthesize calPreferences=_calPreferences;
- (void).cxx_destruct;
- (long long)stateForCalendarWithUID:(id)arg1 delegateID:(id)arg2;
- (void)setCalendarWithUID:(id)arg1 delegateID:(id)arg2 state:(long long)arg3;
- (id)getDictionaryForDelegateID:(id)arg1;
- (id)init;

@end

