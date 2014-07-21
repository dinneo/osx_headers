//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CNContactPickerInternalResponseDelegate.h"
#import "CNContactPickerInternalSetup.h"
#import "CNContactPickerViewController.h"

@class NSString, NSXPCConnection;

@interface CNContactPickerRemoteViewController : NSViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerInternalResponseDelegate>
{
    id <CNContactPickerInternalResponseDelegate> _responseDelegate;
    NSXPCConnection *_connection;
}

+ (id)internalResponseDelegateInterface;
@property __weak id <CNContactPickerInternalResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void).cxx_destruct;
- (void)traceUsageStatistics;
- (void)resetUsageStatistics;
- (void)setSearchFieldVisible:(BOOL)arg1;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)showSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)didShowSectionWithIdentifier:(id)arg1;
- (void)didSearchForString:(id)arg1;
- (void)didSelectContact:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)pickerDidCreate;
- (void)setDisplayedKeys:(id)arg1;
- (void)establishConnection;
- (id)pickerControlProxy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

