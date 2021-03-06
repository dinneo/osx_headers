//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EWSDelegatePermissionsType, EWSUserIdType;

@interface EWSDelegateUserType : NSObject
{
    EWSUserIdType *_UserId;
    EWSDelegatePermissionsType *_DelegatePermissions;
    BOOL _ReceiveCopiesOfMeetingMessages;
    BOOL _ViewPrivateItems;
}

+ (id)definition;
@property(nonatomic) BOOL ViewPrivateItems; // @synthesize ViewPrivateItems=_ViewPrivateItems;
@property(nonatomic) BOOL ReceiveCopiesOfMeetingMessages; // @synthesize ReceiveCopiesOfMeetingMessages=_ReceiveCopiesOfMeetingMessages;
@property(retain, nonatomic) EWSDelegatePermissionsType *DelegatePermissions; // @synthesize DelegatePermissions=_DelegatePermissions;
@property(retain, nonatomic) EWSUserIdType *UserId; // @synthesize UserId=_UserId;
- (void)dealloc;

@end

