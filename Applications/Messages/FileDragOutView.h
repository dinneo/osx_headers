//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class FileTransfer;

@interface FileDragOutView : NSImageView
{
    FileTransfer *_file;
    id <FileDragOutViewDelegate> _delegate;
    struct CGPoint _clickLoc;
}

- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (id)file;
- (void)setFile:(id)arg1;
- (void)_updateImage;
- (void)setDelegate:(id)arg1;

@end
