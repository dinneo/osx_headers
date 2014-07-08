//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "IOBluetoothRFCOMMChannelDelegate.h"
#import "NSOpenSavePanelDelegate.h"
#import "NSToolbarDelegate.h"

@class IOBluetoothOBEXSession, IOBluetoothTransferProgressUI, IOBluetoothUserNotification, NSArray, NSButton, NSImageView, NSMutableArray, NSPanel, NSPathControl, NSProgressIndicator, NSString, NSTableView, NSTextField, NSTimer, NSToolbar, NSToolbarItem, NSWindow, OBEXFileTransferServices, ObjectPusherAppController;

@interface FileTransferClientWindow : NSWindowController <IOBluetoothRFCOMMChannelDelegate, NSOpenSavePanelDelegate, NSToolbarDelegate>
{
    NSToolbarItem *mDeleteToolbarItem;
    NSTextField *mTableTitle;
    NSTextField *mStatusField;
    NSTextField *mDeviceNameField;
    NSProgressIndicator *mProgressIndicator;
    NSTableView *mFileListingView;
    NSImageView *mDeviceIconView;
    NSButton *mDeleteButton;
    NSButton *mGetButton;
    NSButton *mPutButton;
    NSButton *mGoBackButton;
    NSWindow *mTransferWindowSheet;
    NSButton *mTransferWindowStopButton;
    NSTextField *mTransferWindowHeadlineStatusTextField;
    NSTextField *mTransferWindowTimeRemainingTextField;
    NSTextField *mTransferWindowTimeRemainingTextFieldLabel;
    NSTextField *mTransferWindowTransferredStatusTextField;
    NSProgressIndicator *mTransferWindowProgressIndicator;
    BOOL mTransferWindowIsVisible;
    NSTextField *mCreateFolderNameTextField;
    NSWindow *mCreateFolderPanel;
    NSButton *mCreateFolderOKButton;
    BOOL mCreateFolderPanelIsVisible;
    NSWindow *mDeleteItemPanel;
    NSTextField *mDeleteItemTextField;
    NSTextField *mDeleteItemTitleField;
    BOOL mDeleteItemPanelIsVisible;
    NSPanel *mTimeoutSheet;
    NSToolbar *_toolbar;
    NSTextField *mErrorMessageTextField;
    NSPanel *mErrorMessagePanel;
    OBEXFileTransferServices *mTransferServices;
    IOBluetoothTransferProgressUI *mTransferProgress;
    NSMutableArray *mRemoteFileNameQueue;
    NSMutableArray *mLocalFileNameQueue;
    NSArray *mDragTypes;
    BOOL mTargetIsAMac;
    ObjectPusherAppController *mOwner;
    unsigned short mMaxPacketLength;
    IOBluetoothOBEXSession *mOBEXSession;
    unsigned int mConnectionID;
    BOOL mAbortInProgress;
    BOOL mWeDisconnected;
    BOOL mOwnerKilledUs;
    BOOL mIsListingWindow;
    BOOL mIsConnectionStateChanging;
    int mLastOBEXOperationType;
    NSTimer *mAbortTimer;
    NSMutableArray *mCurrentDirectoryObjects;
    NSPathControl *mRemotePathControl;
    NSMutableArray *mRemotePathComponentArray;
    NSArray *mRemotePathDirectoryNameArray;
    int mRemotePathDirectoryNameArrayIndex;
    BOOL haveWeClosedApp;
    IOBluetoothUserNotification *mRFCOMMChannelNotification;
}

- (void).cxx_destruct;
- (id)getCurrentSelectedItems;
- (void)cellWasDoubleClicked:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didClickTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 fileNameForTableRow:(unsigned long long)arg2;
- (void)replaceRenameSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)fileTransferServicesCopyRemoteFileProgress:(id)arg1 transferProgress:(id)arg2;
- (void)fileTransferServicesCopyRemoteFileComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesSendFileProgress:(id)arg1 transferProgress:(id)arg2;
- (void)fileTransferServicesSendFileComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesPathChangeComplete:(id)arg1 error:(int)arg2 finalPath:(id)arg3;
- (void)fileTransferServicesCreateFolderComplete:(id)arg1 error:(int)arg2 folder:(id)arg3;
- (void)fileTransferServicesRetrieveFolderListingComplete:(id)arg1 error:(int)arg2 listing:(id)arg3;
- (void)fileTransferServicesRemoveItemComplete:(id)arg1 error:(int)arg2 removedItem:(id)arg3;
- (void)fileTransferServicesDisconnectionComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesConnectionComplete:(id)arg1 error:(int)arg2;
- (void)fileTransferServicesAbortComplete:(id)arg1 error:(int)arg2;
- (id)OBEXSession;
- (void)ownerCloseOBEXConnection:(id)arg1;
- (int)closeOBEXSession;
- (int)connectToFTPService;
- (int)doOBEXOperation:(id)arg1;
- (void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2;
- (void)handleRFCOMMChannelOpened:(id)arg1 channel:(id)arg2;
- (void)cancelAbortTimer;
- (void)timeoutSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)abortTimerFired:(id)arg1;
- (void)stopIndeterminateProgressBar;
- (void)startIndeterminateProgressBar;
- (void)errorMessagePanelOKButtonClicked:(id)arg1;
- (void)adjustUIForTransferOperationConclusion:(int)arg1;
- (void)endTransferSheet;
- (void)showSheetForTransferOperation:(id)arg1 operationType:(unsigned int)arg2;
- (void)updateStatusText:(id)arg1;
- (void)listFilesInBrowserFromList:(id)arg1;
- (void)resetForNewOperation;
- (void)closeSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextinfo:(void *)arg3;
- (void)reconnectSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextinfo:(void *)arg3;
- (void)runReconnectSheet;
- (void)stopButtonClicked:(id)arg1;
- (void)panelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)getButtonClicked:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)openPanelDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)sendButtonClicked:(id)arg1;
- (void)deleteSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)delete:(id)arg1;
- (void)doCreateFolderConclusion;
- (void)doCreateFolderStart;
- (void)controlTextDidChange:(id)arg1;
- (void)createFolderSheetOKButtonClicked:(id)arg1;
- (void)createFolderSheetCancelButtonClicked:(id)arg1;
- (void)createFolderButtonClicked:(id)arg1;
- (void)refreshCurrentListing:(id)arg1;
- (void)goToPreviousFolderButtonClicked:(id)arg1;
- (void)goToDefaultFolderButtonClicked:(id)arg1;
- (void)adjustRemotePathControl:(id)arg1;
- (void)createRemotePathDirectoryNameArray:(id)arg1;
- (void)pathControlClick:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (BOOL)isTransferInProgress;
- (void)closeUpShop;
- (void)comeToFront:(id)arg1;
- (id)windowNibName;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFolderListing:(id)arg1;
- (id)initWithBluetoothOBEXSession:(id)arg1;
- (id)initForDebuggingTheUI;
- (id)ftpOperationTypeString:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
