//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMMigrationRequest.h>

@class NSArray, NSMutableArray, NSString;

@interface XMMigrationRequest : SMMigrationRequest
{
    NSString *_destinationPath;
    NSMutableArray *_systemComponentDicts;
    NSMutableArray *_otherDiskComponentDicts;
    id _sourceSystemID;
}

@property(copy) id sourceSystemID; // @synthesize sourceSystemID=_sourceSystemID;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly) NSArray *otherDiskComponentDicts; // @synthesize otherDiskComponentDicts=_otherDiskComponentDicts;
@property(readonly) NSArray *systemComponentDicts; // @synthesize systemComponentDicts=_systemComponentDicts;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)updateAutoLoginUser;
- (id)description;
- (id)initWithXPCDict:(id)arg1;
- (id)init;

@end
