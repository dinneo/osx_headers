//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedPrincipal.h>

@class NSString;

@interface CalStoreRemoteManagedExchangePrincipal : CalStoreRemoteManagedPrincipal
{
    NSString *_mailbox;
    NSString *_rootFolderID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *rootFolderID; // @synthesize rootFolderID=_rootFolderID;
@property(retain, nonatomic) NSString *mailbox; // @synthesize mailbox=_mailbox;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end
