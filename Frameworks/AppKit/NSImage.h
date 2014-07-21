//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"
#import "NSSecureCoding.h"

@class NSArray, NSColor, NSData, NSString, _NSImageAuxiliary;

@interface NSImage : NSObject <NSCopying, NSCoding, NSSecureCoding, NSPasteboardReading, NSPasteboardWriting>
{
    NSString *_name;
    struct CGSize _size;
    struct __imageFlags {
        unsigned int scalable:1;
        unsigned int dataRetained:1;
        unsigned int uniqueWindow:1;
        unsigned int sizeWasExplicitlySet:1;
        unsigned int builtIn:1;
        unsigned int needsToExpand:1;
        unsigned int useEPSOnResolutionMismatch:1;
        unsigned int matchesOnlyOnBestFittingAxis:1;
        unsigned int colorMatchPreferred:1;
        unsigned int multipleResolutionMatching:1;
        unsigned int focusedWhilePrinting:1;
        unsigned int archiveByName:1;
        unsigned int unboundedCacheDepth:1;
        unsigned int flipped:1;
        unsigned int aliased:1;
        unsigned int dirtied:1;
        unsigned int cacheMode:2;
        unsigned int sampleMode:3;
        unsigned int resMatchPreferred:1;
        unsigned int isTemplate:1;
        unsigned int failedToExpand:1;
        unsigned int reserved1:8;
    } _flags;
    id _reps;
    _NSImageAuxiliary *_imageAuxiliary;
}

+ (id)imageUnfilteredPasteboardTypes;
+ (id)imageUnfilteredFileTypes;
+ (id)imagePasteboardTypes;
+ (id)imageFileTypes;
+ (id)imageUnfilteredTypes;
+ (id)imageTypes;
+ (void)_invalidateImageTypeCaches;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (BOOL)_requireDefaultEndianPremultipliedLastForTIFFDataFromSnapshotReps;
+ (id)imageWithSize:(struct CGSize)arg1 drawHandler:(CDUnknownBlockType)arg2;
+ (id)imageWithSize:(struct CGSize)arg1 drawingIsFlipped:(BOOL)arg2 drawHandler:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 flipped:(BOOL)arg2 drawingHandler:(CDUnknownBlockType)arg3;
+ (id)_catalogImageWithName:(id)arg1 bundle:(id)arg2;
+ (id)_searchForSystemImageNamed:(id)arg1;
+ (id)_searchForImageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)_coreUIImageWithName:(id)arg1;
+ (id)_findSystemImageNamed:(id)arg1;
+ (id)_allNames;
+ (id)_imageNamed:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)canInitWithPasteboard:(id)arg1;
+ (BOOL)_canInitWithPasteboard:(id)arg1 allowMultipleFiles:(BOOL)arg2;
+ (id)imageWithImageRep:(id)arg1;
+ (void)initialize;
+ (id)_templateImageWithImage:(id)arg1;
+ (id)_emblemForCount:(long long)arg1;
@property(retain, setter=_setReps:) id _reps; // @synthesize _reps;
- (id)layerContentsForContentsScale:(double)arg1;
- (double)recommendedLayerContentsScale:(double)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2;
@property(readonly) NSData *TIFFRepresentation;
- (id)_imageByBadgingWithImage:(id)arg1 rect:(struct CGRect)arg2;
- (BOOL)hitTestPoint:(struct CGPoint)arg1 withImageDestinationRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4;
- (BOOL)hitTestRect:(struct CGRect)arg1 withImageDestinationRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4;
- (BOOL)hitTestRect:(struct CGRect)arg1 withImageDestinationRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(BOOL)arg5;
- (void)lockFocus;
- (void)lockFocusFlipped:(BOOL)arg1;
- (void)lockFocusWithRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(BOOL)arg4;
- (void)unlockFocus;
- (void)_lockFocusOnRepresentation:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(BOOL)arg5;
- (BOOL)drawRepresentation:(id)arg1 inRect:(struct CGRect)arg2;
- (BOOL)_drawRepresentation:(id)arg1 inRect:(struct CGRect)arg2 withScaling:(BOOL)arg3;
- (BOOL)_whenDrawn:(id)arg1 fills:(const struct CGRect *)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 hints:(id)arg5;
- (void *)_createPatternForContext:(id)arg1;
@property(readonly, getter=isValid) BOOL valid;
- (void)_dispatchImageDidNotDraw:(id)arg1;
- (id)_imageDidNotDrawHandlerRep;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (void)_drawMappingAlignmentRectToRect:(struct CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 flip:(BOOL)arg6 hints:(id)arg7;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (void)_dumpFullImageInfo;
@property(readonly, copy) NSString *description;
@property(copy) NSString *accessibilityDescription;
- (id)_accessibilityDescriptionBackingForArchiving;
- (id)_accessibilityDescriptionBackingForCopying;
- (void)_setAccessibilityDescriptionBacking:(id)arg1;
- (id)_accessibilityDescriptionBacking;
- (void)setImageInterpolation:(unsigned long long)arg1;
- (unsigned long long)imageInterpolation;
- (void)_setImageInterpolation:(unsigned long long)arg1;
- (unsigned long long)_imageInterpolation;
@property long long resizingMode;
@property CDStruct_3c058996 capInsets;
@property struct CGRect alignmentRect;
- (void)_setAlignmentRectInNormalizedCoordinates:(struct CGRect)arg1;
- (struct CGRect)_alignmentRectInNormalizedCoordinates;
- (BOOL)_hasMultipleStates;
- (void)setTemplate:(BOOL)arg1;
- (BOOL)isTemplate;
- (BOOL)hasAlpha;
- (BOOL)_antialiased;
- (void)_setAntialiased:(BOOL)arg1;
@property BOOL matchesOnlyOnBestFittingAxis;
@property BOOL matchesOnMultipleResolution;
- (void)_setPrefersResolutionMatch:(BOOL)arg1;
- (BOOL)_prefersResolutionMatch;
@property BOOL prefersColorMatch;
@property BOOL usesEPSOnResolutionMismatch;
@property unsigned long long cacheMode;
@property struct CGSize size;
@property id <NSImageDelegate> delegate;
@property(copy) NSColor *backgroundColor;
- (void)_imageLevel_setBackgroundColor:(id)arg1;
- (id)_imageLevel_backgroundColor;
- (id)name;
- (BOOL)setName:(id)arg1;
- (void)cancelIncrementalLoad;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_deallocAuxiliaryStorage;
- (void)_allocAuxiliaryStorage;
- (void)_failsafeAllocAuxiliaryStorage;
- (id)initWithIconRef:(struct OpaqueIconRef *)arg1;
- (id)_initWithIconRef:(void *)arg1 includeThumbnail:(BOOL)arg2;
- (id)_initWithData:(id)arg1 fileType:(id)arg2 hfsType:(id)arg3;
- (id)initWithPasteboard:(id)arg1;
- (id)initFromImage:(id)arg1 rect:(struct CGRect)arg2;
- (id)initWithImageRep:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithDataIgnoringOrientation:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initByReferencingURLs:(id)arg1;
- (id)initByReferencingURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initByReferencingFile:(id)arg1;
- (id)bestRepresentationForDevice:(id)arg1;
- (void)_usingBestRepresentationForRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3 body:(CDUnknownBlockType)arg4;
- (void)_usingBestRepresentationAmongRepresentations:(id)arg1 forRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4 body:(CDUnknownBlockType)arg5;
- (id)bestRepresentationForRect:(struct CGRect)arg1 context:(id)arg2 hints:(id)arg3;
- (id)bestRepresentationAmongRepresentations:(id)arg1 forRect:(struct CGRect)arg2 context:(id)arg3 hints:(id)arg4;
- (id)_addRepresentationWithSharedKitWindow:(long long)arg1 rect:(const struct CGRect *)arg2;
- (BOOL)_legacyAddRepresentationsForIconNamed:(id)arg1 fromIconSectionInAppBinary:(id)arg2;
- (void)_replaceRepsWithRep:(id)arg1;
- (void)addRepresentation:(id)arg1;
- (void)removeRepresentation:(id)arg1;
- (void)addRepresentations:(id)arg1;
- (void)_addRepresentations:(id)arg1;
@property(readonly, copy) NSArray *representations;
- (void)_setRepProviderWithRepresentationsArray:(id)arg1;
- (void)_setRepProviderWithIconRef:(struct OpaqueIconRef *)arg1 includeThumbnail:(BOOL)arg2;
- (void)_setRepProviderWithReferencingURLs:(id)arg1;
- (void)_setRepProviderWithReferencingURL:(id)arg1;
- (void)_usingRepresentationsPerformBlock:(CDUnknownBlockType)arg1;
- (void)_usingRepProviderPerformBlock:(CDUnknownBlockType)arg1;
- (void)_setRepProvider:(id)arg1;
- (id)_processedHintsForHints:(id)arg1 includeOnlyIfAvailable:(BOOL)arg2;
- (id)_defaultImageHintsAndOnlyIfAvailable:(BOOL)arg1;
- (id)_snapshotRepForRep:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 processedHints:(id)arg4;
- (id)_newSnapshotRepForRep:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 processedHints:(id)arg4;
- (id)_newSnapshotRepForCGImage:(struct CGImage *)arg1 drawingRect:(struct CGRect)arg2 applicableForRect:(struct CGRect)arg3 context:(id)arg4 processedHints:(id)arg5;
- (void)_cacheSnapshotRep:(id)arg1;
- (BOOL)_shouldCacheWhenDrawingRep:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 processedHints:(id)arg4;
- (void)recache;
- (BOOL)_hasCacheRep;
- (BOOL)_isCachedToRep:(id)arg1;
- (void)_usingCacheRepPerformBlock:(CDUnknownBlockType)arg1;
- (void)_setCacheRep:(id)arg1;
- (void)lockFocusOnRepresentation:(id)arg1;
- (BOOL)_composite:(long long)arg1 delta:(double)arg2 fromRect:(struct CGRect)arg3 toPoint:(struct CGPoint)arg4;
- (void)_compositeFlipped:(BOOL)arg1 atPoint:(struct CGPoint)arg2 fromRect:(struct CGRect)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5;
- (void)_compositeFlipped:(BOOL)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5;
- (void)_compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)_compositeToPoint:(struct CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3;
- (void)dissolveToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 fraction:(double)arg3;
- (void)compositeToPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3;
- (void)dissolveToPoint:(struct CGPoint)arg1 fraction:(double)arg2;
- (void)compositeToPoint:(struct CGPoint)arg1 operation:(unsigned long long)arg2;
- (BOOL)cacheDepthMatchesImageDepth;
- (void)setCacheDepthMatchesImageDepth:(BOOL)arg1;
- (BOOL)isCachedSeparately;
- (void)setCachedSeparately:(BOOL)arg1;
- (BOOL)isDataRetained;
- (void)setDataRetained:(BOOL)arg1;
- (BOOL)scalesWhenResized;
- (void)setScalesWhenResized:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)NS_needsRecommitOnDefaultContentsScaleChange;
- (void *)CA_copyRenderValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

