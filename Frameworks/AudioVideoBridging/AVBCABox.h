//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVBCAObject.h>

@class NSArray, NSString;

@interface AVBCABox : AVBCAObject
{
}

@property(readonly, nonatomic, getter=isAcquireSettable) BOOL acquireSettable; // @dynamic acquireSettable;
@property(readonly, retain, nonatomic) NSArray *deviceObjectIDs; // @dynamic deviceObjectIDs;
@property(readonly, nonatomic) int acquisitionFailure; // @dynamic acquisitionFailure;
@property(nonatomic, getter=isAcquired) BOOL acquired; // @dynamic acquired;
@property(readonly, nonatomic) BOOL isProtected;
@property(readonly, nonatomic) BOOL hasMIDI; // @dynamic hasMIDI;
@property(readonly, nonatomic) BOOL hasVideo; // @dynamic hasVideo;
@property(readonly, nonatomic) BOOL hasAudio; // @dynamic hasAudio;
@property(readonly, nonatomic) unsigned int transportType; // @dynamic transportType;
@property(readonly, retain, nonatomic) NSString *modelUID; // @dynamic modelUID;
@property(readonly, retain, nonatomic) NSString *boxUID; // @dynamic boxUID;
@property(readonly, retain, nonatomic) NSString *modelName; // @dynamic modelName;
@property(readonly, retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end
