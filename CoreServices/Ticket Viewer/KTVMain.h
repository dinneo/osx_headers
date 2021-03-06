//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSApplicationDelegate.h"
#import "NSTableViewDelegate.h"

@class KTVCacheCollection, NSArray, NSArrayController, NSManagedObjectContext, NSManagedObjectModel, NSMenu, NSMenuItem, NSString, NSTableView, NSToolbar;

@interface KTVMain : NSObject <NSApplicationDelegate, NSTableViewDelegate>
{
    NSToolbar *o_toolbar;
    NSMenu *o_actionMenu;
    NSMenuItem *o_actionMenuPasswdItem;
    NSMenuItem *o_actionMenuDefaultItem;
    KTVCacheCollection *_collection;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    unsigned long long _saveSelection;
    NSTableView *_collectionTableView;
    NSArrayController *_collectionController;
    NSArray *_sortDescriptors;
}

@property(retain) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property NSArrayController *collectionController; // @synthesize collectionController=_collectionController;
@property NSTableView *collectionTableView; // @synthesize collectionTableView=_collectionTableView;
- (void)dealloc;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_validateItemWithTag:(long long)arg1;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (void)infoAboutCredentials:(id)arg1;
- (void)destroyTicketForCaches:(id)arg1;
- (void)changeCachePassword:(id)arg1;
- (void)setCacheAsDefault:(id)arg1;
- (void)manageCache:(id)arg1;
- (void)deleteCaches:(id)arg1;
- (void)addCache:(id)arg1;
- (BOOL)credentialCacheSelected:(unsigned long long)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)gssChanged;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

