//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSProgressIndicator;

@interface CalCalendarTitleCell : NSTextFieldCell
{
    NSProgressIndicator *_progressIndicator;
    int _alertState;
    BOOL _isMouseOver;
    BOOL _isMouseDown;
    unsigned long long _badgeCount;
    unsigned long long _badgeHeight;
    unsigned long long _badgeMargins;
    unsigned long long _badgeWidthForSingleDigit;
    BOOL _isMouseOverAlert;
    BOOL _isMouseDelayHovered;
    BOOL _isCalendarSharable;
    BOOL _isInspectedNode;
}

@property BOOL isInspectedNode; // @synthesize isInspectedNode=_isInspectedNode;
@property BOOL isCalendarSharable; // @synthesize isCalendarSharable=_isCalendarSharable;
@property BOOL isMouseDelayHovered; // @synthesize isMouseDelayHovered=_isMouseDelayHovered;
@property BOOL isMouseOverAlert; // @synthesize isMouseOverAlert=_isMouseOverAlert;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBadgeCenteredInRect:(struct CGRect)arg1;
- (void)drawIndicator:(id)arg1 circled:(BOOL)arg2 cellFrame:(struct CGRect *)arg3;
- (void)positionProgressIndicatorInRect:(struct CGRect)arg1;
- (void)controlTintChanged:(id)arg1;
- (id)indicatorColor;
- (id)badgeColor;
- (double)badgeWidth;
- (id)badgeTextAttributes;
- (id)badgeTextColor;
- (void)setAlertState:(int)arg1;
- (int)alertState;
- (void)setProgressIndicator:(id)arg1;
- (id)progressIndicator;
- (void)setBadgeCount:(unsigned long long)arg1;
- (unsigned long long)badgeCount;
- (void)setMouseOver:(BOOL)arg1;
- (BOOL)isMouseOver;
- (void)setMouseDown:(BOOL)arg1;
- (BOOL)isMouseDown;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end
