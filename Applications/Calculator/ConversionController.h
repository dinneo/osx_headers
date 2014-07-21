//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLDownloadDelegate.h"

@class NSArray, NSButton, NSDictionary, NSMutableArray, NSMutableString, NSPopUpButton, NSString, NSTextField;

@interface ConversionController : NSObject <NSURLDownloadDelegate>
{
    id mConversionSheet;
    NSPopUpButton *mConvertFromPopup;
    NSPopUpButton *mConvertToPopup;
    NSPopUpButton *mConversionTypePopup;
    NSButton *mConvertButton;
    NSButton *mCancelButton;
    NSButton *mUpdateButton;
    NSTextField *mLastUpdatedTextField;
    NSTextField *mLegalText;
    NSButton *mAttributionButton;
    id <ConversionDelegate> _delegate;
    NSMutableArray *_recentConversions;
    NSArray *mConversionCategries;
    NSDictionary *mConvertToBaseDict;
    NSDictionary *mConvertFromBaseDict;
    NSDictionary *mCurrencyDict;
    NSString *mRatesCachePath;
    NSString *mTempDownloadFilePath;
    NSMutableString *mTimestamp;
    unsigned long long mUUID;
}

@property(readonly) NSArray *categories; // @synthesize categories=mConversionCategries;
@property(readonly) NSArray *recentConversions; // @synthesize recentConversions=_recentConversions;
- (BOOL)validateAndMoveNewCurrencyRateData;
- (id)getPathForFinancialRatesXML;
- (void)browseRatesWebsite:(id)arg1;
- (void)updateCurrencyRates:(id)arg1;
- (void)conversionToPopupDidChange:(id)arg1;
- (void)conversionFromPopupDidChange:(id)arg1;
- (void)conversionTypePopupDidChange:(id)arg1;
- (void)okayConvertSheet:(id)arg1;
- (void)cancelConvertSheet:(id)arg1;
- (void)prepareConversion:(id)arg1;
- (id)sortedCategoryNames;
- (BOOL)validateMenuItem:(id)arg1;
- (void)showOrHideCaveatsForKey:(id)arg1;
- (void)populateConvertPopupsForKey:(id)arg1;
- (BOOL)updateCurrencyDictFromFileAtPath:(id)arg1 locale:(id)arg2;
- (BOOL)recentConversionsAreClearable;
- (id)attributedStringFromDateString:(id)arg1;
- (void)clearRecentConversions;
- (void)saveRecentConversions;
- (void)addRecentConversion:(id)arg1;
- (void)executeConversion:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)downloadDidFinish:(id)arg1;
- (void)download:(id)arg1 didFailWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

