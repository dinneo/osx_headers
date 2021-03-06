//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MKInfoCardReportAProblemController, NSButton, NSView, _MKPlaceViewController;

@interface MKInfoCardFooterViewController : NSViewController
{
    BOOL showAddBookmark;
    BOOL showAddContact;
    BOOL showFlyoverTour;
    _MKPlaceViewController *infoCardViewController;
    MKInfoCardReportAProblemController *reportAProblemController;
    NSView *writeAReviewContainer;
    NSView *directionsToFromHereContainer;
    NSView *dropPinContainer;
    NSView *bookmarkContactsContainer;
    NSButton *flyoverTourButton;
    NSButton *directionsToHereButton;
    NSView *reportAProblemContainer;
}

@property(nonatomic) __weak NSView *reportAProblemContainer; // @synthesize reportAProblemContainer;
@property(nonatomic) __weak NSButton *directionsToHereButton; // @synthesize directionsToHereButton;
@property(nonatomic) __weak NSButton *flyoverTourButton; // @synthesize flyoverTourButton;
@property(nonatomic) __weak NSView *bookmarkContactsContainer; // @synthesize bookmarkContactsContainer;
@property(nonatomic) __weak NSView *dropPinContainer; // @synthesize dropPinContainer;
@property(nonatomic) __weak NSView *directionsToFromHereContainer; // @synthesize directionsToFromHereContainer;
@property(nonatomic) __weak NSView *writeAReviewContainer; // @synthesize writeAReviewContainer;
@property(nonatomic) __weak MKInfoCardReportAProblemController *reportAProblemController; // @synthesize reportAProblemController;
@property(nonatomic) BOOL showFlyoverTour; // @synthesize showFlyoverTour;
@property(nonatomic) BOOL showAddContact; // @synthesize showAddContact;
@property(nonatomic) BOOL showAddBookmark; // @synthesize showAddBookmark;
@property(nonatomic) __weak _MKPlaceViewController *infoCardViewController; // @synthesize infoCardViewController;
- (void).cxx_destruct;
- (id)nibBundle;
- (id)nibName;
- (void)startFlyoverTour:(id)arg1;
- (void)writeAReview:(id)arg1;
- (void)removePin:(id)arg1;
- (void)computeDirections:(id)arg1;
- (void)removeBookmark:(id)arg1;
- (void)addBookmark:(id)arg1;
- (void)addToContacts:(id)arg1;
- (void)insertAndFillView:(id)arg1;
- (void)insertAtBottomOfView:(id)arg1 inView:(id)arg2 constraintToRemove:(id)arg3;
- (void)updateFooterViewForTab:(unsigned long long)arg1;

@end

