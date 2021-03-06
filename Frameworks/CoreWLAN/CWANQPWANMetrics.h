//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreWLAN/CWANQPElement.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface CWANQPWANMetrics : CWANQPElement <NSSecureCoding, NSCopying>
{
    long long _linkStatus;
    BOOL _hasSymmetricLink;
    BOOL _isAtCapacity;
    long long _downlinkSpeed;
    long long _uplinkSpeed;
    long long _downlinkLoad;
    long long _uplinkLoad;
    long long _loadMeasurementDuration;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringForWANMetricsLinkStatus:(long long)arg1;
@property(nonatomic) long long loadMeasurementDuration; // @synthesize loadMeasurementDuration=_loadMeasurementDuration;
@property(nonatomic) long long uplinkLoad; // @synthesize uplinkLoad=_uplinkLoad;
@property(nonatomic) long long downlinkLoad; // @synthesize downlinkLoad=_downlinkLoad;
@property(nonatomic) long long uplinkSpeed; // @synthesize uplinkSpeed=_uplinkSpeed;
@property(nonatomic) long long downlinkSpeed; // @synthesize downlinkSpeed=_downlinkSpeed;
@property(nonatomic) BOOL isAtCapacity; // @synthesize isAtCapacity=_isAtCapacity;
@property(nonatomic) BOOL hasSymmetricLink; // @synthesize hasSymmetricLink=_hasSymmetricLink;
@property(nonatomic) long long linkStatus; // @synthesize linkStatus=_linkStatus;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithBSSID:(id)arg1 hessid:(id)arg2 timestamp:(id)arg3 anqpResult:(id)arg4;

@end

