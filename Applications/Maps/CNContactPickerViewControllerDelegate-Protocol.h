//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContact, CNContactPickerViewController, NSString;

@protocol CNContactPickerViewControllerDelegate <NSObject>

@optional
- (void)contactPickerViewController:(CNContactPickerViewController *)arg1 didChooseContact:(CNContact *)arg2 key:(NSString *)arg3 value:(id)arg4;
@end

