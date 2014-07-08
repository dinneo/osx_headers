//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

@class NSArray, NSString;

@interface FBLanguagePicker : NSMenu
{
    BOOL _supportsCustomText;
    NSArray *_languages;
    NSString *_selectedLanguageTag;
}

@property BOOL supportsCustomText; // @synthesize supportsCustomText=_supportsCustomText;
@property(copy) NSString *selectedLanguageTag; // @synthesize selectedLanguageTag=_selectedLanguageTag;
@property(copy) NSArray *languages; // @synthesize languages=_languages;
- (void)selectLanguageWithTag:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)resetWithFaces:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (BOOL)_shouldAddLanguage:(id)arg1;
- (void)_selectLanguage:(id)arg1;
- (id)_pickLanguageForFaces:(id)arg1 languageSetSelector:(SEL)arg2 actionSelector:(SEL)arg3;
- (id)_languagesForFaces:(id)arg1 languageSetSelector:(SEL)arg2 actionSelector:(SEL)arg3;

@end
