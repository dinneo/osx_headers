//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface TypingStyleChoice : NSObject
{
    BOOL _dependent;
    BOOL _selectable;
    NSString *_name;
    NSNumber *_state;
}

@property BOOL selectable; // @synthesize selectable=_selectable;
@property BOOL dependent; // @synthesize dependent=_dependent;
@property(retain) NSNumber *state; // @synthesize state=_state;
@property(copy) NSString *name; // @synthesize name=_name;

@end

