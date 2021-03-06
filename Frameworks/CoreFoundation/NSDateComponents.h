//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSCalendar, NSDate, NSTimeZone;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isValidDateInCalendar:(id)arg1;
@property(readonly, getter=isValidDate) BOOL validDate;
- (long long)valueForComponent:(unsigned long long)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
@property(readonly, copy) NSDate *date;
@property(getter=isLeapMonth) BOOL leapMonth;
@property long long yearForWeekOfYear;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long nanosecond;
@property long long quarter;
@property long long weekdayOrdinal;
@property long long weekday;
- (void)setWeek:(long long)arg1;
@property long long second;
@property long long minute;
@property long long hour;
@property long long day;
@property long long month;
@property long long year;
@property long long era;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSCalendar *calendar;
- (BOOL)isLeapMonthSet;
- (long long)week;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end

