//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ITTextFormatter.h"

@class NSMutableCharacterSet;

@interface TextFieldValidator : ITTextFormatter
{
    NSMutableCharacterSet *_blacklistCharacterSet;
    struct weak_ptr<ITTextServiceMacOS> mITTextService;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (shared_ptr_bd1bd18b)owningITTextService;
- (void)setOwningITTextService:(shared_ptr_bd1bd18b)arg1;
- (void)dealloc;
- (id)init;

@end

