//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAnimation.h"

@class NSSet;

@interface CalUILayerOpacityAnimation : NSAnimation
{
    double _startOpacity;
    double _endOpacity;
    NSSet *_layers;
}

@property(retain) NSSet *layers; // @synthesize layers=_layers;
@property double endOpacity; // @synthesize endOpacity=_endOpacity;
@property double startOpacity; // @synthesize startOpacity=_startOpacity;
- (void).cxx_destruct;
- (void)setLayersOpacity:(double)arg1;
- (void)startAnimation;
- (void)setCurrentProgress:(float)arg1;

@end
