//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PersonSelectableHolder : NSObject
{
    struct IPPersonSelectable *mPerson;
    BOOL mDeleteOnDealloc;
}

+ (id)hold:(struct IPPersonSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;
+ (id)hold:(struct IPPersonSelectable *)arg1;
- (struct IPPersonSelectable *)person;
- (void)dealloc;
- (id)initWithPerson:(struct IPPersonSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;

@end

