//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSAnimationDelegate.h"
#import "NSToolbarDelegate.h"

@class NSMutableDictionary, NSSegmentedControl, NSString, NSToolbar, NSView;

@interface SPInfoWindowController : NSWindowController <NSToolbarDelegate, NSAnimationDelegate>
{
    NSToolbar *_categoryBar;
    NSSegmentedControl *_categorySelector;
    NSSegmentedControl *_categorySelectorNoMemory;
    NSView *_catSelectorView;
    NSView *_catSelectorNoMemView;
    NSMutableDictionary *_views;
    int _loadLock;
    long long _currentCategory;
}

@property(readonly) NSSegmentedControl *categorySelector; // @synthesize categorySelector=_categorySelector;
@property(readonly) NSToolbar *categoryBar; // @synthesize categoryBar=_categoryBar;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)categorySelected:(id)arg1;
- (void)showCategory:(long long)arg1 animateResize:(BOOL)arg2;
- (void)dealloc;
- (void)awakeFromNib;
- (void)windowWillLoad;
- (void)windowDidLoad;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)viewForCategory:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

