//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBObject.h"

@class NSDictionary, NSString;

@interface _AMSystemEventsItem : SBObject
{
}

- (void)saveAs:(id)arg1 in:(id)arg2;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSDictionary *properties;
@property(copy) NSString *name;
- (id)id;

@end
