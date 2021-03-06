//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSAttributedString, NSCorrectionShadowView, NSCorrectionTextView, NSCorrectionTypedTextHighlightView, NSDictionary, NSMutableArray, NSString, NSView;

__attribute__((visibility("hidden")))
@interface NSCorrectionPanel : NSPanel
{
    NSView *hostView;
    struct CGRect boundingBoxInHostView;
    NSCorrectionTypedTextHighlightView *typedTextView;
    NSCorrectionTextView *correctionView;
    NSCorrectionShadowView *shadowView;
    NSPanel *correctionSubPanel;
    CDUnknownBlockType completionHandler;
    CDUnknownBlockType stringCompletionHandler;
    BOOL useDefaultWindowShadow;
    NSAttributedString *primaryCandidate;
    NSMutableArray *alternativeCandidates;
    BOOL dismissedExternally;
}

+ (id)sharedCorrectionPanel;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (void)dismiss;
- (void)dismissAndAccept:(BOOL)arg1;
- (void)_doDismissAndAccept:(id)arg1;
- (void)removeFromWindow;
@property(readonly) long long correctionPanelType;
@property(readonly) NSString *correction; // @dynamic correction;
@property(copy) NSDictionary *correctionAttributes; // @dynamic correctionAttributes;
@property BOOL useDefaultStringAttributes; // @dynamic useDefaultStringAttributes;
- (void)showPanelAtRect:(struct CGRect)arg1 inView:(id)arg2 primaryString:(id)arg3 alternativeStrings:(id)arg4 forType:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_interceptEvents;
- (void)_dismissAndAccept:(BOOL)arg1;
- (void)_updateCorrectionViewForPanelType:(long long)arg1 inView:(id)arg2;
- (void)showPanelAtRect:(struct CGRect)arg1 inView:(id)arg2 withReplacement:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showPanelAtRect:(struct CGRect)arg1 inView:(id)arg2 withReplacement:(id)arg3 forType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_adjustLayoutForView:(id)arg1;
- (BOOL)_shouldCorrectionViewBeAtBottom:(double)arg1 highlightRect:(struct CGRect)arg2 inScreenVisibleRect:(struct CGRect)arg3;
- (struct CGRect)_highlightRectForTypedText:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 backing:(unsigned long long)arg2 defer:(BOOL)arg3;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

