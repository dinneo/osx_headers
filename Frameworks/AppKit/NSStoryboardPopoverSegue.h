//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSStoryboardSegue.h>

@class NSView;

@interface NSStoryboardPopoverSegue : NSStoryboardSegue
{
    struct CGRect _anchorRect;
    NSView *_anchorView;
    long long _popoverBehavior;
    unsigned long long _preferredEdge;
}

@property long long popoverBehavior; // @synthesize popoverBehavior=_popoverBehavior;
@property unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(retain) NSView *anchorView; // @synthesize anchorView=_anchorView;
@property struct CGRect anchorRect; // @synthesize anchorRect=_anchorRect;
- (void)perform;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
@property(setter=_setPopoverBehavior:) long long _popoverBehavior;
@property(setter=_setPreferredEdge:) unsigned long long _preferredEdge;
@property(retain, setter=_setAnchorView:) NSView *_anchorView;

@end

