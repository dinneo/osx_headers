//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSPredicateEditor;

@interface FBPredicateEditorWindowController : NSWindowController
{
    NSPredicateEditor *_editor;
}

@property(readonly, retain) NSPredicateEditor *editor; // @synthesize editor=_editor;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (void)_rowsDidChange:(id)arg1;

@end
