//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABGroup.h"

@interface ABGroup (ABScripting)
- (void)handleRemoveCommand:(id)arg1;
- (BOOL)removeArgument:(id)arg1;
- (void)handleAddCommand:(id)arg1;
- (BOOL)addArgument:(id)arg1;
- (void)removeFromGroupsAtIndex:(long long)arg1;
- (void)insertInGroups:(id)arg1;
- (void)insertInGroups:(id)arg1 atIndex:(long long)arg2;
- (void)removeFromPeopleAtIndex:(long long)arg1;
- (void)insertInPeople:(id)arg1;
- (void)insertInPeople:(id)arg1 atIndex:(long long)arg2;
- (void)setName:(id)arg1;
- (id)groups;
- (id)people;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (id)objectSpecifier;
@end

