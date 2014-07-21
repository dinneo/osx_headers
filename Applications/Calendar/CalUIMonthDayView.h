//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CalUIMonthContentView.h"

@class CalUIAXTextField, CalUIDateHeaderWeekNumberView, CalUIFontSmoothedTextField, CalUILayerBackedView, CalUIMonthWeekView, CalUITodayDateStringView, NSColor, NSDate, NSLayoutConstraint, NSMutableArray;

@interface CalUIMonthDayView : CalUIMonthContentView
{
    BOOL _isToday;
    BOOL _isThisWeek;
    BOOL _isPreviousWeek;
    BOOL _isWeekend;
    BOOL _showsWeekday;
    BOOL _showsWeekNumber;
    BOOL _isInTopVisibleWeek;
    BOOL _abbreviatingMonths;
    BOOL _animateDateString;
    NSDate *_date;
    CalUIAXTextField *_moreField;
    NSLayoutConstraint *_widthConstraint;
    CalUIMonthWeekView *_weekView;
    NSColor *_backgroundColor;
    unsigned long long _numberOfHiddenEvents;
    double _residualSpace;
    CalUIDateHeaderWeekNumberView *_weekNumberView;
    CalUILayerBackedView *_dateView;
    CalUITodayDateStringView *_todayDateView;
    CalUIFontSmoothedTextField *_lunarDateField;
    CalUILayerBackedView *_lunarMonthUnderline;
    CalUILayerBackedView *_verticalDividerLine;
    NSMutableArray *_lastDateStringKeyArray;
    NSLayoutConstraint *_moreFieldHorizontalConstraint;
    NSLayoutConstraint *_moreFieldVerticalConstraint;
    NSLayoutConstraint *_dateViewTopInsetConstraint;
    NSLayoutConstraint *_dateViewRightInsetConstraint;
    unsigned long long _index;
}

+ (id)weekNumberStringAttributesForMonthDayView:(id)arg1;
+ (id)todayStringAttributes;
+ (id)dayViewWithWeekView:(id)arg1 viewController:(id)arg2 index:(unsigned long long)arg3;
+ (void)initialize;
@property BOOL animateDateString; // @synthesize animateDateString=_animateDateString;
@property unsigned long long index; // @synthesize index=_index;
@property BOOL abbreviatingMonths; // @synthesize abbreviatingMonths=_abbreviatingMonths;
@property(retain) NSLayoutConstraint *dateViewRightInsetConstraint; // @synthesize dateViewRightInsetConstraint=_dateViewRightInsetConstraint;
@property(retain) NSLayoutConstraint *dateViewTopInsetConstraint; // @synthesize dateViewTopInsetConstraint=_dateViewTopInsetConstraint;
@property(retain) NSLayoutConstraint *moreFieldVerticalConstraint; // @synthesize moreFieldVerticalConstraint=_moreFieldVerticalConstraint;
@property(retain) NSLayoutConstraint *moreFieldHorizontalConstraint; // @synthesize moreFieldHorizontalConstraint=_moreFieldHorizontalConstraint;
@property(retain) NSMutableArray *lastDateStringKeyArray; // @synthesize lastDateStringKeyArray=_lastDateStringKeyArray;
@property(retain) CalUILayerBackedView *verticalDividerLine; // @synthesize verticalDividerLine=_verticalDividerLine;
@property(retain) CalUILayerBackedView *lunarMonthUnderline; // @synthesize lunarMonthUnderline=_lunarMonthUnderline;
@property(retain) CalUIFontSmoothedTextField *lunarDateField; // @synthesize lunarDateField=_lunarDateField;
@property(retain) CalUITodayDateStringView *todayDateView; // @synthesize todayDateView=_todayDateView;
@property(retain) CalUILayerBackedView *dateView; // @synthesize dateView=_dateView;
@property(retain) CalUIDateHeaderWeekNumberView *weekNumberView; // @synthesize weekNumberView=_weekNumberView;
@property double residualSpace; // @synthesize residualSpace=_residualSpace;
@property unsigned long long numberOfHiddenEvents; // @synthesize numberOfHiddenEvents=_numberOfHiddenEvents;
@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property BOOL isInTopVisibleWeek; // @synthesize isInTopVisibleWeek=_isInTopVisibleWeek;
@property BOOL showsWeekNumber; // @synthesize showsWeekNumber=_showsWeekNumber;
@property BOOL showsWeekday; // @synthesize showsWeekday=_showsWeekday;
@property BOOL isWeekend; // @synthesize isWeekend=_isWeekend;
@property BOOL isPreviousWeek; // @synthesize isPreviousWeek=_isPreviousWeek;
@property BOOL isThisWeek; // @synthesize isThisWeek=_isThisWeek;
@property BOOL isToday; // @synthesize isToday=_isToday;
@property __weak CalUIMonthWeekView *weekView; // @synthesize weekView=_weekView;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain) CalUIAXTextField *moreField; // @synthesize moreField=_moreField;
@property(retain) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)dateStringColor;
- (BOOL)shouldShowLunarUnderline;
- (id)lunarDateString;
- (id)moreString;
- (id)weekNumberString;
- (id)dateString;
- (id)todayString;
- (id)menuForEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)layout;
- (double)dateBannerHeight;
- (void)focusedMonthChangedAnimated:(BOOL)arg1;
- (void)fontSizeChanged;
- (void)setNumberOfEventsNotShown:(unsigned long long)arg1 residualSpace:(double)arg2;
- (void)updateMoreFieldVisibility;
- (void)updateWeekNumberView;
- (void)_addWeekLunarSpacingConstraint;
- (void)_addDateViewLunarSpacingConstraint;
- (void)updateLunarOverlay;
- (void)overlayCalendarChanged;
- (void)updateForDateChange;
- (void)updateBackgroundColor;
- (void)updateMoreField;
- (void)updateDateFieldAnimated:(BOOL)arg1;
- (void)updateDateFieldConstraints;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)updateIsToday;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)wantsUpdateLayer;
- (void)invalidateAccessibilityRepresentations;
- (void)configureWithDate:(id)arg1 isThisWeek:(BOOL)arg2 isPreviousWeek:(BOOL)arg3 showsWeekNumber:(BOOL)arg4;
- (void)makeTodayDateViewIfNeeded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(id)arg2 index:(unsigned long long)arg3;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilitySupportsNotifications;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;

@end

