//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class MUIWKViewController, MUIWebAttachmentController, NSArray, NSDictionary, NSMapTable, NSMenu, NSSharingServicePicker, NSString, NSURL;

@interface MUIContextMenuController : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    MUIWKViewController *_viewController;
    NSMenu *_shareMenu;
    NSSharingServicePicker *_picker;
    NSDictionary *_applicationDictionary;
    NSMapTable *_sharingItems;
    NSArray *_clientMenuItems;
    NSURL *_clickedLinkURL;
    MUIWebAttachmentController *_clickedAttachmentController;
    NSArray *_selectedAndClickedAttachmentControllers;
}

@property(retain, nonatomic) NSArray *selectedAndClickedAttachmentControllers; // @synthesize selectedAndClickedAttachmentControllers=_selectedAndClickedAttachmentControllers;
@property(retain, nonatomic) MUIWebAttachmentController *clickedAttachmentController; // @synthesize clickedAttachmentController=_clickedAttachmentController;
@property(retain, nonatomic) NSURL *clickedLinkURL; // @synthesize clickedLinkURL=_clickedLinkURL;
@property(copy, nonatomic) NSArray *clientMenuItems; // @synthesize clientMenuItems=_clientMenuItems;
@property(retain, nonatomic) NSMapTable *sharingItems; // @synthesize sharingItems=_sharingItems;
@property(retain, nonatomic) NSDictionary *applicationDictionary; // @synthesize applicationDictionary=_applicationDictionary;
@property(retain, nonatomic) NSSharingServicePicker *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSMenu *shareMenu; // @synthesize shareMenu=_shareMenu;
@property(nonatomic) __weak MUIWKViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)_itemClicked:(id)arg1;
- (void)_handleClickedItem:(struct OpaqueWKContextMenuItem *)arg1;
- (void)_addProposedContextMenuItems:(struct OpaqueWKArray *)arg1 toMenu:(struct OpaqueWKArray **)arg2 includeLinkItems:(BOOL)arg3;
- (id)_applicationNameFromIdentifier:(id)arg1;
- (struct WKPageContextMenuClientV2)contextMenuClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

