//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSAttributedString;

@interface EmptyMessageTableView : NSTableView
{
    NSAttributedString *_emptyListMsg;
    int _msgRow;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setMessageRow:(int)arg1;
- (void)setAttributedMesageForEmptyList:(id)arg1;
- (void)setMesageForEmptyList:(id)arg1;

@end

