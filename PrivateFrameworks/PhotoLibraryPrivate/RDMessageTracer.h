//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiLibrary, NSString;

@interface RDMessageTracer : NSObject
{
    LiLibrary *_library;
    double _startTime;
    char _libraryVersion_string[20];
    NSString *_domain;
}

@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1;
- (void)changeDomain:(id)arg1;
- (void)setLibrary:(id)arg1;
- (id)initWithLibrary:(id)arg1;
- (id)init;
- (void)upgradeTraceEnd:(id)arg1;
- (void)upgradeTraceStart;

@end

