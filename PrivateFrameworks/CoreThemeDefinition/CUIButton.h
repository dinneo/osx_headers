//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@interface CUIButton : NSButton
{
    BOOL _buttonPressed;
}

+ (void)initialize;
@property(nonatomic, getter=isButtonPressed) BOOL buttonPressed; // @synthesize buttonPressed=_buttonPressed;
- (void)mouseDown:(id)arg1;
- (BOOL)hasMouse;

@end
