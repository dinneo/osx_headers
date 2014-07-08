//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SGTSearchField.h"

#import "NSDraggingDestination.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NVDropTargetSearchField : SGTSearchField <NSDraggingDestination>
{
    id <NVDropTargetSearchFieldDelegate> _dragAndDropDelegate;
}

@property(nonatomic) __weak id <NVDropTargetSearchFieldDelegate> dragAndDropDelegate; // @synthesize dragAndDropDelegate=_dragAndDropDelegate;
- (void).cxx_destruct;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
