//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class MainSplitView, MainWindowTitleCell, NSString;

@interface MainWindow : NSWindow
{
    MainSplitView *_mainSplitView;
    MainWindowTitleCell *_titleCell;
}

+ (id)keyPathsForValuesAffectingTitleStatus;
@property(retain, nonatomic) MainWindowTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(nonatomic) __weak MainSplitView *mainSplitView; // @synthesize mainSplitView=_mainSplitView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titleStatus;
- (double)animationResizeTime:(struct CGRect)arg1;
- (void)_mainWindowCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

