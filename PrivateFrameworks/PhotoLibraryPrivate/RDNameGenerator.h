//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RDNameGenerator : NSObject
{
    NSString *m_baseName;
    unsigned long long m_count;
    NSString *m_lastSuggestion;
}

- (void).cxx_destruct;
- (id)nextName;
- (id)baseName;
- (id)initWithName:(id)arg1;

@end

