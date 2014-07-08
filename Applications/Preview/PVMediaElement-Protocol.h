//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AKAnnotation, AKPageModelController, CALayer, NSArray, NSImage, NSView, PDFAnnotation, PVAnnotation, PVMediaContainerBase;

@protocol PVMediaElement
@property(retain, nonatomic) AKPageModelController *pageModelController;
- (void)discardLayer;
- (CALayer *)layerForView:(NSView *)arg1 scaleFactor:(double)arg2 zoomCenter:(struct CGPoint)arg3;
- (CALayer *)cachedLayer;
- (BOOL)canRenderToLayer;
- (PVAnnotation *)annotationWithPDFAnnotationIdenticalTo:(PDFAnnotation *)arg1;
- (PVAnnotation *)annotationWithAKAnnotationIdenticalTo:(AKAnnotation *)arg1;
- (void)removeAnnotationAtIndex:(unsigned long long)arg1;
- (void)insertAnnotation:(PVAnnotation *)arg1 atIndex:(unsigned long long)arg2;
- (NSArray *)annotations;
- (struct CGColorSpace *)outputColorSpace;
- (unsigned long long)EXIFOrientation;
- (void)rotateLeft;
- (void)rotateRight;
- (NSImage *)thumbnailImageOfSize:(struct CGSize)arg1;
- (void)setParentContainer:(PVMediaContainerBase *)arg1;
- (PVMediaContainerBase *)parentContainer;
- (BOOL)isQuickLookElement;
- (BOOL)isC3DElement;
- (BOOL)isImageElement;
- (BOOL)isPDFElement;
@end
