//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalUIThemeManager : NSObject
{
}

+ (id)themeImageWithColor:(id)arg1 type:(int)arg2 state:(int)arg3 options:(int)arg4;
+ (id)_regularCheckboxImageWithColor:(id)arg1 state:(int)arg2 highlight:(BOOL)arg3 inHIDPI:(BOOL)arg4;
+ (id)_priorityImageWithColor:(id)arg1 state:(int)arg2;
+ (id)_alertImageWithColor:(id)arg1;
+ (void)contextWillSave:(id)arg1;
+ (BOOL)_setup;
+ (void)_runCleanup;

@end

