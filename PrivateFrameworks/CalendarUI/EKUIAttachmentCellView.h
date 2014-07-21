//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class EKAttachment, NSTextField;

@interface EKUIAttachmentCellView : NSTableCellView
{
    NSTextField *_fileNameField;
    EKAttachment *_attachment;
}

@property(retain) EKAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain) NSTextField *fileNameField; // @synthesize fileNameField=_fileNameField;
- (void).cxx_destruct;
- (double)visibleWidth;
- (struct CGSize)fileIconSize;
- (void)setBackgroundStyle:(long long)arg1;
- (id)initWithAttachemnt:(id)arg1 andFont:(id)arg2;
- (BOOL)allowsVibrancy;

@end

