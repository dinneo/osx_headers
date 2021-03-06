//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSPopover, NSTextField, WebBookmark;

__attribute__((visibility("hidden")))
@interface BookmarkAddressEditingPopoverViewController : NSViewController
{
    WebBookmark *_bookmark;
    NSTextField *_addressField;
    NSPopover *_popover;
}

@property(readonly, nonatomic) NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak NSTextField *addressField; // @synthesize addressField=_addressField;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)doneEditing:(id)arg1;
- (void)loadView;
- (id)initWithBookmark:(id)arg1;

@end

