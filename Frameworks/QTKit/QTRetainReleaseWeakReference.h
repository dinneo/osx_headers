//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <QTKit/QTWeakReference.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QTRetainReleaseWeakReference : QTWeakReference
{
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (id)referencedObject;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithReferencedObject:(id)arg1;

@end

