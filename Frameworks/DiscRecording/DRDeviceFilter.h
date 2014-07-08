//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface DRDeviceFilter : NSObject <NSCopying, NSCoding>
{
    id _delegate;
}

+ (id)defaultFilter;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) id <DRDeviceFilterDelegate> delegate;
- (id)bestDeviceFromAvailableDevices:(id)arg1;
- (BOOL)deviceIsSuitable:(id)arg1;

@end
