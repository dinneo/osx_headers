//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSStackView.h"

@class NSButton, NSData;

@interface IMButtonStackView : NSStackView
{
    NSButton *_prototype;
    long long _selectedTag;
    NSData *_prototypeData;
}

+ (id)selectedColor;
+ (id)unselectedColor;
@property(retain, nonatomic) NSData *prototypeData; // @synthesize prototypeData=_prototypeData;
@property(nonatomic) long long selectedTag; // @synthesize selectedTag=_selectedTag;
@property(nonatomic) __weak NSButton *prototype; // @synthesize prototype=_prototype;
- (void).cxx_destruct;
- (void)p_delegateDidDeselectButtonWithTag:(long long)arg1;
- (void)p_delegateDidSelectButtonWithTag:(long long)arg1;
- (void)buttonClicked:(id)arg1;
- (id)buttonWithTag:(long long)arg1;
- (void)removeButtonWithTag:(long long)arg1;
- (void)addButtonWithTag:(long long)arg1 title:(id)arg2;
- (id)init;

// Remaining properties
@property __weak id <IMButtonStackViewDelegate> delegate;

@end

