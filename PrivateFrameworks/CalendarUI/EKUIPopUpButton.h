//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

@class EKEventViewController, NSMutableDictionary, NSString;

@interface EKUIPopUpButton : NSPopUpButton
{
    NSString *_deemphasizedString;
    NSMutableDictionary *_abbreviatedTitles;
    double _targetWidth;
    EKEventViewController *_eventViewController;
}

+ (void)setupAppearanceForPopUpButton:(id)arg1 withEventViewController:(id)arg2;
+ (Class)cellClass;
@property __weak EKEventViewController *eventViewController; // @synthesize eventViewController=_eventViewController;
@property double targetWidth; // @synthesize targetWidth=_targetWidth;
@property(retain) NSMutableDictionary *abbreviatedTitles; // @synthesize abbreviatedTitles=_abbreviatedTitles;
@property(retain) NSString *deemphasizedString; // @synthesize deemphasizedString=_deemphasizedString;
- (void).cxx_destruct;
- (BOOL)selectItemWithTag:(long long)arg1;
- (BOOL)canBecomeKeyView;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGSize)buttonSize;
- (id)initWithEventViewController:(id)arg1;
- (BOOL)allowsVibrancy;

@end

