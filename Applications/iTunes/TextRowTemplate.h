//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@class NSArray, NSPopUpButton, NSTextField;

@interface TextRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_keyPathPopup;
    NSPopUpButton *_operatorPopup;
    NSTextField *_textField;
    NSArray *_completionArray;
}

@property(retain, nonatomic) NSArray *completionArray; // @synthesize completionArray=_completionArray;
@property(readonly) NSTextField *textField; // @synthesize textField=_textField;
@property(readonly) NSPopUpButton *operatorPopup; // @synthesize operatorPopup=_operatorPopup;
@property(readonly) NSPopUpButton *keyPathPopup; // @synthesize keyPathPopup=_keyPathPopup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)loadViewsIfNecessary;

@end

