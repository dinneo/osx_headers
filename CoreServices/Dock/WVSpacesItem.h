//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray, NSString, WVSpace;

@interface WVSpacesItem : NSObject
{
    WVSpace *_space;
    NSArray *_windows;
    CALayer *_layer;
    id _badge;
    float _scaleFactor;
    NSString *_title;
    NSString *_truncatedTitle;
}

@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(copy, nonatomic) NSString *truncatedTitle; // @synthesize truncatedTitle=_truncatedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(retain, nonatomic) NSArray *windows; // @synthesize windows=_windows;
@property(retain, nonatomic) WVSpace *space; // @synthesize space=_space;
- (void).cxx_destruct;
@property(retain, nonatomic) id badge; // @dynamic badge;
@property(nonatomic) id miniContents;
@property(nonatomic) id contents;
@property(nonatomic) NSString *category;
- (id)initWithSpace:(id)arg1 title:(id)arg2 andWindows:(id)arg3 usingScaleFactor:(float)arg4;

@end
