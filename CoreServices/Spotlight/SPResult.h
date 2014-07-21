//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSPasteboardWriting.h"
#import "PRSPredictionSupport.h"
#import "QLSeamlessOpenerDelegate.h"

@class NSArray, NSDate, NSImage, NSNumber, NSString, NSURL;

@interface SPResult : NSObject <NSPasteboardWriting, QLSeamlessOpenerDelegate, NSCopying, PRSPredictionSupport>
{
    long long _retainCount;
    unsigned long long _matchBits;
    BOOL doesContentMatch;
    BOOL resultLocationInteresting;
    BOOL phraseMatch;
    BOOL keyWordMatch;
    BOOL isPremium;
    BOOL isTopHit;
    BOOL isPredictedTopHit;
    BOOL queryLastLaunched;
    BOOL queryEverLaunched;
    BOOL isAlternateNameMatch;
    BOOL isDisplayNameMatch;
    BOOL _autoLaunch;
    BOOL _isFolderQuery;
    NSString *type;
    NSString *title;
    unsigned long long engagementScore;
    unsigned long long displayNameMatchScore;
    unsigned long long alternateNameMatchScore;
    double lastUsedTime;
    unsigned long long usedCount;
    unsigned long long predicted;
    unsigned long long queryIndependentScore;
    NSString *categoryForCP;
    NSString *_contentType;
    NSString *_displayName;
    NSString *_distinguishPathString;
    unsigned long long _rank;
    NSString *_filePath;
}

@property(readonly) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly) unsigned long long rank; // @synthesize rank=_rank;
@property(retain) NSString *distinguishPathString; // @synthesize distinguishPathString=_distinguishPathString;
@property BOOL isFolderQuery; // @synthesize isFolderQuery=_isFolderQuery;
@property(getter=isAutoLaunch) BOOL autoLaunch; // @synthesize autoLaunch=_autoLaunch;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) BOOL isDisplayNameMatch; // @synthesize isDisplayNameMatch;
@property(nonatomic) BOOL isAlternateNameMatch; // @synthesize isAlternateNameMatch;
@property(nonatomic) BOOL queryEverLaunched; // @synthesize queryEverLaunched;
@property(nonatomic) BOOL queryLastLaunched; // @synthesize queryLastLaunched;
@property(retain, nonatomic) NSString *categoryForCP; // @synthesize categoryForCP;
@property(nonatomic) BOOL isPredictedTopHit; // @synthesize isPredictedTopHit;
@property(nonatomic) unsigned long long queryIndependentScore; // @synthesize queryIndependentScore;
@property(nonatomic) BOOL isTopHit; // @synthesize isTopHit;
@property(nonatomic) BOOL isPremium; // @synthesize isPremium;
@property(nonatomic) unsigned long long predicted; // @synthesize predicted;
@property(nonatomic) unsigned long long usedCount; // @synthesize usedCount;
@property(nonatomic) BOOL keyWordMatch; // @synthesize keyWordMatch;
@property(nonatomic) BOOL phraseMatch; // @synthesize phraseMatch;
@property(nonatomic) BOOL resultLocationInteresting; // @synthesize resultLocationInteresting;
@property(nonatomic) double lastUsedTime; // @synthesize lastUsedTime;
@property(nonatomic) unsigned long long alternateNameMatchScore; // @synthesize alternateNameMatchScore;
@property(nonatomic) unsigned long long displayNameMatchScore; // @synthesize displayNameMatchScore;
@property(nonatomic) BOOL doesContentMatch; // @synthesize doesContentMatch;
@property(nonatomic) unsigned long long engagementScore; // @synthesize engagementScore;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
- (void)setCategory:(id)arg1;
@property(readonly) NSString *category;
- (id)valueForAttribute:(id)arg1;
@property unsigned long long score;
- (unsigned long long)matchQuality;
- (BOOL)isExactMatch;
- (BOOL)isPrefixMatch;
- (id)groupName;
@property(readonly) NSDate *lastUsedDate;
@property(readonly) NSURL *URL;
@property(readonly) NSArray *otherNames;
@property(readonly) NSArray *otherTypes;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL allowsCPRecording;
- (void)prepare;
- (id)initWithContentType:(id)arg1 displayName:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isShowAllInFinderResult;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)setMatchName:(id)arg1;
- (id)valueForAttribute:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)pasteboardObject;
- (id)previewController;
- (BOOL)isCompatibleWithPreviewController:(id)arg1;
- (BOOL)reveal;
- (BOOL)openWithSearchString:(id)arg1;
- (BOOL)open;
- (void)markAsEngaged;
- (void)markAsUsed;
@property(readonly) NSString *targetString;
- (BOOL)allowShowPath;
- (int)qlPreviewMode;
- (id)previewItemURL;
- (id)customPreviewController;
- (id)seamlessOpener:(id)arg1 sourcePreviewViewForPreviewItem:(id)arg2;
- (id)unknownImage;
- (id)safariDocumentImage;
- (id)prefPaneImage;
- (id)contactImage;
@property(readonly) NSNumber *groupId;
- (id)groupHeadingWithTitle:(id)arg1 focusString:(id)arg2;
- (id)title_note;
@property(readonly) NSString *displayInfo;
@property(readonly) NSImage *iconImageForApplication;
@property(readonly) NSImage *iconImage;
@property(readonly) NSURL *fastURL;
@property(readonly) NSString *fastPath;
@property(readonly) NSString *parentPath;
- (BOOL)isPrefixMatchWithName:(id)arg1;
- (BOOL)isExactMatchWithName:(id)arg1;
- (BOOL)isSomewhatRecentlyUsed;
- (BOOL)isRecentlyUsed;
- (BOOL)isVeryRecentlyUsed;
- (BOOL)isUsedWithinDays:(double)arg1;
- (id)customOpenSearchString;
- (unsigned long long)resultOpenOptions;
- (BOOL)isShortcutAllowed;
- (BOOL)shouldNotBeTopHit;
- (BOOL)isTopHitCandidate;
- (BOOL)isLocalResult;
- (BOOL)isCalculation;
- (BOOL)isSafariHistory;
- (BOOL)isEmail;
- (BOOL)isFolder;
- (BOOL)isContact;
- (BOOL)isPrefPane;
- (BOOL)isApplication;
- (BOOL)isIndexingProgress;
- (BOOL)isGroupHeading;
- (BOOL)isFile;
- (BOOL)isSelectable;
- (void)addAdamID:(id)arg1;
- (id)adamID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long topHit;

@end

