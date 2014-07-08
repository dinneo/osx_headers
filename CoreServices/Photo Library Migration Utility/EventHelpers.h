//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EventHelpers : NSObject
{
}

+ (id)makeFilterAlbumFromDB:(id)arg1 withAlbumKeys:(id)arg2 withEventKeys:(id)arg3 withPersonKeys:(id)arg4;
+ (void)autoSplitPhotos:(struct IPPhotoList *)arg1 selectResult:(BOOL)arg2 preflightOnly:(BOOL)arg3 moveAfterEvent:(unsigned long long)arg4;
+ (void)_undoAutoSplitEventsForPhotos:(id)arg1 originalRolls:(id)arg2 newRolls:(id)arg3 firstRollKey:(unsigned long long)arg4 firstKeyPhotoKey:(unsigned long long)arg5 undoManager:(id)arg6 selection:(id)arg7;
+ (void)_redoAutoSplitEventsForPhotos:(id)arg1 originalRolls:(id)arg2 newRolls:(id)arg3 firstRollKey:(unsigned long long)arg4 firstKeyPhotoKey:(unsigned long long)arg5 undoManager:(id)arg6 selection:(id)arg7;
+ (void)coalescePhotos:(struct IPPhotoList *)arg1;
+ (int)upgradeSplitModePicker:(struct IPPhotoList *)arg1;
+ (BOOL)smartNameAlbum:(id)arg1 forRollKeys:(id)arg2;

@end
