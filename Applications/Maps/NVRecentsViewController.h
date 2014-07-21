//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CNContactPickerViewControllerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class CNContactPickerViewController, NSSearchField, NSString, NSTableView, NSView, NVRecentsWindow;

__attribute__((visibility("hidden")))
@interface NVRecentsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, CNContactPickerViewControllerDelegate>
{
    BOOL _showingInMenu;
    NVRecentsWindow *_window;
    CNContactPickerViewController *_bookmarksController;
    NSSearchField *_positioningView;
    id <NVRecentsViewControllerDelegate> _delegate;
    NSTableView *_tableView;
    NSView *_contentView;
}

@property(nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL showingInMenu; // @synthesize showingInMenu=_showingInMenu;
@property(nonatomic) __weak id <NVRecentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactPickerViewController:(id)arg1 didChooseContact:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)setFavoritesVisible:(BOOL)arg1;
- (void)tableViewDidArrowUpBeyondStart:(id)arg1;
- (void)tableView:(id)arg1 didSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 identifierForRow:(long long)arg2;
- (void)dealloc;
- (void)close;
- (void)referenceWindowMoved;
- (void)showRelativeToView:(id)arg1;
- (void)_updateRecentsWindowFrameRelativeToView:(id)arg1 maxHeight:(double)arg2;
- (void)deleteElementAction:(id)arg1;
- (id)bookmarksController;
- (id)manager;
- (id)nibName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

