//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLSession, PRSImage;

@protocol PRSImageSource <NSObject>
- (void)getImageWithIdentifier:(NSString *)arg1 block:(void (^)(NSImage *))arg2;

@optional
- (NSURLSession *)urlSessionForImage:(PRSImage *)arg1;
@end
