//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCell, NSDictionary, NSString, NSView;

@interface NSToolTip : NSObject
{
    NSView *view;
    NSCell *cell;
    NSString *string;
    id owner;
    NSDictionary *dataDictionary;
    void *weakData;
    long long trackingNum;
    struct CGRect trackingRect;
    struct {
        unsigned int ownerIsDisplayDelegate:1;
        unsigned int isTemporary:1;
        unsigned int fadesOutWhenInactive:1;
        unsigned int isExpansionToolTip:1;
        unsigned int reserved:28;
    } ttFlags;
}

- (void)setData:(void *)arg1;
- (void *)data;
- (id)description;
- (BOOL)isTemporary;
- (void)dealloc;
- (id)init;

@end

