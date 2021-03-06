//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObjectSnapshotter.h>

@class EKEvent, NSDate, NSSet;

@interface EKEventSliceSnapshotter : EKObjectSnapshotter
{
    NSDate *_sliceDate;
    EKEvent *_originalMaster;
    NSSet *_originalDetachments;
    NSSet *_originalExceptions;
}

@property(retain) NSSet *originalExceptions; // @synthesize originalExceptions=_originalExceptions;
@property(retain) NSSet *originalDetachments; // @synthesize originalDetachments=_originalDetachments;
@property(retain) EKEvent *originalMaster; // @synthesize originalMaster=_originalMaster;
@property(retain) NSDate *sliceDate; // @synthesize sliceDate=_sliceDate;
- (void).cxx_destruct;
- (id)_affectedObjects;
@property(readonly) EKEvent *slicedEvent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlicedEvent:(id)arg1 sliceDate:(id)arg2 originalMaster:(id)arg3 originalDetachments:(id)arg4 originalExceptions:(id)arg5;

@end

