//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IPGenerateThumbsOperation;

@protocol IPGenerateThumbsDelegate <NSObject>

@optional
- (void)didGenerateThumbsForOperation:(IPGenerateThumbsOperation *)arg1 finished:(BOOL)arg2;
- (void)photo:(struct IPPhotoInfo *)arg1 processedState:(int)arg2 byOperation:(IPGenerateThumbsOperation *)arg3;
- (void)willGenerateThumbsForOperation:(IPGenerateThumbsOperation *)arg1;
@end

