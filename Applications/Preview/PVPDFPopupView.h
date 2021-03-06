//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTrackingArea, PDFAnnotationPopup, PVPDFPopupManager, PVPDFPopupTextView, PVPDFView;

@interface PVPDFPopupView : NSView
{
    PDFAnnotationPopup *_annotation;
    NSTrackingArea *_trackingArea;
    long long _tooltipTag;
    id _delegate;
    BOOL _editing;
    PVPDFPopupTextView *_textview;
    PVPDFPopupManager *_manager;
    PVPDFView *_pdfView;
    struct CGPoint bendPoint;
}

@property struct CGPoint bendPoint; // @synthesize bendPoint;
@property PVPDFPopupManager *manager; // @synthesize manager=_manager;
@property(readonly) PVPDFPopupTextView *textview; // @synthesize textview=_textview;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)trackCloseHit;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (long long)compareFrameCenters:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)removeTooltip;
- (void)addTooltip;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (BOOL)editing;
- (id)annotation;
- (void)selfDidResize:(id)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (id)initWithAnnotation:(id)arg1 inView:(id)arg2;

@end

