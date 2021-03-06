//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AlbumViewItemProtocol.h"

@class IPHProgressIndicator;

@protocol AlbumViewItemWithProgressProtocol <AlbumViewItemProtocol>
- (BOOL)setProgressValue:(double)arg1;
- (double)progressValue;
- (void)setProgressIndicator:(IPHProgressIndicator *)arg1;
- (Class)progressIndicatorClass;
- (IPHProgressIndicator *)progressIndicator;
- (BOOL)wantsProgress;
@end

