//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBrowserViewDelegateProtocol.h"

@class NSString, TRenameOperation;

@protocol TDesktopViewDelegateProtocol <TBrowserViewDelegateProtocol>
- (void)shrinkToFitTextViewAboutToCloseForNode:(const struct TFENode *)arg1;
- (void)shrinkToFitTextViewEditingComplete:(NSString *)arg1 forNode:(const struct TFENode *)arg2 renameOp:(TRenameOperation *)arg3;
- (_Bool)shrinkToFitTextViewAboutToOpenForNode:(const struct TFENode *)arg1;
- (void)inlineProgressCancelButtonPressed:(const struct TFENode *)arg1;
@end
