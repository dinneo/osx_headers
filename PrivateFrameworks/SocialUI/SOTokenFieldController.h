//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SOChatViewController.h>

#import "CNAutocompleteFetchDelegate.h"
#import "IDSBatchIDQueryControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTokenFieldDelegate.h"
#import "SOTokenAttachmentCellDelegate.h"
#import "SOTokenFieldCellDragDelegate.h"

@class IDSBatchIDQueryController, NSDate, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSTimer, SOCompletionResult, SOHandleMenuController, SOTokenField;

@interface SOTokenFieldController : SOChatViewController <IDSBatchIDQueryControllerDelegate, NSTokenFieldDelegate, NSTableViewDataSource, NSTableViewDelegate, SOTokenAttachmentCellDelegate, SOTokenFieldCellDragDelegate, CNAutocompleteFetchDelegate>
{
    long long _selectedRow;
    NSString *_searchString;
    NSDate *_previousCompletionDisplayDate;
    unsigned long long _previousListCount;
    BOOL _wroteToPasteboard;
    BOOL _addTokensFromDrag;
    unsigned int _skipCompletionRebuilding:1;
    NSMutableArray *_autoCompleteResults;
    _Bool _canShowCompletionResults;
    NSTimer *_showCompletionResultsTimer;
    IDSBatchIDQueryController *_batchIDQueryController;
    NSMutableDictionary *_validatedIDQueryResults;
    NSMutableSet *_idsIDsToValidate;
    SOTokenField *_layoutTestTokenField;
    NSMutableDictionary *_cachedTokenFieldHeights;
    BOOL _isChangingFirstResponder;
    BOOL _suppressErrorDisplay;
    BOOL _isSearchingServer;
    BOOL _foundResults;
    NSMutableOrderedSet *_searchResults;
    SOHandleMenuController *_handleMenuController;
    long long _completionWindowLevel;
    id <CNCancelable> _currentSearchRequest;
}

+ (id)_stringForAutocompleteResultSourceType:(unsigned long long)arg1;
@property(retain, nonatomic) id <CNCancelable> currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property BOOL foundResults; // @synthesize foundResults=_foundResults;
@property BOOL isSearchingServer; // @synthesize isSearchingServer=_isSearchingServer;
@property long long completionWindowLevel; // @synthesize completionWindowLevel=_completionWindowLevel;
@property(retain) SOHandleMenuController *handleMenuController; // @synthesize handleMenuController=_handleMenuController;
@property BOOL suppressErrorDisplay; // @synthesize suppressErrorDisplay=_suppressErrorDisplay;
@property(nonatomic) BOOL isChangingFirstResponder; // @synthesize isChangingFirstResponder=_isChangingFirstResponder;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear;
- (void)awakeFromNib;
- (void)chatDisplayControllerDidChange;
- (void)chatDisplayControllerWillChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (void)showErrorMessageForHandle:(id)arg1;
- (void)showContactCard:(id)arg1;
- (BOOL)showContactCardForIMHandle:(id)arg1;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (id)_strippedPboardString:(id)arg1;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)tokenFieldCellDidEndDropOperation:(id)arg1;
- (void)tokenFieldCellDidBeginDropOperation:(id)arg1;
- (void)_invalidateShowCompletionResultsTimer;
- (BOOL)_searchStringMatchesWithHandleID:(id)arg1;
- (id)_searchStringMatchForAlternativeCombinationsOfFirstName:(id)arg1 lastName:(id)arg2;
- (void)_addSearchResult:(id)arg1;
- (void)_updateAutoCompleteUI;
- (id)_evaluateCompletionResultForName:(id)arg1 iMessageID:(id)arg2 personID:(id)arg3;
- (void)showCompletionsAndSelectCompletionResult:(id)arg1;
- (id)_sharedCompletionWindow;
- (id)_sharedCompletionTableView;
- (void)_traceCompletionSelection;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)_showCompletionResultsTimerFired:(id)arg1;
- (void)_startAutocompletionWithServer:(BOOL)arg1;
- (void)_tokenizeCompletionRangeInTextView:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tokenAttachmentCellHasErrorState:(id)arg1;
- (BOOL)tokenAttachmentCell:(id)arg1 doubleClickedInRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)tokenAttachmentCellShouldShowDedicingBackground:(id)arg1;
- (id)_imHandleFromCompletionResult:(id)arg1;
- (void)_postTokensDidChangeNotification;
- (unsigned long long)visibleTokenCountForLineCount:(unsigned long long)arg1 width:(double)arg2;
- (void)dismissCompletionUI;
- (void)appendIMHandles:(id)arg1;
- (void)setRecipientTokens:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
@property(readonly, nonatomic) SOTokenField *tokenField; // @dynamic tokenField;
- (void)_addressBookPreferencesDidChange:(id)arg1;
- (void)_updatePlaceholderAttributedString;
- (long long)_knownIMessageIDStatusForIDSID:(id)arg1;
- (void)_cleanupBatchIDQueryResults;
- (void)_queryIDSIMessageDestinations;
- (void)_addIMHandleIDToDanglingHandlesForHandleGUID:(id)arg1 typedString:(id)arg2;
- (id)_additionalSearchAccountsToHandleIDs;
- (void)_sortSearchResults;
- (void)_newChatDisplayControllerIDSValidationDidChange:(id)arg1;
- (void)_chatDisplayControllerRecipientsDidChange:(id)arg1;
- (void)_commonSOTokenFieldControllerInit;
@property(readonly) SOCompletionResult *selectedCompletionResult; // @dynamic selectedCompletionResult;
- (void)setSearchString:(id)arg1;
@property(readonly) NSMutableOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) double tokenFontSize; // @dynamic tokenFontSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

