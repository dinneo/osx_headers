//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABGroupEntry;

@interface ABGroupDropScope : NSObject
{
    id <NSDraggingInfo> _draggingInfo;
    ABGroupEntry *_droppedEntry;
    long long _childIndex;
    ABGroupEntry *_selectedEntry;
}

@property(readonly) ABGroupEntry *selectedEntry; // @synthesize selectedEntry=_selectedEntry;
@property(readonly) long long childIndex; // @synthesize childIndex=_childIndex;
@property(readonly) ABGroupEntry *droppedEntry; // @synthesize droppedEntry=_droppedEntry;
@property(readonly) id <NSDraggingInfo> draggingInfo; // @synthesize draggingInfo=_draggingInfo;
- (id)description;
- (void)dealloc;
- (id)initWithDraggingInfo:(id)arg1 droppedEntry:(id)arg2 childIndex:(long long)arg3 selectedEntry:(id)arg4;

@end
