//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSCopying.h"

@class ImageDB, PersonCompletionMenuCell;

@interface PersonCompletionMenuView : NSView <NSCopying>
{
    PersonCompletionMenuCell *_cell;
    ImageDB *_db;
}

@property(retain, nonatomic) ImageDB *db; // @synthesize db=_db;
@property(retain, nonatomic) PersonCompletionMenuCell *cell; // @synthesize cell=_cell;
- (void)mouseUp:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

