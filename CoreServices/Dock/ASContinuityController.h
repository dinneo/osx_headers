//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSBestAppSuggestionManagerDelegate.h"

@class ASContinuityBestApplication, LSBestAppSuggestion, LSBestAppSuggestionManager, NSObject<OS_dispatch_queue>, NSString;

@interface ASContinuityController : NSObject <LSBestAppSuggestionManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    LSBestAppSuggestionManager *_suggestionManager;
    LSBestAppSuggestion *_fetchingAppSuggestion;
    NSString *_fetchingIdentifier;
    ASContinuityBestApplication *_bestApplication;
}

@property(readonly, nonatomic) ASContinuityBestApplication *bestApplication; // @synthesize bestApplication=_bestApplication;
- (void).cxx_destruct;
- (void)_suggestionChanged:(id)arg1 fetchingIdentifier:(id)arg2;
- (void)connectionInterrupted;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)launch:(id)arg1 from:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

