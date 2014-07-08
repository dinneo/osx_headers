//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalUICalendarInfoView, CalUICalendarSharee;

@protocol CalUICalendarInfoViewDelegate <NSObject>
- (void)reinviteSharee:(CalUICalendarSharee *)arg1 forInfoView:(CalUICalendarInfoView *)arg2;
- (BOOL)infoViewShouldSupportShareeAccessChange:(CalUICalendarInfoView *)arg1;
- (BOOL)infoViewShouldDisplayiCloudStatus:(CalUICalendarInfoView *)arg1;
- (void)infoViewCancelledByUser:(CalUICalendarInfoView *)arg1;
- (void)infoViewDismissedByUser:(CalUICalendarInfoView *)arg1;
- (void)infoView:(CalUICalendarInfoView *)arg1 updatedMinimumSize:(struct CGSize)arg2;
- (void)infoView:(CalUICalendarInfoView *)arg1 publicCalendarToggledOn:(BOOL)arg2;
@end
