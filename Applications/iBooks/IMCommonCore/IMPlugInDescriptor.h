//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSDictionary, NSString;

@interface IMPlugInDescriptor : NSObject
{
    NSString *_bundlePath;
    NSDictionary *_plugInDescription;
    NSBundle *_bundle;
    Class _plugInClass;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)bundle;
- (Class)plugInClass;
- (id)plugInDescription;
- (id)initWithDescription:(id)arg1 bundlePath:(id)arg2;

@end
