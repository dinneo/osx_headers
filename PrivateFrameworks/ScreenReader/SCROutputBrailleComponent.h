//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCROutputTextDisplayComponent.h>

@class NSMutableArray, NSMutableAttributedString, NSMutableDictionary, NSMutableSet, NSMutableString, SCRCProcessIdentifier, SCROBrailleClient, SCROBrailleDisplayInputManager;

__attribute__((visibility("hidden")))
@interface SCROutputBrailleComponent : SCROutputTextDisplayComponent
{
    SCROBrailleClient *_brailleClient;
    SCROBrailleDisplayInputManager *_inputManager;
    NSMutableAttributedString *_elementLineString;
    NSMutableAttributedString *_textLineString;
    NSMutableString *_announcementString;
    BOOL _hasElementLine;
    BOOL _hasAlert;
    double _alertTimeout;
    BOOL _alertHasTimeout;
    BOOL _ignoreAlertTimeoutPref;
    int _alertPriority;
    BOOL _hasAnnouncement;
    BOOL _forceAnnouncement;
    BOOL _excludeFromAnnouncments;
    BOOL _needsCleanupWhenNonBlockingActionsAreComplete;
    struct _NSRange _elementLineStringCurrentElementRange;
    struct {
        unsigned char general;
        unsigned char text;
        unsigned char eText;
        char showGeneral;
        char showText;
        char showEText;
        NSMutableDictionary *generalDict;
        NSMutableDictionary *textDict;
        NSMutableDictionary *eTextDict;
    } _status;
    NSMutableArray *_lineCache;
    SCRCProcessIdentifier *_currentApplicationPSN;
    NSMutableSet *_currentElementIDSet;
    unsigned long long _activeDisplayCount;
    int _primaryDisplayToken;
    int _inputAccessMode;
    int _lineFocus;
}

+ (void)initialize;
- (void)_dispatchBrailleDidPanWithSuccess:(id)arg1 token:(id)arg2 appToken:(id)arg3 direction:(int)arg4;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBraillePlayCommandNotSupportedSound;
- (void)handleBraillePlayBorderHitSound;
- (void)handleBraillePlayDisplayConnectionSound:(id)arg1;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleBrailleDidReconnect:(id)arg1;
- (void)handleBrailleDidDisconnect:(id)arg1;
- (void)handleBrailleConfigurationChanged:(id)arg1;
- (void)handleBrailleKeypress:(id)arg1;
- (void)_handleBrailleDisplayKeypress:(id)arg1;
- (BOOL)handleBrailleInputCommand:(id)arg1 withInfo:(id)arg2;
- (void)_handleBrailleKeyboardHelp:(id)arg1;
- (void)handleEvent:(id)arg1;
- (BOOL)_isAnnouncementForCategory:(id)arg1 variants:(id)arg2 isAlert:(char *)arg3 alertHasTimeout:(char *)arg4 ignoreTimeoutPrefs:(char *)arg5 alertPriority:(int *)arg6 force:(char *)arg7;
- (void)nonBlockingActionsAreComplete;
- (void)_displayConfigurationDidChange;
- (int)preflightSequentialSteps:(id)arg1 runnerName:(id)arg2;
- (void)_showExpandedStatusForStatusCellIndex:(long long)arg1;
- (void)_setTextCellsWithTextAttributes:(id)arg1;
- (void)_updateStatusCells;
- (void)_updateStatusCellPrefs;
- (void)_initializeExpandedStatusCellDictionaries;
- (void)_releaseLineWithApplicationPSN:(id)arg1 elementIDs:(id)arg2;
- (void)_releaseLineWithApplicationPSN:(id)arg1 elementID:(id)arg2;
- (void)_cacheLineWithApplicationPSN:(id)arg1 elementIDs:(id)arg2;
- (void)_flushCache;
- (void)dealloc;
- (id)init;

@end
