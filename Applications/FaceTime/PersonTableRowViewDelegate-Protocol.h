//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PersonTableRowView;

@protocol PersonTableRowViewDelegate <NSObject>
- (void)infoButtonPressed:(PersonTableRowView *)arg1;
- (void)videoButtonPressed:(PersonTableRowView *)arg1;
- (void)telephonyButtonPressed:(PersonTableRowView *)arg1 number:(NSString *)arg2;
- (void)audioButtonPressed:(PersonTableRowView *)arg1;
@end
