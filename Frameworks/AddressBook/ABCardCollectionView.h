//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ABCardView, ABCardViewStyleProvider, ABOverlayView, NSArray, NSMutableArray, NSStackView;

@interface ABCardCollectionView : NSView
{
    NSMutableArray *_collectionViewItems;
    NSMutableArray *_noteCollectionItems;
    NSStackView *_rowStackView;
    ABCardView *mCardView;
    ABOverlayView *_overlayView;
    BOOL mInReflow;
    BOOL loaded;
    NSArray *_constraints;
    id <ABCardCollectionViewDataSource> _dataSource;
    id <ABCardCollectionViewDelegate> _delegate;
    ABCardViewStyleProvider *_styleProvider;
    BOOL _reloadEnabled;
    long long _noteResponderIndexAtLastTeardown;
    double _labelColumnWidth;
}

+ (id)sortedCollectionViewProperties;
+ (id)propertyToVisiblePreferenceKeyMap;
+ (id)relationships;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) BOOL reloadEnabled; // @synthesize reloadEnabled=_reloadEnabled;
@property(nonatomic) id <ABCardCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <ABCardCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(getter=isLoaded) BOOL loaded; // @synthesize loaded;
- (void)updateFaceTimeAvailability:(BOOL)arg1;
- (void)setNotesEditable:(BOOL)arg1;
- (void)restoreNoteFirstResponder;
- (void)saveNoteFirstResponder;
- (void)setNoteInsertionPoints:(id)arg1;
- (id)noteInsertionPoints;
- (id)activeViewForItem:(id)arg1;
@property(readonly, nonatomic) BOOL isTemplate;
@property(readonly, nonatomic) BOOL isEditing;
- (void)resetStackView;
- (void)removeSubViews;
- (void)removeCollectionViewItems;
- (id)alignLeadingEdgeOfValues;
- (id)minusButtonAlignmentConstraints;
- (id)rowWidthConstraints;
- (void)updateConstraints;
- (void)sortCollectionViewItems;
- (void)addCollectionViewItems;
- (void)reloadData;
- (id)updateKeyViewLoop;
- (void)drawFramesForLayoutDebugging;
- (void)drawRect:(struct CGRect)arg1;
- (void)ab_layout;
- (BOOL)isFlipped;
- (void)applyDisplayAttributes;
- (void)layout;
- (void)forceFullLayout;
- (void)queueFullLayout;
- (id)instantMessageServiceKeys;
- (id)labelsByProperty;
- (BOOL)allowMultipleValuesForItem:(id)arg1;
- (void)collectionItemDidRemoveLastCharacter:(id)arg1;
- (void)collectionItemDidAddFirstCharacter:(id)arg1;
- (void)collectionItem:(id)arg1 didChangeService:(id)arg2;
- (void)collectionItem:(id)arg1 didChangeLabel:(id)arg2;
- (id)collectionItems;
- (id)collectionItemsWithValueKey:(id)arg1;
- (id)collectionItemsWithProperty:(id)arg1;
- (id)collectionItemsWithCoreDataProperty:(id)arg1;
- (id)_collectionItemsWithValue:(id)arg1 forKey:(id)arg2;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (void)updateBorderOverlayView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)preferencesChanged:(id)arg1;
- (void)addSeparatorItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)insertionIndexOfItem:(id)arg1;
- (void)insertItemWithSeparatorFollowing:(id)arg1;
- (unsigned long long)stackViewIndexOfLastItemWithValueKeypath:(id)arg1;
- (void)adjustStackViewSpacingAfterItem:(id)arg1;
- (void)addItem:(id)arg1 sort:(BOOL)arg2;
- (void)addNewItem:(id)arg1 giveFocus:(BOOL)arg2;
- (id)addNewItemForKey:(id)arg1 giveFocus:(BOOL)arg2;
- (void)editCollectionItemWithKey:(id)arg1 label:(id)arg2;
- (void)highlightSearchTerms:(id)arg1;
- (BOOL)focusCollectionItem:(id)arg1;
- (void)doRemoveItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (BOOL)commitEditing;
- (BOOL)shouldShowPrivacyCheckboxForItem:(id)arg1;
- (id)_privateMeFieldForCollectionViewItem:(id)arg1;
@property(readonly, nonatomic) double leftMargin;
@property ABCardView *cardView; // @dynamic cardView;
- (void)updateValueFieldMaximumWidths;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)frameDidChange:(id)arg1;
- (double)labelColumnWidth;
- (void)setupStackView;
- (void)ABCardCollectionView_commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

