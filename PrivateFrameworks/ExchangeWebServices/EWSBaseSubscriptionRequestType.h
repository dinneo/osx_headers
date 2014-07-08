//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface EWSBaseSubscriptionRequestType : NSObject
{
    NSArray *_FolderIds;
    NSArray *_EventTypes;
    NSString *_Watermark;
    BOOL _SubscribeToAllFolders;
    BOOL _SubscribeToAllFoldersIsSpecified;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Watermark; // @synthesize Watermark=_Watermark;
@property(copy, nonatomic) NSArray *EventTypes; // @synthesize EventTypes=_EventTypes;
@property(copy, nonatomic) NSArray *FolderIds; // @synthesize FolderIds=_FolderIds;
@property(nonatomic) BOOL SubscribeToAllFoldersIsSpecified; // @synthesize SubscribeToAllFoldersIsSpecified=_SubscribeToAllFoldersIsSpecified;
@property(nonatomic) BOOL SubscribeToAllFolders; // @synthesize SubscribeToAllFolders=_SubscribeToAllFolders;
- (void)dealloc;
- (id)description;

@end
