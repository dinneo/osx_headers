//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageSortContext.h"
#import "MFMessageSortingValueDelegate.h"

@class MCInvocationQueue, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSNumber, NSString;

@interface MessageFilter : NSObject <MFMessageSortContext, MFMessageSortingValueDelegate>
{
    int _taskCounter;
    NSMutableArray *_filteredMessages;
    NSMutableArray *_allStores;
    NSMutableSet *_storesWaitingToLoad;
    NSMutableDictionary *_allMessagesByStore;
    NSMutableDictionary *_nonDeletedMessagesByStore;
    NSMutableSet *_hiddenMessages;
    NSMutableSet *_undeletedMessages;
    NSMutableSet *_storesBeingOpened;
    NSString *_primarySortOrder;
    NSString *_secondarySortOrder;
    NSMutableDictionary *_messageSortValues;
    NSMutableDictionary *_conversationIDByMessage;
    NSMutableDictionary *_threadsByConversationID;
    NSMutableIndexSet *_openThreadIndexes;
    NSMutableDictionary *_originalMessageByMessageID;
    NSMutableDictionary *_messageCopiesByMessageID;
    NSMutableSet *_pendingSelectedMessageIdentifiers;
    NSMutableSet *_pendingSelectedThreadIdentifiers;
    NSMutableSet *_pendingOpenThreadIdentifiers;
    BOOL _isSortedAscending;
    BOOL _includeDeleted;
    BOOL _isInThreadedMode;
    BOOL _awaitingInitialMessages;
    id <MessageFilterDelegate> _delegate;
    MCInvocationQueue *_filterTasks;
    unsigned long long _totalMessageCount;
    NSNumber *_pendingScrollStyle;
    id _pendingPinnedMessageIdentifier;
    NSNumber *_pendingPinnedThreadIdentifier;
    double _pendingPinningOffset;
}

+ (CDUnknownBlockType)sortComparatorForThreads;
+ (CDUnknownBlockType)sortComparatorForThreadsWithSortOrderAscending:(BOOL)arg1;
+ (void)initialize;
@property(nonatomic) double pendingPinningOffset; // @synthesize pendingPinningOffset=_pendingPinningOffset;
@property(retain, nonatomic) NSNumber *pendingPinnedThreadIdentifier; // @synthesize pendingPinnedThreadIdentifier=_pendingPinnedThreadIdentifier;
@property(copy, nonatomic) id pendingPinnedMessageIdentifier; // @synthesize pendingPinnedMessageIdentifier=_pendingPinnedMessageIdentifier;
@property(retain, nonatomic) NSNumber *pendingScrollStyle; // @synthesize pendingScrollStyle=_pendingScrollStyle;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) BOOL awaitingInitialMessages; // @synthesize awaitingInitialMessages=_awaitingInitialMessages;
@property(nonatomic) BOOL isInThreadedMode; // @synthesize isInThreadedMode=_isInThreadedMode;
@property(readonly, nonatomic) MCInvocationQueue *filterTasks; // @synthesize filterTasks=_filterTasks;
@property __weak id <MessageFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_indexesAdjustedByOpenThreads:(id)arg1;
- (unsigned long long)_indexAdjustedByOpenThreads:(unsigned long long)arg1;
- (unsigned long long)_removeObjectIfPresent:(id)arg1 fromArray:(id)arg2 inSortedRange:(struct _NSRange)arg3 usingComparator:(CDUnknownBlockType)arg4 didRemove:(char *)arg5;
- (unsigned long long)_insertObjectIfAbsent:(id)arg1 intoArray:(id)arg2 inSortedRange:(struct _NSRange)arg3 usingComparator:(CDUnknownBlockType)arg4 didInsert:(char *)arg5;
- (BOOL)_removeMessage:(id)arg1 fromMallArray:(id)arg2 sortValues:(id)arg3 atIndex:(unsigned long long)arg4;
- (unsigned long long)_removeMessage:(id)arg1 fromMallArray:(id)arg2 sortValues:(id)arg3 inSortedRange:(struct _NSRange)arg4 usingComparator:(CDUnknownBlockType)arg5 didRemove:(char *)arg6;
- (id)_removeSortedMessages:(id)arg1 fromArray:(id)arg2 sortValues:(id)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)_insertMessageIfAbsent:(id)arg1 intoMallArray:(id)arg2 sortValues:(id)arg3 inSortedRange:(struct _NSRange)arg4 usingComparator:(CDUnknownBlockType)arg5 didInsert:(char *)arg6;
- (id)_mergeMessages:(id)arg1 intoArray:(id)arg2 sortValues:(id)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (id)_messagesIncludingHiddenCopies:(id)arg1;
- (unsigned int)sortingMessageFlagsForMessage:(id)arg1;
- (unsigned int)messageFlagsForMessage:(id)arg1 size:(unsigned long long *)arg2 appliedFlagColors:(id *)arg3;
- (unsigned long long)sortingSizeForMessage:(id)arg1;
- (unsigned long long)sizeForMessage:(id)arg1;
- (id)arrayWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2;
- (id)arrayOfSortOrders;
- (id)_storeForMailbox:(id)arg1 cache:(id)arg2;
- (unsigned int)_loadOptions;
- (id)_updateCopiesInfoForMessages:(id)arg1;
- (id)_structureChangesByAdjustingThreads:(id)arg1 messageRemovals:(id)arg2 messageMoves:(id)arg3 deletedThreads:(id *)arg4;
- (id)_filterOutMessages:(id)arg1;
- (id)_filterInMessages:(id)arg1;
- (id)_updateFilteredListByAddingMessages:(id)arg1 removingMessages:(id)arg2;
- (void)_filterTaskCompleted:(id)arg1 taskID:(int)arg2;
- (void)_addTaskToFilterQueue:(id)arg1;
- (id)_filterTaskInfoByMergingTaskInfos:(id)arg1;
- (id)_fullTaskInfoFromChangeDictionary:(id)arg1;
- (void)_performFilterTask:(id)arg1 taskID:(int)arg2;
- (id)_originalForMessage:(id)arg1;
- (BOOL)_shouldAlwaysShowDuplicates;
- (BOOL)_shouldShowCopy:(id)arg1;
- (BOOL)_shouldDisplayMessage:(id)arg1;
- (long long)compareByNumberMessage:(id)arg1 andMessage:(id)arg2 sortedAscending:(BOOL)arg3;
- (void)_removeMessagesFromByStoreTables:(id)arg1;
- (void)_addMessages:(id)arg1 toTablesForStore:(id)arg2;
- (void)_removeMessagesInStores:(id)arg1 fromCopiesInfoWithStoreCache:(id)arg2;
- (void)_removeMessagesInStores:(id)arg1 fromMessages:(id)arg2 storeCache:(id)arg3;
- (id)_handleComponentStoreStructureChanged:(id)arg1;
- (void)_componentStoreStructureChanged:(id)arg1;
- (id)_handleMessagesAdded:(id)arg1;
- (void)_componentStoreMessagesWereAdded:(id)arg1;
- (id)_storeFinishedLoading:(id)arg1;
- (void)_componentStoreFinishedLoading:(id)arg1;
- (id)_addMessages:(id)arg1 toStore:(id)arg2;
- (id)_removeMessages:(id)arg1 reason:(id)arg2;
- (id)_addStore:(id)arg1;
- (void)_addMessagesToByStoreTables:(id)arg1;
- (id)_threadForMessage:(id)arg1;
- (CDUnknownFunctionPointerType)_secondarySortFunction;
- (CDUnknownFunctionPointerType)_primarySortFunction;
- (CDUnknownFunctionPointerType)_sortFunctionForSortOrder:(id)arg1;
- (CDUnknownBlockType)_sortComparatorWithContext:(id)arg1 sortValues:(id)arg2;
- (id)_handleComponentStoreDidOpen:(id)arg1;
- (void)_componentStoreDidOpen:(id)arg1;
- (id)_handleLibraryConversationsWereChanged:(id)arg1;
- (void)_libraryConversationsWereChanged:(id)arg1;
- (id)_handleLibraryMessagesGmailLabelsChanged:(id)arg1;
- (void)_libraryMessagesGmailLabelsChanged:(id)arg1;
- (void)_libraryMessagesCompacted:(id)arg1;
- (id)_handleLibraryMessagesUpdated:(id)arg1;
- (void)_libraryMessagesUpdated:(id)arg1;
- (BOOL)_isKnownMessage:(id)arg1;
- (id)_knownAndUnknownMessages:(id)arg1 fromMessages:(id)arg2;
- (id)_handleLibraryMessagesFlagsChanged:(id)arg1;
- (void)_libraryMessagesFlagsChanged:(id)arg1;
- (void)_prepareToDisplayThread:(id)arg1;
- (unsigned long long)_indexOfChildMessage:(id)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)_getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getIndexesOfMessages:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_closeAllThreads;
- (void)closeAllThreads;
- (struct _NSRange)_closeThread:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_closeThreads:(id)arg1 selectingThread:(id)arg2;
- (void)closeThreads:(id)arg1 selectingThread:(id)arg2;
- (id)_openAllThreads;
- (void)openAllThreads;
- (struct _NSRange)_openThread:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_openThreads:(id)arg1;
- (void)openThreads:(id)arg1;
- (id)_unhideMessages:(id)arg1;
- (void)unhideMessages:(id)arg1;
- (id)_hideMessages:(id)arg1 selectingNextMessage:(id)arg2;
- (void)hideMessages:(id)arg1 selectingNextMessage:(id)arg2;
- (id)_refilter;
- (id)_hideDeletedMessages;
- (void)hideDeletedMessages;
- (id)_showDeletedMessages;
- (void)showDeletedMessages;
- (id)_ungroupMessages;
- (void)ungroupMessages;
- (id)_groupMessages;
- (void)groupMessages;
- (id)_findPendingObjectsInList;
- (id)_invertFilteredListWithViewingState:(id)arg1;
- (void)invertFilteredListWithViewingState:(id)arg1;
- (id)_resortWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2 viewingState:(id)arg3;
- (void)resortWithPrimarySortOrder:(id)arg1 secondarySortOrder:(id)arg2 viewingState:(id)arg3;
- (void)_clearAllMessageInfo;
- (void)_unrollViewingState:(id)arg1;
- (id)_setStores:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 viewingState:(id)arg6;
- (void)setStores:(id)arg1 sortOrder:(id)arg2 isSortedAscending:(BOOL)arg3 isInThreadedMode:(BOOL)arg4 includeDeleted:(BOOL)arg5 viewingState:(id)arg6;
- (void)unregisterForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

