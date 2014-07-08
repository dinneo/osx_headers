//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TView.h"

@class NSView, TLayoutBinder;

@interface TSpacerView : TView
{
    TLayoutBinder *_layoutBinder;
    NSView *_masterView;
    struct CGRect _masterViewFrame;
    struct CGSize _spacerSize;
    _Bool _listenForHeightChanges;
}

@property(nonatomic) _Bool listenForHeightChanges; // @synthesize listenForHeightChanges=_listenForHeightChanges;
@property(retain, nonatomic) NSView *masterView; // @synthesize masterView=_masterView;
@property(readonly, retain, nonatomic) TLayoutBinder *layoutBinder; // @synthesize layoutBinder=_layoutBinder;
- (id).cxx_construct;
- (void)masterViewFrameChanged:(id)arg1;
- (void)aboutToTearDown;
- (void)initCommon;

@end
