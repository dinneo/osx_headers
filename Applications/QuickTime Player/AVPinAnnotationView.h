//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString;

@interface AVPinAnnotationView : NSObject <MKAnnotation>
{
    CDStruct_2c43369c coordinate;
}

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)coord;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *subtitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
