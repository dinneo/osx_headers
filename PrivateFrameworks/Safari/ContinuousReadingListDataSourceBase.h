//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ContinuousReadingListDataSourceBase : NSObject
{
    id <ReadingListTableViewContentProvider> _contentProvider;
}

+ (id)continuousReadingListPageItemForReadingListItem:(id)arg1;
@property(readonly, retain, nonatomic) id <ReadingListTableViewContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (void).cxx_destruct;
- (id)continuousReadingListPageItemFollowingPageItem:(id)arg1;
- (id)continuousReadingListPageItemPrecedingPageItem:(id)arg1;
- (id)initWithReadingListTableViewContentProvider:(id)arg1;

@end
