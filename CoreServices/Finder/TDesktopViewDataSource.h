//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TInfoExtractorDelegate.h"
#import "TNodeEngineProtocol.h"
#import "TReadWriteLockingProtocol.h"
#import "TThumbnailExtractorDelegate.h"
#import "TValidatorClientProtocol.h"

@class NSIndexSet, NSOrderedSet, NSString;

@interface TDesktopViewDataSource : NSObject <TInfoExtractorDelegate, TNodeEngineProtocol, TReadWriteLockingProtocol, TThumbnailExtractorDelegate, TValidatorClientProtocol>
{
    struct TReadWriteLock _lock;
    struct TNodeEngineCocoaBridge *_nodeEngine;
    unsigned long long _iconSize;
    struct TFENodeVector _selectedNodes;
    unordered_set_b5868ef5 _pendingSelectedNodes;
    struct TFENode _selectionAnchorNode;
    id <TDesktopViewDataSourceDelegateProtocol> _delegate;
    struct TDesktopThumbnailExtractorController *_thumbnailController;
    struct TRef<dispatch_queue_s *, TRetainReleasePolicy<dispatch_queue_t>> _thumbnailQueue;
    _Bool _fetchThumbnails;
    struct TInfoExtractorController *_infoController;
    _Bool _fetchItemInfo;
    unsigned int _sortProperty;
    struct TNSRef<NSMutableOrderedSet *> _sortedItems;
    struct TRef<dispatch_queue_s *, TRetainReleasePolicy<dispatch_queue_t>> _sortedItemsQueue;
    struct TRef<TDesktopNodesComparator *, TRetainReleasePolicy<TDesktopNodesComparator *>> _sortComparator;
    struct map<TString, TKVOPubKeyPathAndObservers, std::__1::less<TString>, std::__1::allocator<std::__1::pair<const TString, TKVOPubKeyPathAndObservers>>> _kvObservers;
    long long _validatorID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)infoTextMaxFrameForNode:(const struct TFENode *)arg1;
- (void)invalidateInfoTextForKeyNodes:(const struct TFENodeVector *)arg1;
- (void)fetchItemInfoForItems:(id)arg1;
@property _Bool fetchItemInfo; // @dynamic fetchItemInfo;
- (struct CGRect)thumbnailFrameForNode:(const struct TFENode *)arg1;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (void)asyncFetchIconsOrThumbnailsForItems:(id)arg1;
- (id)fetchIconsOrThumbnailsForItems:(id)arg1;
@property _Bool fetchThumbnails; // @dynamic fetchThumbnails;
- (void)nodesChanged:(const struct TFENodeUpdateList *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (void)spotlightAttrSyncComplete:(const struct TGroupedNodes *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)unlockForWrite;
- (void)lockForWrite;
- (void)unlockForRead;
- (void)lockForRead;
- (id)valueForUndefinedKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (_Bool)removeObserverCommon:(id)arg1 forKeyPath:(id *)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
@property id <TDesktopViewDataSourceDelegateProtocol> delegate; // @dynamic delegate;
@property struct TFENode selectionAnchorNode; // @dynamic selectionAnchorNode;
- (unsigned int)nodeObserverForDesktopContainer;
- (void)sortAsynchronouslyWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setSortProperty:(unsigned int)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property unsigned int sortProperty; // @dynamic sortProperty;
@property unsigned long long iconSize; // @dynamic iconSize;
@property(readonly, retain) NSOrderedSet *sortedItems; // @dynamic sortedItems;
- (void)deselectAll;
- (void)selectAll;
- (void)deselectNodes:(const struct TFENodeVector *)arg1;
- (void)deselectNodesNoKVO:(const struct TFENodeVector *)arg1;
- (void)setSelectedNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (_Bool)isSelectedNode:(const struct TFENode *)arg1;
@property(readonly, retain) NSIndexSet *selectedNodesIndexes; // @dynamic selectedNodesIndexes;
- (const struct TFENodeVector *)selectedNodes;
@property(readonly) unsigned long long selectedNodesCount; // @dynamic selectedNodesCount;
- (id)indexesOfNodes:(const struct TFENodeVector *)arg1;
- (unsigned long long)indexOfNode:(const struct TFENode *)arg1;
- (_Bool)containsNode:(const struct TFENode *)arg1;
- (void)getNodes:(struct TFENodeVector *)arg1 atIndexes:(id)arg2;
- (void)getNodes:(struct TFENodeVector *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (void)showAllExtensionsPrefChanged:(id)arg1;
- (id)itemForKeyNode:(const struct TFENode *)arg1;
- (id)itemForNode:(const struct TFENode *)arg1;
- (unsigned long long)indexOfItemForInsertion:(id)arg1;
- (struct TDesktopNodesComparator *)createComparator;
- (void)_clearWithNoKVO;
- (void)clear;
- (unsigned long long)count;
- (void)flushNodeEvents;
- (struct TFENode)target;
- (long long)validatorID;
- (void)aboutToTearDown;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
