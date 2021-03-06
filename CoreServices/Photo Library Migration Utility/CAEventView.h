//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAGridView.h"

@class IPEventInfo, IPFirstTimeHelpLayer, IPThumbFactoryEvent, NSString;

@interface CAEventView : CAGridView
{
    IPThumbFactoryEvent *_imageFactory;
    BOOL _returnEmptySelection;
    BOOL _showReflections;
    BOOL _showScrollOverlay;
    BOOL _hiddenVisible;
    IPFirstTimeHelpLayer *_firstTimeLayer;
    NSString *_firstTimeLayerType;
    IPEventInfo *_eventFlip;
}

@property NSString *firstTimeLayerType; // @synthesize firstTimeLayerType=_firstTimeLayerType;
@property BOOL hiddenVisible; // @synthesize hiddenVisible=_hiddenVisible;
@property(readonly) BOOL showScrollOverlay; // @synthesize showScrollOverlay=_showScrollOverlay;
@property(readonly) BOOL showReflections; // @synthesize showReflections=_showReflections;
@property BOOL returnEmptySelection; // @synthesize returnEmptySelection=_returnEmptySelection;
@property(retain) IPThumbFactoryEvent *imageFactory; // @synthesize imageFactory=_imageFactory;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (BOOL)prefetchUsingThumbnailManager;
- (void)setShowHiddenPhotos:(BOOL)arg1;
- (BOOL)showHiddenPhotos;
- (void)toggleShowHiddenPhotos:(id)arg1;
- (void)refreshViewFlags;
- (void)sortDirectionAction:(id)arg1;
- (void)sortBy:(id)arg1;
- (void)sortEvents:(id)arg1;
- (BOOL)pasteFromPasteboard:(id)arg1 fromSource:(id)arg2;
- (void)_dragMergeConfirmSheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)_dragMergeWithContext:(id)arg1;
- (void)mergeEvents:(id)arg1 intoEvent:(unsigned long long)arg2;
- (void)undoRedoSplitMergePhotos:(id)arg1 beginState:(id)arg2 endState:(id)arg3 beginSelection:(id)arg4 endSelection:(id)arg5 baseFilterKeys:(id)arg6 addedFilterKeys:(id)arg7 removedFilterKeys:(id)arg8 undoManager:(id)arg9;
- (BOOL)allowMoveToCellIndex:(long long)arg1 afterPreviousCell:(BOOL)arg2 dragInfo:(id)arg3 newDragDropTargetIndex:(long long *)arg4 newDragMoveTargetIndex:(long long *)arg5;
- (BOOL)allowDropOnCellIndex:(long long *)arg1 dragInfo:(id)arg2 newDragDropTargetIndex:(long long *)arg3 newDragMoveTargetIndex:(long long *)arg4;
- (BOOL)wantsDropOrMoveTrackingForAvailableTypes:(id)arg1;
- (id)createDragImageForCellIndex:(long long)arg1;
- (BOOL)allowDragOfSelection;
- (void)registerAcceptedDragTypes;
- (void)populatePasteboard:(id)arg1 clearContents:(BOOL)arg2;
- (void)moveEventsWithKeys:(id)arg1 toIndex:(long long)arg2;
- (id)overlayTextForCurrentScroll:(id *)arg1;
- (void)configureOverlay;
- (BOOL)wantsScrollOverlay;
- (id)toolTipStringForCellAtIndex:(long long)arg1 toolTipIndex:(long long)arg2;
- (struct CGRect)toolTipRectForCellAtIndex:(long long)arg1 toolTipIndex:(long long)arg2;
- (long long)toolTipsPerCell;
- (BOOL)wantsToolTips;
- (BOOL)setFieldValue:(id)arg1 forInlineEdit:(id)arg2 cellKey:(long long)arg3 fieldIndex:(long long)arg4;
- (id)fieldValueForInlineEdit:(id)arg1 cellKey:(long long)arg2 fieldIndex:(long long)arg3;
- (long long)fieldCountForInlineEdit:(id)arg1;
- (void)setEventTitle:(id)arg1 oldTitle:(id)arg2 database:(id)arg3 eventKey:(unsigned long long)arg4 state:(id)arg5 undoManager:(id)arg6;
- (void)inlineEditCell:(long long)arg1 hitIndex:(long long)arg2 event:(id)arg3;
- (void)preferencesChanged:(id)arg1;
- (void)handleDbMessage:(unsigned int)arg1 data1:(void *)arg2 data2:(void *)arg3 data3:(void *)arg4;
- (struct IPPhotoList *)selectedPhotos;
- (id)selectedEventKeys:(unsigned long long *)arg1;
- (unsigned long long)selectedEmptyEventKeyCount;
- (id)selectedEmptyEventKeys;
- (BOOL)validateMenuItem:(id)arg1;
- (void)autoSplitSelectedEvents:(id)arg1;
- (void)addFlaggedPhotosToSelectedEvent:(id)arg1;
- (void)undoRedoAddFlaggedPhotosToSelectedEvent:(id)arg1 beginState:(id)arg2 endState:(id)arg3 undoManager:(id)arg4;
- (void)mergeBasedOnSelectionAction:(id)arg1;
- (void)splitBasedOnSelectionAction:(id)arg1;
- (void)mergeEventsAction:(id)arg1;
- (void)_mergeSelectedConfirmSheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)_doMergeEventsAction:(id)arg1;
- (BOOL)_canPaste;
- (BOOL)_canHideUserHiddenPhotos;
- (BOOL)_canShowUserHiddenPhotos;
- (void)showUserHiddenPhotos:(id)arg1;
- (void)hideUserHiddenPhotos:(id)arg1;
- (BOOL)_canHideUserHiddenPhoto;
- (BOOL)_canShowUserHiddenPhoto;
- (void)showUserHiddenPhoto:(id)arg1;
- (void)hideUserHiddenPhoto:(id)arg1;
- (void)_undoRedoShowUserHiddenPhotos:(id)arg1 originalHidden:(id)arg2 undoManager:(id)arg3;
- (void)_undoRedoHideUserHiddenPhotos:(id)arg1 originalHidden:(id)arg2 undoManager:(id)arg3;
- (void)copyEventOrderToManual;
- (void)makePhotoEventKey:(id)arg1;
- (void)_undoRedoMakeKeyPhotoDb:(id)arg1 rollKey:(unsigned long long)arg2 oldPhotoUuid:(id)arg3 newPhotoUuid:(id)arg4 undoManager:(id)arg5;
- (void)toggleFlaggedForPhoto:(id)arg1;
- (void)_undoRedoShelfPhotos:(id)arg1 add:(BOOL)arg2 undoManager:(id)arg3;
- (void)deltaHoverPhoto:(long long)arg1;
- (void)_persistCurrentPhoto:(id)arg1;
- (void)_setCurrentPhoto:(struct IPPhotoInfo *)arg1 forRoll:(struct IPRoll *)arg2;
- (void)splitEventAction:(id)arg1;
- (void)undoRedoScrubSplit:(id)arg1 beginState:(id)arg2 endState:(id)arg3 undoManager:(id)arg4;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;
- (void)paste:(id)arg1;
- (void)undoRedoPasteCutPhotos:(id)arg1 beginState:(id)arg2 endState:(id)arg3 undoManager:(id)arg4;
- (id)albumForSelection;
- (id)makeFilterAlbumForSelectedRolls;
- (void)cellDoubleClicked:(long long)arg1 eventModifiers:(unsigned long long)arg2;
- (void)showMagnifierForCellAtIndex:(long long)arg1;
- (void)showMagnifierForPhoto:(struct IPPhotoInfo *)arg1;
- (void)switchToDetailWithEvents:(id)arg1 selectingPhoto:(struct IPPhotoInfo *)arg2;
- (id)updateDetailFilterAlbum:(id)arg1 plural:(char *)arg2 currentAlbum:(id *)arg3;
- (void)switchToDetailForSelectedEvents:(BOOL)arg1;
- (void)updateLatestEvent:(unsigned long long)arg1;
- (void)showDetailForNeighbor:(int)arg1 ofEventWithKey:(unsigned long long)arg2;
- (unsigned long long)lastEventKey;
- (unsigned long long)firstEventKey;
- (void)_deleteSelectedItemsSheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)deleteSelectedItems:(id)arg1 forceMoveToTrash:(BOOL)arg2;
- (void)_deleteSelectedItems:(BOOL)arg1;
- (BOOL)handleKeyDown:(id)arg1 key:(unsigned short)arg2 modifiers:(unsigned long long)arg3;
- (void)updateFlagsOnLayer:(id)arg1;
- (void)populateCellVector;
- (void)updateCellExtrasWithDuration:(double)arg1;
- (id)gridCellAvailablePoolForLayer:(id)arg1;
- (Class)gridCellLayerClassForIndex:(long long)arg1 availablePool:(id *)arg2;
- (struct CGRect)cellMetaRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellImageRectForCellAtIndex:(long long)arg1;
- (struct CGSize)imageSizeForCurrentCellSize;
- (struct CGSize)maxCellSize;
- (struct CGSize)minCellSize;
- (void)generateThumbsForCellSize:(struct CGSize)arg1;
- (void)setCellSize:(struct CGSize)arg1;
- (void)setCurrentDB:(id)arg1;
- (void)awakeFromNib;
- (void)updateObstruficatedCSFromNotification:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

