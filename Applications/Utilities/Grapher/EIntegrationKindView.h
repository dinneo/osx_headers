//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EIntegratorView.h"

@class NSMutableArray, NSMutableDictionary;

@interface EIntegrationKindView : EIntegratorView
{
    id mKindPopup;
    NSMutableDictionary *mDictionary;
    NSMutableArray *mValidKinds;
}

- (void)update:(id)arg1;
- (id)kindForTag:(long long)arg1;
- (long long)tagForKind:(id)arg1;
- (id)kind;
- (void)setKind:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setValidKinds:(id)arg1;
- (void)setTagsForKinds:(id)arg1;

@end
