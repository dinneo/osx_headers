//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class AMBundleAction, AMVariablesEditorController, NSBox, NSButton;

@interface AMActionPanelController : NSWindowController
{
    NSBox *_groupBox;
    NSButton *_cancelButton;
    NSButton *_continueButton;
    AMBundleAction *_action;
    AMBundleAction *_panelAction;
    AMVariablesEditorController *_variablesEditorController;
}

- (void)editVariable:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)continueAction:(id)arg1;
- (long long)runModal;
- (void)_runModalWithInfo:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)_notifyLayoutViewOfActivation:(id)arg1;
- (void)_panelDidBecomeMain:(id)arg1;
- (void)_panelDidBecomeVisible:(id)arg1;
- (struct CGSize)_adjustView:(id)arg1;
- (BOOL)areViewsResizable:(id)arg1;
- (id)variablesEditorController;
- (void)setPanelAction:(id)arg1;
- (id)panelAction;
- (void)setAction:(id)arg1;
- (id)action;
- (id)continueButton;
- (id)cancelButton;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end

