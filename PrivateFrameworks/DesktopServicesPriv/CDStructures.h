//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FITNode, NSMetadataQuery;

#pragma mark Named Structures

struct TChildrenList;

struct TCountedPtr<TFSInfo> {
    struct TFSInfo *_field1;
};

struct TCountedPtr<TFSVolumeInfo> {
    struct TFSVolumeInfo *_field1;
};

struct TCountedPtr<TOperationLock> {
    struct TOperationLock *_field1;
};

struct TFSInfo;

struct TFSVolumeInfo;

struct TNSRef<FITNode *> {
    FITNode *fRef;
};

struct TNSRef<NSMetadataQuery *> {
    NSMetadataQuery *fRef;
};

struct TNode {
    int _field1;
    struct TNode *_field2;
    struct TCountedPtr<TFSVolumeInfo> _field3;
    struct TCountedPtr<TFSInfo> _field4;
    struct TChildrenList *_field5;
    struct TNodePtr _field6;
    void *_field7;
    struct TNotifierList *_field8;
    struct TCountedPtr<TOperationLock> _field9;
    unsigned char _field10;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct TNodePtr {
    struct TNode *_field1;
};

struct TNotifierList;

struct TOperationLock;

