//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemoteDBState.h"

@interface RemoteFSDBState : RemoteDBState
{
    struct timespec _modDate;
    long long _dataSize;
}

@property(nonatomic) long long dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) struct timespec modDate; // @synthesize modDate=_modDate;

@end

