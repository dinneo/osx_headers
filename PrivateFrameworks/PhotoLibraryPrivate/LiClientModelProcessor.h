//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiClientIPCProcessor.h>

@interface LiClientModelProcessor : LiClientIPCProcessor
{
}

- (unsigned long long)handleDeleteModel:(id)arg1;
- (unsigned long long)handleUpdateModel:(id)arg1;
- (unsigned long long)handleInsertModel:(id)arg1;
- (unsigned long long)handleLoadFilter:(id)arg1;
- (unsigned long long)handleLoadQuery:(id)arg1;
- (unsigned long long)handleLoad:(id)arg1;
- (void)processLoadModelReply:(id)arg1 withBucketProcessor:(CDUnknownBlockType)arg2 forTableId:(unsigned long long)arg3 onQueue:(id)arg4;
- (unsigned long long)onProcessCommand:(id)arg1;

@end

