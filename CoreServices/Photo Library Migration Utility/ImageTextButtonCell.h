//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSString;

@interface ImageTextButtonCell : NSButtonCell
{
    NSString *mText;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initWithCell:(id)arg1;

@end

