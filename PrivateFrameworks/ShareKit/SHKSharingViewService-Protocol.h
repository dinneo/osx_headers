//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SHKSharingViewService <NSObject>
- (void)performQueuedCompletionActions;
- (void)performQueuedAnimationActionsWithCompletionBlock:(void (^)(void))arg1;
- (void)proceedWithSharingTransitionOutWithSuccess:(BOOL)arg1 duration:(double)arg2;
- (void)proceedWithSharingTransitionIn;
- (void)proceedWithInstantTransitionOut;
- (void)proceedWithInstantTransitionIn;
- (void)proceedWithMarkupTransitionOut;
- (void)proceedWithMarkupTransitionIn;
@end

