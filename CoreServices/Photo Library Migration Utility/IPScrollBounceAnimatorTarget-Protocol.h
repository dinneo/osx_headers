//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPScrollBounceAnimator;

@protocol IPScrollBounceAnimatorTarget <NSObject>
- (void)scrollBounceAnimator:(IPScrollBounceAnimator *)arg1 setContentOffset:(struct CGPoint)arg2;
- (struct CGPoint)scrollBounceAnimatorCurrentContentOffset:(IPScrollBounceAnimator *)arg1;
- (struct CGPoint)scrollBounceAnimatorMaximumContentOffset:(IPScrollBounceAnimator *)arg1;
- (struct CGPoint)scrollBounceAnimatorMinimumContentOffset:(IPScrollBounceAnimator *)arg1;
@end

