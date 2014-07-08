//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class AbbreviatingTextField, NSExtendedBox, NSString, NSTrackingArea;

@interface ARDPIPButton : NSButton
{
    id _dragDelegate;
    BOOL _remote;
    BOOL _dropDestination;
    NSString *_remoteName;
    NSTrackingArea *_trackingArea;
    NSExtendedBox *_labelBox;
    AbbreviatingTextField *_label;
}

- (BOOL)wantsPeriodicDraggingUpdates;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_springLoad;
- (void)_blink:(int)arg1;
- (void)_doBlink:(BOOL)arg1;
@property(copy) NSString *remoteName;
- (BOOL)isRemote;
- (void)setRemote:(BOOL)arg1;
- (void)_setDropDestination:(BOOL)arg1;
- (void)_setLabelText:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateTracking;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setDragDelegate:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end
