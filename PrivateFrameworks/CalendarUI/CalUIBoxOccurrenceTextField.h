//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/CalUIFontSmoothedTextField.h>

@interface CalUIBoxOccurrenceTextField : CalUIFontSmoothedTextField
{
    BOOL _cachedIntrinsicContentSizeIsValid;
    struct CGSize _cachedIntrinsicContentSize;
}

@property BOOL cachedIntrinsicContentSizeIsValid; // @synthesize cachedIntrinsicContentSizeIsValid=_cachedIntrinsicContentSizeIsValid;
@property struct CGSize cachedIntrinsicContentSize; // @synthesize cachedIntrinsicContentSize=_cachedIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end
