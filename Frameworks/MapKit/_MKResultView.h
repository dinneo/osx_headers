//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CLLocationManagerDelegate.h"

@class CLLocation, CLLocationManager, MKImageView, MKMapItem, MKUILabel, NSArray, NSColor, NSMutableArray, NSString;

@interface _MKResultView : NSView <CLLocationManagerDelegate>
{
    NSArray *_mapItems;
    CLLocation *_referenceLocation;
    BOOL _alwaysUsesBusinessLayout;
    int _layoutType;
    id <_MKResultViewDelegate> delegate;
    BOOL _selected;
    BOOL _showsDistance;
    NSMutableArray *_resultConstraints;
    CLLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    MKUILabel *_nameLabel;
    MKUILabel *_secondaryLabel;
    MKUILabel *_tertiaryLabel;
    id <_MKResultViewDelegate> _delegate;
    double _fallbackDistance;
    NSColor *_primaryTextColor;
    NSColor *_secondaryTextColor;
    MKImageView *_imageView;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) MKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) NSColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) double fallbackDistance; // @synthesize fallbackDistance=_fallbackDistance;
@property(nonatomic) __weak id <_MKResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL alwaysUsesBusinessLayout; // @synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout;
@property(retain, nonatomic) MKUILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(retain, nonatomic) MKUILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) MKUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)mouseUp:(id)arg1;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(retain, nonatomic) NSString *secondaryLabelText;
@property(retain, nonatomic) NSString *primaryLabelText;
@property(retain, nonatomic) NSArray *mapItems;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)updateSubviews;
- (double)_expectedHeightForLabels;
- (id)_defaultSecondaryCategoryLabel;
- (unsigned long long)_maxNameLengthForEndingString:(id)arg1;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (id)_defaultPrimaryCategoryLabel;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)addLabelIfNecessary:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) double preferredHeight;
- (void)updateConstraints;
- (void)dealloc;
- (void)_updateSecondaryColors;
- (void)_updatePrimaryColors;
- (void)_updateColors;
@property(nonatomic) BOOL showsDistance;
@property(nonatomic) BOOL selected;
- (id)_labelWithFontSize:(double)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 highlightsOnTouch:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
