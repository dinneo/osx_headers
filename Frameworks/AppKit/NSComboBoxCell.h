//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSArray, NSButtonCell, NSMutableArray, NSScrollView, NSTableView, NSWindow;

@interface NSComboBoxCell : NSTextFieldCell
{
    id _delegate;
    id _dataSource;
    struct __cbcFlags {
        unsigned int usesDataSource:1;
        unsigned int completes:1;
        unsigned int buttonBordered:1;
        unsigned int popUpIsUp:1;
        unsigned int filteringEvents:1;
        unsigned int drawing:1;
        unsigned int synchronizingSelection:1;
        unsigned int reserved:9;
        unsigned int visibleItems:16;
    } _cbcFlags;
    NSButtonCell *_buttonCell;
    NSTableView *_tableView;
    NSScrollView *_scrollView;
    NSWindow *_popUp;
    NSMutableArray *_popUpList;
    struct CGRect *_cellFrame;
    void *_reserved;
}

+ (void)initialize;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setFormatter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithTypedStreamCoder_NSComboBoxCell:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_old_encodeWithCoder_NSComboBoxCell:(id)arg1;
@property BOOL completes;
- (void)_complete:(id)arg1;
- (void)_completeNoRecursion:(id)arg1;
- (void)endEditing:(id)arg1;
- (void)_unregisterForCompletion:(id)arg1;
- (void)_registerForCompletion:(id)arg1;
- (void)_noteLengthAndSelectedRange:(id)arg1;
- (void)_updateLengthAndSelectedRange:(id)arg1;
- (id)completedString:(id)arg1;
- (void)comboBoxTextDidEndEditing:(id)arg1;
- (void)synchronizeTableViewSelectionWithText:(id)arg1;
- (void)synchronizeTableViewSelectionWithStringValue:(id)arg1;
- (void)scrollItemAtIndexToVisible:(long long)arg1;
- (void)scrollItemAtIndexToTop:(long long)arg1;
- (BOOL)_controlView:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)moveDown:(id)arg1;
- (void)popUp:(id)arg1;
- (void)_numberOfRowsDidChangeInComboBoxTableView:(id)arg1;
- (void)_updatePopUpWindowFrameFirstTimeInSession:(BOOL)arg1;
- (struct CGRect)frameForPopUpWithOldFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2 controlView:(id)arg3;
- (void)orderOutPopUpWindow:(id)arg1;
- (void)dismissPopUp:(id)arg1;
- (void)filterEvents:(id)arg1;
- (void)_combobox_windowWillBeginSheet:(id)arg1;
- (void)_windowWillOrderOut:(id)arg1;
- (void)_combobox_windowDidBecomeKey:(id)arg1;
- (void)_appWillTerminate:(id)arg1;
- (BOOL)_isFilteringEvents;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (BOOL)_shouldRegisterForEditingNotifications;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)resetCursorRect:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (BOOL)shouldEdit:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (long long)interiorBackgroundStyle;
- (BOOL)_textDimsWhenDisabled;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_vibrancyFilterForControlView:(id)arg1;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (BOOL)canSmoothFontsInFrame:(struct CGRect)arg1 forLayerBackedView:(id)arg2;
- (struct __CFDictionary *)_coreUIDrawOptionsWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)setControlView:(id)arg1;
- (void)_drawThemeComboBoxButtonWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_computeBezelRectWithTextCellFrame:(struct CGRect)arg1 inView:(id)arg2 topLeft:(struct CGRect *)arg3 bottomLeft:(struct CGRect *)arg4 left:(struct CGRect *)arg5 right:(struct CGRect *)arg6 top:(struct CGRect *)arg7 bottom:(struct CGRect *)arg8;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)boundsForButtonCell:(struct CGRect)arg1;
- (struct CGRect)boundsForTextCell:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(readonly, copy) NSArray *objectValues;
- (long long)indexOfItemWithObjectValue:(id)arg1;
@property(readonly) id objectValueOfSelectedItem;
- (id)itemObjectValueAtIndex:(long long)arg1;
- (void)selectItemWithObjectValue:(id)arg1;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithObjectValue:(id)arg1;
- (void)insertItemWithObjectValue:(id)arg1 atIndex:(long long)arg2;
- (void)addItemsWithObjectValues:(id)arg1;
- (void)addItemWithObjectValue:(id)arg1;
- (void)noteNumberOfItemsChanged;
@property(readonly) long long numberOfItems;
@property(readonly) long long indexOfSelectedItem;
- (void)deselectItemAtIndex:(long long)arg1;
- (void)selectItemAtIndex:(long long)arg1;
- (void)reloadData;
@property id <NSComboBoxCellDataSource> dataSource;
- (void)_setDataSource:(id)arg1;
@property BOOL usesDataSource;
- (BOOL)isOpaque;
@property long long numberOfVisibleItems;
@property double itemHeight;
- (BOOL)_isButtonBordered;
@property(getter=isButtonBordered) BOOL buttonBordered;
- (void)_setButtonBordered:(BOOL)arg1;
@property struct CGSize intercellSpacing;
@property BOOL hasVerticalScroller;
- (struct CGRect)_focusRingFrameForFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
- (double)_buttonHeight;
- (double)_buttonWidth;
- (struct CGRect)_cellFrame;
- (void)_setCellFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (void)_initializeButtonCell;
- (void)initPopUpWindow;
- (void)tableViewAction:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (BOOL)_suppressNonTitleDrawing;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityButtonRect;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilityButtonUIElement;
- (void)accessibilitySetExpandedAttribute:(id)arg1;
- (BOOL)accessibilityIsExpandedAttributeSettable;
- (id)accessibilityExpandedAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

