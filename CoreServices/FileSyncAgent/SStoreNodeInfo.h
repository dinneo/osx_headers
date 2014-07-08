//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class ACLWrapper, NSData, NSDate, NSString, SNode;

@interface SStoreNodeInfo : NSObject <NSCoding>
{
    BOOL _dir;
    BOOL _locked;
    BOOL _busy;
    BOOL _excludedByEA;
    unsigned int _lsFlags;
    struct UTCDateTime _contModDate;
    unsigned int _fileType;
    unsigned int _fileCreator;
    unsigned short _finderFlags;
    SNode *_node;
    unsigned long long _size;
}

+ (BOOL)storeNodeInfo:(id)arg1 isSameKindAs:(id)arg2;
+ (id)newStoreNodeInfoFromData:(id)arg1 forNode:(id)arg2;
+ (id)newStoreNodeInfoFromData:(id)arg1;
+ (Class)classForType:(unsigned short)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) SNode *node; // @synthesize node=_node;
@property(nonatomic) unsigned short finderFlags; // @synthesize finderFlags=_finderFlags;
@property(nonatomic) unsigned int fileCreator; // @synthesize fileCreator=_fileCreator;
@property(nonatomic) unsigned int fileType; // @synthesize fileType=_fileType;
@property(readonly, nonatomic) struct UTCDateTime contentModDateAsUTCDateTime; // @synthesize contentModDateAsUTCDateTime=_contModDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, retain, nonatomic) NSString *descriptionShort;
- (id)description;
- (void)describeToLogFormatter:(id)arg1 verbosity:(int)arg2;
- (id)appendDataToString:(id)arg1;
- (void)addBOMInfoToObject:(struct _BOMFSObject *)arg1;
- (BOOL)isIdenticalTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isApparentlyEqualExceptModDateAndEASize:(id)arg1;
- (BOOL)isApparentlyEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)contentsEqual:(id)arg1;
- (BOOL)attributesEqual:(id)arg1;
- (void)setIsPkgInfoPackage:(BOOL)arg1;
- (void)clearNodeID;
@property(readonly, nonatomic) unsigned long long nodeID;
@property(readonly, nonatomic) unsigned short mode;
@property(readonly, nonatomic) BOOL isSymlink;
@property(readonly, nonatomic) BOOL isPackage;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isInvisible;
@property(readonly, nonatomic) BOOL isFile;
@property(readonly, nonatomic) BOOL isExcludedByEA;
@property(readonly, nonatomic) BOOL isDirectoryToFS;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isBusy;
@property(readonly, nonatomic) BOOL isAlias;
@property(readonly, nonatomic) BOOL hasValidAppleDoubleData;
@property(readonly, nonatomic) BOOL hasExtendedAttributes;
@property(readonly, nonatomic) unsigned int flags;
@property(readonly, retain, nonatomic) NSData *dataForInfo;
@property(readonly, retain, nonatomic) NSDate *contentModDate;
@property(readonly, retain, nonatomic) ACLWrapper *acl;
- (void)encodeWithStream:(id)arg1;
@property(readonly, nonatomic) unsigned short encodeSignature;
- (id)initWithStream:(id)arg1 version:(unsigned char)arg2;
- (void)dealloc;

@end
