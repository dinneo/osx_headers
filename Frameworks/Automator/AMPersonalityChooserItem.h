//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMWorkflowPersonality, NSImage, NSMutableArray, NSString;

@interface AMPersonalityChooserItem : NSObject
{
    NSString *_imageTitle;
    NSString *_templateDescription;
    NSMutableArray *_contentSources;
    NSMutableArray *_subTemplates;
    AMWorkflowPersonality *_workflowPersonality;
    double _imageDimension;
    struct CGSize _imageInset;
    NSImage *_image;
}

@property(retain) AMWorkflowPersonality *workflowPersonality; // @synthesize workflowPersonality=_workflowPersonality;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(readonly) BOOL isSelectable;
@property(readonly) NSString *imageTitle;
@property(readonly) struct CGSize imageInset;
@property(readonly) double imageDimension;
@property(readonly) NSString *templateDescription;
@property(readonly) NSImage *imageRepresentation;
- (id)description;
- (void)dealloc;

@end

