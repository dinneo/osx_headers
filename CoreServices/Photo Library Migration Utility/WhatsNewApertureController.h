//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMAFirstLaunchDelegate.h"

@class NSTextField, NSWindow;

@interface WhatsNewApertureController : NSObject <TMAFirstLaunchDelegate>
{
    NSWindow *_apertureCompatiblePanel;
    NSTextField *_headingText;
    NSTextField *_descriptionText;
    NSTextField *_learnMoreText;
    BOOL _closing;
    long long _whatsNewMode;
}

+ (void)_updateIntegratedWhatsNewShown;
+ (void)_updateSplashDisplayVersion;
+ (BOOL)shouldDisplay;
+ (BOOL)isApertureInstalled;
+ (void)displayInMode:(long long)arg1;
- (double)firstLaunchFeaturesContentWidth;
- (id)firstLaunchFeatureItemCaptionStrings;
- (id)firstLaunchFeatureItemHeadingStrings;
- (id)firstLaunchFeaturesTitleString;
- (id)firstLaunchWelcomeSubtitleString;
- (id)firstLaunchWelcomeTitleString;
- (id)firstLaunchGetStartedButtonTitleString;
- (id)firstLaunchContinueButtonTitleString;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;
- (void)_displayNow;
- (void)stylizeSubhead;
- (void)stylizeHeading;
- (id)stylizedTextShadow;
- (void)windowWillClose:(id)arg1;
- (void)a_learnMore:(id)arg1;
- (void)a_close:(id)arg1;
- (BOOL)isClosing;
- (id)mainDocumentWindow;

@end
