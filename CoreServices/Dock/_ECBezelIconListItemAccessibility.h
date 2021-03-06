//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ECAccessible.h"

@class ECBezelIconListItemLayer, ECBezelIconListLayer, NSArray, NSString;

@interface _ECBezelIconListItemAccessibility : NSObject <ECAccessible>
{
    ECBezelIconListItemLayer *_itemLayer;
    ECBezelIconListLayer *_listLayer;
    id <ECBezelIconListLayerActions> _delegate;
}

- (void).cxx_destruct;
- (unsigned int)axWindow:(int *)arg1;
@property(readonly, nonatomic) NSArray *axObservers;
- (int)axPerformAction:(id)arg1;
- (id)axActionDescription:(id)arg1 error:(int *)arg2;
@property(readonly, nonatomic) NSArray *axActionNames;
- (int)axSetValue:(id)arg1 forKey:(id)arg2;
- (_Bool)axIsAttributeSettable:(id)arg1 error:(int *)arg2;
- (id)axValueForKey:(id)arg1 error:(int *)arg2;
- (id)_axAttributeAXProgressValue;
- (id)_axAttributeAXStatusLabel;
- (id)_axAttributeAXTitle;
- (id)_axAttributeAXEnabled;
- (id)_axAttributeAXSize;
- (id)_axAttributeAXPosition;
- (id)_axAttributeAXWindow;
- (id)_axAttributeAXTopLevelUIElement;
- (id)_axAttributeAXParent;
- (id)_axAttributeAXHelp;
- (id)_axAttributeAXRoleDescription;
- (id)_axAttributeAXRole;
- (id)axAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxValues:(unsigned long long)arg3 error:(int *)arg4;
- (unsigned long long)axAttributeValueCount:(id)arg1 error:(int *)arg2;
@property(readonly, nonatomic) NSArray *axAttributeNames;
- (id)initWithItemLayer:(id)arg1 bezelListIconLayer:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

