//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCActivityMonitor;

@interface _MFProgressHandlerMonitorContext : NSObject
{
    id <MFQueryProgressMonitor> _progressMonitor;
    MCActivityMonitor *_activityMonitor;
}

@property(nonatomic) __weak MCActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(nonatomic) __weak id <MFQueryProgressMonitor> progressMonitor; // @synthesize progressMonitor=_progressMonitor;
- (void).cxx_destruct;
- (BOOL)shouldCancel;

@end

