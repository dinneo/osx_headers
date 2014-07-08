//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPAssetKeyDelegate.h"
#import "NSCoding.h"
#import "OKDocumentDelegate.h"

@class MPDocument, NSArray, NSMutableDictionary, NSString, NSURL, OKDocument, OMSlideshowTheme;

@interface OMSlideshow : NSObject <MPAssetKeyDelegate, OKDocumentDelegate, NSCoding>
{
    MPDocument *_marimbaDocument;
    OKDocument *_opusDocument;
    NSMutableDictionary *_mediaItems;
    NSArray *_synopsis;
    NSArray *_itemMap;
    NSArray *_restoredOpusGuidelines;
    NSMutableDictionary *_mediaAttributes;
    struct {
        unsigned int isLoaded:1;
    } _flags;
    NSURL *_url;
    OMSlideshowTheme *_theme;
    id <OMSlideshowEditingDelegate> _editingDelegate;
}

+ (id)stringAttributesWithAttributedString:(id)arg1;
+ (id)attributedStringWithCTAttributesFromStringAttributes:(id)arg1;
+ (id)attributedStringWithNSAttributesFromStringAttributes:(id)arg1;
+ (id)createMediaItemMetadata;
+ (id)unarchiveSlideshowFromData:(id)arg1 withMediaURLs:(id)arg2 error:(id *)arg3;
+ (void)addMediaItemClass:(Class)arg1;
+ (void)initialize;
@property(readonly) OMSlideshowTheme *theme; // @synthesize theme=_theme;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (id)_mediaPropertiesForMediaURL:(id)arg1;
- (struct CGImage *)retainedCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2 orientation:(char *)arg3 thumbnailIfPossible:(BOOL)arg4 now:(BOOL)arg5;
- (struct CGImage *)retainedCGImageForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)detectRegionsOfInterestForAssetKey:(id)arg1;
- (id)attributesforAssetPath:(id)arg1;
- (id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3;
- (struct CGSize)resolutionForAssetKey:(id)arg1;
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;
- (id)absolutePathForAssetKey:(id)arg1;
- (id)mediaItemForAssetKey:(id)arg1;
- (id)mediaItemForMediaURL:(id)arg1;
- (id)__internalOpusDocument;
- (id)__internalMarimbaDocument;
- (unsigned long long)_opusExportMovieToURL:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)_marimbaExportMovieToURL:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)exportMovieToURL:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)_opusMoveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(BOOL)arg4;
- (id)_marimbaMoveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(BOOL)arg4;
- (id)moveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(BOOL)arg4;
- (BOOL)canMoveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(BOOL)arg4;
- (BOOL)canStartMovingItemsAtIndexPaths:(id)arg1;
- (void)moveCollectionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)canMoveCollectionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)canStartMovingCollectionsAtIndices:(id)arg1;
- (BOOL)hasCustomDurationForItemAtIndex:(long long)arg1;
- (id)durationsForItemsAtIndices:(id)arg1 hasCustomDuration:(char *)arg2;
- (void)setCustomDuration:(double)arg1 forItemsAtIndicies:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCenter:(struct CGPoint)arg1 scaleAtStart:(double)arg2 andCenter:(struct CGPoint)arg3 scaleAtEnd:(double)arg4 forMediaPath:(id)arg5;
- (void)setCenter:(struct CGPoint)arg1 scale:(double)arg2 forMediaPath:(id)arg3;
- (void)removeItemsAtIndices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canRemoveItemsAtIndices:(id)arg1;
- (void)insertMediaAssets:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canInsertMediaAssetsAtIndex:(unsigned long long)arg1;
- (void)insertText:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)insertText:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canInsertTextAtIndex:(unsigned long long)arg1;
- (void)moveItemsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)canMoveItemsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2;
- (BOOL)canStartMovingItemsAtIndices:(id)arg1 actuallyMovingItemIndices:(id *)arg2;
- (BOOL)canStartMovingItemsAtIndices:(id)arg1;
- (void)_removeMediaAssetsAtIndices:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_insertMediaAssets:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_moveMediaAssetsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_hasTitle;
- (id)_subtitleDictionaryForGuidelines;
- (id)_guidelinesForSubtitleDictionary:(id)arg1;
- (id)_scaleToFitGuidelineWithValue:(BOOL)arg1;
- (id)_subtitleGuidelineWithValue:(id)arg1 andMediaItem:(id)arg2;
- (id)_subtitleGuidelineWithString:(id)arg1 andMediaItem:(id)arg2;
- (id)_titleGuidelineWithString:(id)arg1 andAttributes:(id)arg2;
- (id)_transitionGuidelineFromSettings:(id)arg1;
- (id)_makeOpusGuidelinesFromAttributes:(id)arg1;
- (void)document:(id)arg1 needsAnimationPathsAppliedForSlide:(id)arg2 inEffect:(id)arg3;
- (BOOL)document:(id)arg1 shouldUseDefaultAnimatedPathsForSlide:(id)arg2 inEffect:(id)arg3;
- (void)authorMarimbaDocumentWithStyle:(id)arg1 mediaURLS:(id)arg2 attributes:(id)arg3;
- (unsigned long long)authorWithTheme:(id)arg1 mediaURLs:(id)arg2 attributes:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_closeOpusDocument;
- (struct CGImage *)posterImageWithSize:(struct CGSize)arg1;
- (void)_recomputeSynopsis;
- (void)recomputeSynopsis;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfItems;
- (id)synopsis;
@property(readonly) BOOL synopsisSupportsMultipleItemsPerGroup;
- (id)mediaDelegate;
- (void)setMediaDelegate:(id)arg1;
- (void)saveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property id <OMSlideshowEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(readonly) double maxDuration;
@property(readonly) double minDuration;
@property(readonly) double duration;
@property(readonly) BOOL isLoaded;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarimbaDocument:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
