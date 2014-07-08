//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AliasSelectionViewController, CreateAccountViewController, EnableAccountViewController, ModernSignInViewController, PersonListViewController, RegionSelectionViewController;

@interface SideViewController : NSViewController
{
    BOOL _isTransitioning;
    PersonListViewController *_personListVC;
    ModernSignInViewController *_signInVC;
    EnableAccountViewController *_enableVC;
    AliasSelectionViewController *_aliasVC;
    RegionSelectionViewController *_regionVC;
    CreateAccountViewController *_createVC;
    NSViewController *_currentVC;
}

+ (id)sharedInstance;
+ (void)configureButton:(id)arg1 withFont:(id)arg2;
@property(nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) NSViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) CreateAccountViewController *createVC; // @synthesize createVC=_createVC;
@property(retain, nonatomic) RegionSelectionViewController *regionVC; // @synthesize regionVC=_regionVC;
@property(retain, nonatomic) AliasSelectionViewController *aliasVC; // @synthesize aliasVC=_aliasVC;
@property(retain, nonatomic) EnableAccountViewController *enableVC; // @synthesize enableVC=_enableVC;
@property(retain, nonatomic) ModernSignInViewController *signInVC; // @synthesize signInVC=_signInVC;
@property(retain, nonatomic) PersonListViewController *personListVC; // @synthesize personListVC=_personListVC;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_transitionFrom:(id)arg1 to:(id)arg2 transition:(unsigned long long)arg3;
- (void)showPersonList;
- (void)showCreateAccount;
- (void)showRegionSelection;
- (void)showAliasSelection;
- (void)showEnableAccount;
- (void)showSignIn;
- (void)setSignInCredentials:(id)arg1 password:(id)arg2;
- (void)_cleanupSignInVCs;
- (void)_setupSignInVCs;
- (void)keyDown:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
