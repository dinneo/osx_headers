//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TInfoWindowViewController.h"

@class TPropertyExtensionHiddenController, TPropertyRawNameController;

@interface TInfoWindowNameViewController : TInfoWindowViewController
{
    TPropertyRawNameController *_nameController;
    TPropertyExtensionHiddenController *_hideExtensionController;
}

+ (id)controller;
- (unsigned int)scriptingID;
- (void)loadValueControllers;
- (id)expandedPrefKey;

@end
