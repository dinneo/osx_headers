//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInspectorBar, NSInspectorBarItem, NSString;

@protocol NSInspectorBarDelegate <NSObject>

@optional
- (NSInspectorBarItem *)inspectorBar:(NSInspectorBar *)arg1 shouldLayoutItem:(NSInspectorBarItem *)arg2;
- (NSInspectorBarItem *)inspectorBar:(NSInspectorBar *)arg1 itemForIdentifier:(NSString *)arg2;
@end
