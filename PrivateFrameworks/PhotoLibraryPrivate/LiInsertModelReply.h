//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiReply.h>

@interface LiInsertModelReply : LiReply
{
    unsigned long long _modelId;
}

@property(readonly, nonatomic) unsigned long long modelId; // @synthesize modelId=_modelId;
- (void)encodeToConsumer:(id)arg1 forLibrary:(id)arg2;
- (id)initWithDataProvider:(id)arg1 forLibrary:(id)arg2;
- (int)LiClassCode;
- (id)initWithReplyStatus:(unsigned char)arg1 forRequest:(id)arg2 modelId:(unsigned long long)arg3;

@end

