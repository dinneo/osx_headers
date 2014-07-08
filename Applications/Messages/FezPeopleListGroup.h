//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FezPeopleListItem, NSArray, NSDictionary, NSMutableArray, NSRecursiveLock, NSString;

@interface FezPeopleListGroup : NSObject
{
    NSMutableArray *_members;
    NSDictionary *_properties;
    NSString *_name;
    NSString *_localizableName;
    FezPeopleListItem *_item;
    NSRecursiveLock *_lock;
    BOOL _expanded;
    int _maxMembers;
    BOOL _supportsReordering;
    BOOL _supportsMemberReordering;
    BOOL _supportsRename;
    BOOL _supportsAdding;
    BOOL _supportsRemoving;
    BOOL _supportsOfflineMembers;
}

@property BOOL supportsOfflineMembers; // @synthesize supportsOfflineMembers=_supportsOfflineMembers;
@property BOOL supportsRemoving; // @synthesize supportsRemoving=_supportsRemoving;
@property BOOL supportsAdding; // @synthesize supportsAdding=_supportsAdding;
@property BOOL supportsRename; // @synthesize supportsRename=_supportsRename;
@property BOOL supportsMemberReordering; // @synthesize supportsMemberReordering=_supportsMemberReordering;
@property BOOL supportsReordering; // @synthesize supportsReordering=_supportsReordering;
@property int maxMembers; // @synthesize maxMembers=_maxMembers;
@property(retain) NSMutableArray *_members; // @synthesize _members;
@property(retain) NSString *name; // @synthesize name=_name;
@property(setter=setExpanded:) BOOL isExpanded; // @synthesize isExpanded=_expanded;
@property(retain) FezPeopleListItem *peopleListItem; // @synthesize peopleListItem=_item;
@property(retain) NSString *localizableName; // @synthesize localizableName=_localizableName;
@property(retain) NSRecursiveLock *_lock; // @synthesize _lock;
- (CDStruct_b2f7276a)filterForIMHandle:(id)arg1;
- (BOOL)shouldConsumeIMHandle:(id)arg1;
- (BOOL)shouldContainIMHandle:(id)arg1;
@property(retain) NSDictionary *properties;
- (void)removeAllItems;
- (id)description;
@property(readonly) int numberOfOnlineItems;
@property(readonly) int actualNumberOfOnlineItems;
@property(readonly) unsigned long long numberOfItems;
- (void)removePeopleListItem:(id)arg1;
- (void)addPeopleListItem:(id)arg1;
@property(readonly, retain) NSString *displayName;
@property(readonly, retain) NSArray *members;
@property(readonly, retain) NSArray *visibleMembers;
- (void)dealloc;
- (id)init;

@end
