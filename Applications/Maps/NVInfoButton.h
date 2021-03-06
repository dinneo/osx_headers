//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class MKAnnotationView, MKLabelMarker, NVPlace;

__attribute__((visibility("hidden")))
@interface NVInfoButton : NSButton
{
    NVPlace *_place;
    MKAnnotationView *_annotationView;
    MKLabelMarker *_labelMarker;
}

@property(retain) MKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(retain) NVPlace *place; // @synthesize place=_place;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

