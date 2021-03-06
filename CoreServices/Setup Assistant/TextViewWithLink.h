//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSObject, NSTrackingArea, NSValue;

@interface TextViewWithLink : NSTextView
{
    NSTrackingArea *_linkArea;
    BOOL _mouseIn;
    BOOL _mouseDownIn;
    struct _NSRange _linkRange;
    NSObject *_linkTarget;
    SEL _linkAction;
    NSValue *_linkValue;
}

@property(retain) NSValue *linkValue; // @synthesize linkValue=_linkValue;
@property SEL linkAction; // @synthesize linkAction=_linkAction;
@property(retain) NSObject *linkTarget; // @synthesize linkTarget=_linkTarget;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setAttributedString:(id)arg1 linkFrom:(id)arg2 linkTo:(id)arg3 target:(id)arg4 selector:(SEL)arg5;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

