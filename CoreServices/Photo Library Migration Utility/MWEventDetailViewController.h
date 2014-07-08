//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MultiPaneContentControllerProtocol.h"
#import "NSTextFieldDelegate.h"

@class FSEventDetailView, IPKToolbarItem, MultiPaneController;

@interface MWEventDetailViewController : NSObject <MultiPaneContentControllerProtocol, NSTextFieldDelegate>
{
    MultiPaneController *_controller;
    FSEventDetailView *_view;
    IPKToolbarItem *_titleItem;
    IPKToolbarItem *_dateItem;
    IPKToolbarItem *_photoCountItem;
    IPKToolbarItem *_eventStepperItem;
    unsigned long long _nextEventKey;
    unsigned long long _prevEventKey;
    BOOL _installed;
}

@property unsigned long long prevEventKey; // @synthesize prevEventKey=_prevEventKey;
@property unsigned long long nextEventKey; // @synthesize nextEventKey=_nextEventKey;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)populateHeaderToolbarForMultiPane:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setupFonts;
- (void)eventStepperAction:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)updateHeaderElementsForAlbum:(id)arg1;
- (unsigned long long)findEventIndex:(unsigned long long)arg1 inDB:(id)arg2 isFirst:(char *)arg3 isLast:(char *)arg4 nextEventKey:(unsigned long long *)arg5 prevEventKey:(unsigned long long *)arg6;
- (BOOL)wantsHeaderToolbarForMultiPane:(id)arg1;
- (void)selectionChanged:(id)arg1;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)setMultiPaneController:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)hasSelection;
- (void)dealloc;
- (id)init;

@end
