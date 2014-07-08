//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABCustomLayoutPrintMode.h"

@class ABLabelPageView, ABLayoutNumberFormatter, NSArray, NSComboBox, NSPopUpButton, NSTabView, NSTextField, NSView;

@interface ABLabelPrintMode : ABCustomLayoutPrintMode
{
    NSTabView *settingsView;
    ABLabelPageView *_pageView;
    BOOL _sheetDirty;
    BOOL _editingLabel;
    NSTextField *countLabel;
    NSComboBox *layoutNumberCombo;
    ABLayoutNumberFormatter *_layoutNumberFormatter;
    long long _previewLabelIndex;
    long long _previewPageIndex;
    long long _maxPages;
    struct _NSRange _loadedLabelRange;
    long long _lastSelectedMenuIndex;
    NSView *customSheetView;
    NSPopUpButton *customPageChooser;
    NSTextField *customMarginsTop;
    NSTextField *customMarginsBottom;
    NSTextField *customMarginsLeft;
    NSTextField *customMarginsRight;
    NSTextField *customLabelRows;
    NSTextField *customLabelColumns;
    NSTextField *customLabelGuttersVertical;
    NSTextField *customLabelGuttersHorizontal;
    ABLabelPageView *_printingView;
    NSArray *_labelPrintingTopLevelObjects;
}

- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)comboBox:(id)arg1 completedString:(id)arg2;
- (unsigned long long)comboBox:(id)arg1 indexOfItemWithStringValue:(id)arg2;
- (void)layoutNumberComboOK:(id)arg1;
- (void)updateAfterComboChange;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)activeBuiltInLayoutList;
- (id)tracedPrintStyle;
- (void)print:(id)arg1;
- (void)previewRevert:(id)arg1;
- (void)reflowCurrentPage;
- (void)loadNextPageSegment:(id)arg1;
- (void)showCurrentLabelAnimate:(BOOL)arg1;
- (long long)previewLabelIndex;
- (void)revertPageViewAndMarkNeedsDisplay:(id)arg1;
- (void)updateLayout;
- (void)addressListModifierOK:(id)arg1;
- (void)customSheetOK:(id)arg1;
- (void)labelPreviewOK:(id)arg1;
- (void)chosePaperSize:(id)arg1;
- (void)customSheetRevert:(id)arg1;
- (void)chooseLayoutAtIndex:(long long)arg1 builtIn:(BOOL)arg2;
- (void)updateCustomUIStateWithPrintInfo:(id)arg1;
- (void)updateCustomUIState;
- (BOOL)hasLayoutName:(id)arg1;
- (void)writeLabelDescriptionForSectionIndexToDefaults:(long long)arg1;
- (id)defaultLabelDescriptionForSectionIndex:(long long)arg1;
- (void)setCurrentLabelDescription:(id)arg1;
- (void)buildPaperList;
- (void)updatePaperPopUp;
- (id)styleSettingsView;
- (id)printingView;
- (void)cleanUp;
- (void)saveCustomLayouts:(id)arg1;
- (id)loadCustomLayouts;
- (id)loadBuiltInLayouts;
- (id)menuTitleForBuiltInLayoutAtIndex:(long long)arg1;
- (void)saveLastSelectedLayout:(id)arg1;
- (id)loadLastSelectedLayout;
- (void)prepare;
- (void)finishPreparing;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)previewLabelAnimate:(BOOL)arg1;
- (void)previewSheetAnimate:(BOOL)arg1;
- (void)awakeFromNib;
- (void)finalize;
- (void)dealloc;
- (id)initWithPanelController:(id)arg1;

@end
