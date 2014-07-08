//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPDQueryDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class HVHelpViewController, HVSearchField, HelpViewToolbarController, NSMutableArray, NSScrollView, NSString, NSTableView, NSTextField, NSWindow;

@interface HelpSearchController : NSObject <NSTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource, HPDQueryDelegate>
{
    NSScrollView *mSuggestionsScrollView;
    NSTableView *mSuggestionsTable;
    NSWindow *mSuggestionsWindow;
    NSMutableArray *mSuggestionsArray;
    NSTextField *mOfflineTextField;
    HVSearchField *mSearchField;
    HVHelpViewController *mHelpViewController;
    HelpViewToolbarController *mToolbarController;
}

+ (id)helpSearchController;
@property(retain) HelpViewToolbarController *toolbarController; // @synthesize toolbarController=mToolbarController;
@property(retain) HVHelpViewController *helpViewController; // @synthesize helpViewController=mHelpViewController;
- (id)_offlineTextField;
- (void)_hideSearchForNotification:(id)arg1;
- (void)helpQuery:(id)arg1 didEncounterError:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnResults:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnSuggestions:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)performQueryOnMainThread:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)showSuggestionsWindow;
- (void)hideSuggestionsWindow;
- (void)clearSuggestions;
- (void)selectSuggestion:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
