//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AlbumSelectableHolder : NSObject
{
    struct IPAlbumSelectable *mAlbum;
    BOOL mDeleteOnDealloc;
}

+ (id)hold:(struct IPAlbumSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;
+ (id)hold:(struct IPAlbumSelectable *)arg1;
- (struct IPAlbumSelectable *)album;
- (void)dealloc;
- (id)initWithAlbum:(struct IPAlbumSelectable *)arg1 deleteOnDealloc:(BOOL)arg2;

@end
