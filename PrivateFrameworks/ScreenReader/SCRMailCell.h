//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRCell.h>

__attribute__((visibility("hidden")))
@interface SCRMailCell : SCRCell
{
}

+ (id)_contentElementDescendantOfElement:(id)arg1;
- (void)addElementSummaryToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (void)addCellLabelToRequest:(id)arg1;
- (void)_addDetailedMessageDescriptionToRequest:(id)arg1;
- (id)_senderElement;
- (id)_contentElement;
- (id)reorderedChildrenForSummaryDescription:(id)arg1;
- (unsigned long long)_speakingPriorityOfID:(id)arg1;

@end

