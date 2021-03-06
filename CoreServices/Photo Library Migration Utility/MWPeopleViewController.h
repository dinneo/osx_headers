//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MultiPaneContentControllerProtocol.h"

@class FSPeopleView, MultiPaneController;

@interface MWPeopleViewController : NSObject <MultiPaneContentControllerProtocol>
{
    MultiPaneController *_controller;
    FSPeopleView *_view;
}

- (void)updateForDB:(id)arg1;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)selectionChanged:(id)arg1;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)willBeInstalledInMultiPane:(id)arg1;
- (void)setMultiPaneController:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (double)sizeIncrement;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (BOOL)hasSelection;
- (struct IPSelectionList *)retrieveSelection;

@end

