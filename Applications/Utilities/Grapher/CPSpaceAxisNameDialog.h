//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPModalDialog.h"

@class GSpace, NSMutableArray;

@interface CPSpaceAxisNameDialog : CPModalDialog
{
    GSpace *mSpace;
    NSMutableArray *mAxes;
    NSMutableArray *mItems;
}

- (void)dialogDidClose;
- (void)dialogDidOK;
- (BOOL)dialogShouldOK;
- (void)showWithSpace:(id)arg1 viewController:(id)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (id)spaceAxisNameItems;

@end

