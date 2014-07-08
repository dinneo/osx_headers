//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSMatrix, NSString, NSTextField, NSView, NSWindow;

@interface NSPrefInstallAssistant : NSObject
{
    NSWindow *mAssistantWindow;
    NSMatrix *mInstallLocationMatrix;
    NSTextField *mCaptionText;
    NSTextField *mNoteText;
    NSView *mOptionsView;
    NSBundle *mBundle;
    NSString *mInstallPath;
    NSWindow *mHostWindow;
}

+ (id)locString:(id)arg1 withParameter:(id)arg2 andParameter:(id)arg3;
+ (id)extentsionsDict;
- (void)checkAndFixVersionCue;
- (id)installPath;
- (void)cancel:(id)arg1;
- (void)install:(id)arg1;
- (void)installLocationDidChange:(id)arg1;
- (BOOL)uninstall:(id)arg1;
- (id)install:(id)arg1 shared:(BOOL)arg2;
- (void)beginForWindow:(id)arg1 path:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)awakeFromNib;
- (id)_doInstall:(id)arg1 shared:(BOOL)arg2 outError:(long long *)arg3;
- (void)_close:(long long)arg1;
- (id)_installPathForExtension:(id)arg1 shared:(BOOL)arg2;
- (void)_invokeInstallAssistantWithBlock:(CDUnknownBlockType)arg1;

@end
