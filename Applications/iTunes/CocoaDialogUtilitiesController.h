//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ArtworkController, ITComboBoxDataSource, NSArray, NSBox, NSButton, NSButtonCell, NSMutableDictionary, NSProgressIndicator, NSString, NSTabView, NSTabViewItem, NSTextFieldCell, NSTextView, NSToolbar, NSView, NSWindow;

@interface CocoaDialogUtilitiesController : NSObject
{
    NSWindow *window;
    NSView *tabItemView;
    NSProgressIndicator *progressIndicator;
    NSBox *lineBoxView;
    NSBox *lineBox2View;
    ArtworkController *artworkControl;
    NSTabView *tabView;
    NSTextView *textView;
    NSToolbar *toolbar;
    NSString *_HelpAnchorName;
    NSButton *okButton;
    NSButton *cancelButton;
    NSButtonCell *_checkBoxButtonCell;
    NSTextFieldCell *_imageAndTextCell;
    struct JRDialog *_dialog;
    NSMutableDictionary *_valuesDictionary;
    NSMutableDictionary *_tableModels;
    struct _NSModalSession *_session;
    NSTabViewItem *_willSelectTabItem;
    NSMutableDictionary *_tabViewSizes;
    NSMutableDictionary *_toolbarItems;
    NSArray *_selectableToolbarItems;
    long long _dismissedButton;
    ITComboBoxDataSource *comboBoxDataSource;
}

- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (long long)doModal;
- (long long)runModalStateAndHandleAnEventOrTimeoutAtDateTimeout:(id)arg1;
- (void)shouldNotRequestUserAttention;
- (void)endModalState;
- (void)beginModalState;
- (long long)waitForDialogStartupUntilDateTimeout:(id)arg1;
- (void)fixWindowTitleAccessiblityVisibility;
- (void)setAccessibilityRoleDescription:(id)arg1 viewWithTag:(long long)arg2;
- (void)setAccessibilityRole:(id)arg1 viewWithTag:(long long)arg2;
- (void)setItemAccessiblityTitleElementTitleViewWithTag:(long long)arg1 viewWithTag:(long long)arg2;
- (void)setAccessibilityValueDescription:(id)arg1 viewWithTag:(long long)arg2;
- (void)setAccessibilityDescription:(id)arg1 viewWithTag:(long long)arg2;
- (void)setOverrideString:(id)arg1 forAttribute:(id)arg2 viewWithTag:(long long)arg3;
- (void)setKeyEquivalentModifierMask:(unsigned long long)arg1 viewWithTag:(long long)arg2;
- (void)setAdditionalKeyEquivalent:(unsigned short)arg1 viewWithTag:(long long)arg2;
- (void)setKeyEquivalent:(id)arg1 viewWithTag:(long long)arg2;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)selectToolbarItemWithItemIdentifier:(id)arg1;
- (void)setToolbarItemsShouldSelect:(unsigned char)arg1;
- (void)installToolbarAction;
- (void)installToolbarActionForToolbarItemWithItemIdentifier:(id)arg1;
- (void)handleToolbarButtonClick:(id)arg1;
- (id)toolTipForToolbarItemWithItemIdentifier:(id)arg1;
- (void)setToolTip:(id)arg1 toolbarItemWithItemIdentifier:(id)arg2;
- (id)imageForToolbarItemWithItemIdentifier:(id)arg1;
- (void)setImage:(id)arg1 toolbarItemWithItemIdentifier:(id)arg2;
- (id)labelForToolbarItemWithItemIdentifier:(id)arg1;
- (void)setLabel:(id)arg1 toolbarItemWithItemIdentifier:(id)arg2;
- (void)removeToolbarItemWithItemIdentifier:(id)arg1;
- (void)removeToolbarItemAtIndex:(long long)arg1;
- (void)appendToolbarFlexibleSpaceItem;
- (void)appendToolbarSpaceItem;
- (void)appendToolbarSeparatorItem;
- (void)appendToolbarItemWithItemIdentifier:(id)arg1 label:(id)arg2 image:(id)arg3;
- (void)appendToolbarItemWithItemIdentifier:(id)arg1;
- (void)insertToolbarFlexibleSpaceItemAtIndex:(long long)arg1;
- (void)insertToolbarSpaceItemAtIndex:(long long)arg1;
- (void)insertToolbarSeparatorItemAtIndex:(long long)arg1;
- (void)insertToolbarItemWithItemIdentifier:(id)arg1 label:(id)arg2 image:(id)arg3 atIndex:(long long)arg4;
- (void)insertToolbarItemWithItemIdentifier:(id)arg1 atIndex:(long long)arg2;
- (id)cachedToolbarItemWithIdentifier:(id)arg1;
- (long long)numberOfToolbarItems;
- (void)clearToolbarItems;
- (id)toolbarItemIdentifierForItemAtIndex:(long long)arg1;
- (long long)indexOfToolbarItemWithItemIdentifier:(id)arg1;
- (id)toolbarItemWithItemIdentifier:(id)arg1;
- (BOOL)isSpecialToolbarItemIdentifier:(id)arg1;
- (id)toolbarItems;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (struct CGSize)viewSizeTabItemWithIdentifier:(id)arg1 tabViewWithTag:(long long)arg2;
- (void)setViewSize:(struct CGSize)arg1 tabItemWithIdentifier:(id)arg2 tabViewWithTag:(long long)arg3;
- (struct CGSize)viewSizeTabItemAtIndex:(long long)arg1 tabViewWithTag:(long long)arg2;
- (void)setViewSize:(struct CGSize)arg1 tabItemAtIndex:(long long)arg2 tabViewWithTag:(long long)arg3;
- (struct CGSize)viewSizeForTabViewItem:(id)arg1;
- (void)setViewSize:(struct CGSize)arg1 forTabViewItem:(id)arg2;
- (void)setIsEnabled:(BOOL)arg1 tabItemWithIdentifier:(id)arg2 tabViewWithTag:(long long)arg3;
- (BOOL)isEnabledTabItemAtIndex:(long long)arg1 tabViewWithTag:(long long)arg2;
- (void)setIsEnabled:(BOOL)arg1 tabItemAtIndex:(long long)arg2 tabViewWithTag:(long long)arg3;
- (void)setIsEnabled:(BOOL)arg1 forTabViewItem:(id)arg2;
- (void)setNibName:(id)arg1 tabItemWithIdentifier:(id)arg2 tabViewWithTag:(long long)arg3;
- (void)setNibName:(id)arg1 tabItemAtIndex:(long long)arg2 tabViewWithTag:(long long)arg3 offset:(double)arg4;
- (void)setNibName:(id)arg1 forTabViewItem:(id)arg2 offset:(double)arg3;
- (long long)numberOfTabsInTabViewWithTag:(long long)arg1;
- (id)selectedTabIdentifierTabViewWithTag:(long long)arg1;
- (long long)selectedTabIndexTabViewWithTag:(long long)arg1;
- (void)selectTabViewItemWithIdentifier:(id)arg1 tabViewWithTag:(long long)arg2;
- (void)selectTabViewItemAtIndex:(long long)arg1 tabViewWithTag:(long long)arg2;
- (id)tabViewWithTag:(long long)arg1;
- (double)valueForRatingButtonWithTag:(long long)arg1;
- (void)setValue:(double)arg1 forRatingButtonWithTag:(long long)arg2;
- (BOOL)isEditableForRatingButtonWithTag:(long long)arg1;
- (void)setEditable:(BOOL)arg1 forRatingButtonWithTag:(long long)arg2;
- (id)ratingButtonWithTag:(long long)arg1;
- (void)installRatingButtonCellOnLevelIndicator:(id)arg1;
- (double)valueForProgressIndicatorWithTag:(long long)arg1;
- (void)setValue:(double)arg1 forProgressIndicatorWithTag:(long long)arg2;
- (double)minValueForProgressIndicatorWithTag:(long long)arg1;
- (void)setMinValue:(double)arg1 forProgressIndicatorWithTag:(long long)arg2;
- (double)maxValueForProgressIndicatorWithTag:(long long)arg1;
- (void)setMaxValue:(double)arg1 forProgressIndicatorWithTag:(long long)arg2;
- (void)setIndeterminate:(BOOL)arg1 forProgressIndicatorWithTag:(long long)arg2;
- (_Bool)isIndeterminateForProgressIndicatorWithTag:(long long)arg1;
- (void)stopAnimationForProgresssIndicatorWithTag:(long long)arg1;
- (void)startAnimationForProgresssIndicatorWithTag:(long long)arg1;
- (id)progressIndicatorWithTag:(long long)arg1;
- (void)setButtonTextColor:(id)arg1 viewWithTag:(long long)arg2;
- (void)setAllowedInputSourceLocales:(id)arg1 forViewWithTag:(long long)arg2;
- (void)setTextItalicForItemAtIndex:(long long)arg1 menuItemWithTag:(long long)arg2;
- (void)setTextNormalForViewWithTag:(long long)arg1;
- (void)setTextItalicForViewWithTag:(long long)arg1;
- (void)setTextBoldForViewWithTag:(long long)arg1;
- (void)setTextFontTrait:(unsigned long long)arg1 forViewWithTag:(long long)arg2;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (BOOL)shouldAllowResizeToSize:(struct CGSize)arg1;
- (_Bool)isMinimizable;
- (void)setMinimizable:(BOOL)arg1;
- (_Bool)isClosable;
- (void)setClosable:(BOOL)arg1;
- (_Bool)isResizable;
- (void)setResizable:(BOOL)arg1;
- (void)setShowsResizeIndicator:(BOOL)arg1;
- (BOOL)isHiddenMinimizeButton;
- (void)setHiddenMinimizeButton:(BOOL)arg1;
- (BOOL)isEnabledMinimizeButton;
- (void)setEnabledMinimizeButton:(BOOL)arg1;
- (BOOL)isHiddenZoomButton;
- (void)setHiddenZoomButton:(BOOL)arg1;
- (BOOL)isEnabledZoomButton;
- (void)setEnabledZoomButton:(BOOL)arg1;
- (BOOL)isHiddenCloseButton;
- (void)setHiddenCloseButton:(BOOL)arg1;
- (BOOL)isEnabledCloseButton;
- (void)setEnabledCloseButton:(BOOL)arg1;
- (void)normalizeStoplightVisibility;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)setDidResizeAction;
- (void)setAcceptActionForViewWithTag:(long long)arg1;
- (void)doAcceptAction:(id)arg1;
- (void)setDoubleActionForViewWithTag:(long long)arg1;
- (void)setActionForViewWithTag:(long long)arg1;
- (void)setHelpItemViewWithTag:(long long)arg1 helpAnchorName:(id)arg2;
- (void)setDismissItemViewWithTag:(long long)arg1;
- (void)setCancelItemViewWithTag:(long long)arg1;
- (void)setDefaultItemViewWithTag:(long long)arg1;
- (void)dismissWithButton:(long long)arg1;
- (void)dismiss:(id)arg1;
- (void)help:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)doNothingDoubleAction:(id)arg1;
- (void)doDoubleAction:(id)arg1;
- (void)doAction:(id)arg1;
- (double)sliderMinimumViewWithTag:(long long)arg1;
- (double)sliderMaximumViewWithTag:(long long)arg1;
- (double)sliderValueViewWithTag:(long long)arg1;
- (void)setSliderValue:(double)arg1 viewWithTag:(long long)arg2;
- (void)setToolTip:(id)arg1 rowIndex:(long long)arg2 columnIndex:(long long)arg3 tableItemWithTag:(long long)arg4;
- (long long)placementKindAtColumnIndex:(long long)arg1 tableItemWithTag:(long long)arg2;
- (void)setPlacementKind:(long long)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (id)secondaryStringAtRowIndex:(long long)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (id)secondaryStringsColumnArrayForColumnIndex:(long long)arg1 tableItemWithTag:(long long)arg2;
- (void)setSecondaryStringsColumnArray:(id)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (void)setImage:(id)arg1 rowIndex:(long long)arg2 columnIndex:(long long)arg3 tableItemWithTag:(long long)arg4;
- (id)imageAtRowIndex:(long long)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (_Bool)checkBoxStateAtRowIndex:(long long)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (void)setCheckBoxState:(BOOL)arg1 rowIndex:(long long)arg2 columnIndex:(long long)arg3 tableItemWithTag:(long long)arg4;
- (id)stringAtRowIndex:(long long)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (long long)clickedRowTableItemWithTag:(long long)arg1;
- (long long)numberOfSelectedRowsTableItemWithTag:(long long)arg1;
- (BOOL)isSelectedRowIndex:(long long)arg1 tableItemWithTag:(long long)arg2;
- (void)clearTableItemSelection:(long long)arg1;
- (void)setCurrentSelectionRowIndex:(long long)arg1 tableItemWithTag:(long long)arg2;
- (long long)currentSelectionRowIndexTableItemWithTag:(long long)arg1;
- (id)stringsColumnArrayForColumnIndex:(long long)arg1 tableItemWithTag:(long long)arg2;
- (void)setStringsColumnArray:(id)arg1 columnIndex:(long long)arg2 tableItemWithTag:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)displayableStringWithPrimaryString:(id)arg1 secondaryString:(id)arg2;
- (void)setSelectedRange:(struct _NSRange)arg1 viewWithTag:(long long)arg2;
- (long long)maxUTF8LengthViewWithTag:(long long)arg1;
- (void)setMaxUTF8Length:(long long)arg1 viewWithTag:(long long)arg2;
- (long long)maxLengthViewWithTag:(long long)arg1;
- (void)setMaxLength:(long long)arg1 viewWithTag:(long long)arg2;
- (BOOL)isTimeViewWithTag:(long long)arg1;
- (void)setIsTime:(BOOL)arg1 viewWithTag:(long long)arg2;
- (BOOL)isIntegerViewWithTag:(long long)arg1;
- (void)setIsInteger:(BOOL)arg1 viewWithTag:(long long)arg2;
- (id)textFormatterViewWithTag:(long long)arg1;
- (id)completionArrayViewWithTag:(long long)arg1;
- (void)setCompletionArray:(id)arg1 viewWithTag:(long long)arg2;
- (void)selectMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (long long)indexOfSelectedMenuItemViewWithTag:(long long)arg1;
- (id)popUpWithTag:(long long)arg1;
- (void)setContextualMenuActionForItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (void)handleContextualMenuItemAction:(id)arg1;
- (void)setContextualMenu:(struct JRMenu *)arg1 viewWithTag:(long long)arg2;
- (void)setTitle:(id)arg1 forMenuItemAtIndex:(long long)arg2 viewWithTag:(long long)arg3;
- (id)titleForMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (short)indentForMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (void)setIndent:(long long)arg1 forMenuItemAtIndex:(long long)arg2 viewWithTag:(long long)arg3;
- (id)imageForMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (void)setImage:(id)arg1 forMenuItemAtIndex:(long long)arg2 viewWithTag:(long long)arg3;
- (void)setValue:(unsigned int)arg1 forMenuItemAtIndex:(long long)arg2 viewWithTag:(long long)arg3;
- (unsigned int)valueForMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (void)clearValuesForMenuViewWithTag:(long long)arg1;
- (BOOL)isEnabledForMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (void)setEnabled:(BOOL)arg1 forMenuItemAtIndex:(long long)arg2 viewWithTag:(long long)arg3;
- (void)removeMenuItemAtIndex:(long long)arg1 viewWithTag:(long long)arg2;
- (void)appendMenuItemSeparatorViewWithTag:(long long)arg1;
- (void)appendMenuItemWithTitle:(id)arg1 viewWithTag:(long long)arg2;
- (long long)numberOfMenuItemsViewWithTag:(long long)arg1;
- (void)clearMenuItemsViewWithTag:(long long)arg1;
- (id)menuForViewWithTag:(long long)arg1;
- (BOOL)hasMenuViewWithTag:(long long)arg1;
- (struct ArtworkRecord *)copyArtworkForViewWithTag:(long long)arg1;
- (id)imageForViewWithTag:(long long)arg1;
- (void)setImage:(id)arg1 forViewWithTag:(long long)arg2;
- (struct CGSize)minSize;
- (void)setMinSize:(struct CGSize)arg1;
- (struct CGSize)maxSize;
- (void)setMaxSize:(struct CGSize)arg1;
- (void)offsetByDeltaH:(double)arg1 deltaV:(double)arg2 viewWithTag:(long long)arg3;
- (void)setSize:(struct CGSize)arg1 viewWithTag:(long long)arg2;
- (void)setSize:(struct CGSize)arg1 view:(id)arg2;
- (void)setSize:(struct CGSize)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (struct CGSize)sizeViewWithTag:(long long)arg1;
- (struct CGSize)size;
- (long long)sizeToFitHeightDeltaViewWithTag:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1 forViewWithTag:(long long)arg2;
- (struct CGRect)frameForViewWithTag:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (struct CGRect)frame;
- (struct CGRect)windowCocoaRectFromCarbonRect:(struct CGRect)arg1;
- (struct CGRect)windowCarbonRectFromCocoaRect:(struct CGRect)arg1;
- (struct CGRect)viewCocoaRectFromCarbonRect:(struct CGRect)arg1;
- (struct CGRect)viewCarbonRectFromCocoaRect:(struct CGRect)arg1;
- (struct CGRect)flipRect:(struct CGRect)arg1 isCarbonInputRect:(BOOL)arg2 inContainerRect:(struct CGRect)arg3;
- (struct CGSize)sizeToFitSizeViewWithTag:(long long)arg1;
- (void)show;
- (void)center;
- (void)centerAndShow;
- (long long)focusedItem;
- (void)setInitialFirstResponderForTabView:(long long)arg1 tabViewItem:(long long)arg2 viewWithTag:(long long)arg3;
- (void)setFocusedItemViewWithTag:(long long)arg1;
- (id)window;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isVisibleViewWithTag:(long long)arg1;
- (void)setVisible:(BOOL)arg1 viewWithTag:(long long)arg2;
- (id)stringValueViewWithTag:(long long)arg1;
- (void)setRTFStringValue:(id)arg1 viewWithTag:(long long)arg2;
- (void)setStringValue:(id)arg1 viewWithTag:(long long)arg2;
- (unsigned long long)buttonTypeOfButtonCell:(id)arg1;
- (void)setEnabled:(BOOL)arg1 viewWithTag:(long long)arg2;
- (void)setEnabled:(BOOL)arg1 tableView:(id)arg2;
- (void)setEnabled:(BOOL)arg1 textField:(id)arg2;
- (BOOL)isEnabledViewWithTag:(long long)arg1;
- (void)setState:(BOOL)arg1 viewWithTag:(long long)arg2;
- (BOOL)stateViewWithTag:(long long)arg1;
- (long long)tagForView:(id)arg1;
- (BOOL)hasViewWithTag:(long long)arg1;
- (id)viewWithTag:(long long)arg1;
- (id)noRequireViewWithTag:(long long)arg1;
- (id)beforeReturnAdjustView:(id)arg1;
- (void)dealloc;
- (BOOL)helpViewerIsRunning;
- (id)initWithNibNamed:(id)arg1 dialog:(shared_ptr_9e337257)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)tableModelForViewWithTag:(long long)arg1;
- (id)tableModels;
- (id)artworkControl;

@end

