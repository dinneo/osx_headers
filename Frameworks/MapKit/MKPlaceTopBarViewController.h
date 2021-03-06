//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MKMapItem, _MKPlaceViewController;

@interface MKPlaceTopBarViewController : NSViewController
{
    BOOL _showShareButton;
    _MKPlaceViewController *owner;
    MKMapItem *mapItem;
    id shareButton;
}

@property(retain, nonatomic) id shareButton; // @synthesize shareButton;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner;
@property(nonatomic) BOOL showShareButton; // @synthesize showShareButton=_showShareButton;
- (void).cxx_destruct;
- (void)computeDirections:(id)arg1;
- (void)share:(id)arg1;
- (id)nibBundle;
- (id)nibName;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

