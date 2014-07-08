//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABGroupActionHelper.h"

@class ABBookGroupPasteCategorizer, NSString;

@interface ABBookGroupPasteHelper : NSObject <ABGroupActionHelper>
{
    ABBookGroupPasteCategorizer *_pasteboardDataCategorizer;
    id <ABGroupPasteCommandFactory> _pasteCommandFactory;
    id <ABCommandExecutor> _commandExecutor;
}

- (void)performAction;
- (id)makePasteCommand;
- (id)actionName;
- (void)dealloc;
- (id)initWithPasteboardDataCategorizer:(id)arg1 commandFactory:(id)arg2 commandExecutor:(id)arg3;
- (id)initWithRecordContext:(id)arg1 groups:(id)arg2 pasteboardData:(id)arg3 commandExecutor:(id)arg4 pasteCommandFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
