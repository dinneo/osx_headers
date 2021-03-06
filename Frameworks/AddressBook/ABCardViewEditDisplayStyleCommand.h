//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

__attribute__((visibility("hidden")))
@interface ABCardViewEditDisplayStyleCommand : ABBookUndoableCommand
{
    id <ABCardViewDataSourceProvider> _dataSourceProvider;
    unsigned long long _oldStyle;
    unsigned long long _updatedStyle;
}

@property(readonly, nonatomic) id <ABCardViewDataSourceProvider> dataSourceProvider; // @synthesize dataSourceProvider=_dataSourceProvider;
@property(readonly, nonatomic) unsigned long long updatedStyle; // @synthesize updatedStyle=_updatedStyle;
@property(readonly, nonatomic) unsigned long long oldStyle; // @synthesize oldStyle=_oldStyle;
- (void)executeUndo;
- (void)execute;
- (void)dealloc;
- (id)initWithDataSourceProvider:(id)arg1 oldStyle:(unsigned long long)arg2 updatedStyle:(unsigned long long)arg3;

@end

