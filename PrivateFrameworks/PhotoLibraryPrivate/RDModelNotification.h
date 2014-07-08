//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, RDModelLoadOptions, RDTable;

@interface RDModelNotification : NSObject
{
    BOOL _update;
    RDTable *_table;
    unsigned long long _modelId;
    RDModelLoadOptions *_loadOptions;
}

@property(retain, nonatomic) RDModelLoadOptions *loadOptions; // @synthesize loadOptions=_loadOptions;
@property(readonly, nonatomic) unsigned long long modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) RDTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)reloadModel:(id)arg1 withProperties:(id)arg2 didLoad:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reloadPropertiesForModel:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)reloadModel:(id)arg1;
- (void)reloadModel:(id)arg1 onPFQueue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)reloadModel:(id)arg1 onQueue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)modelObjectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)modelObject;
@property(nonatomic) BOOL loadPropertyStore;
@property(retain, nonatomic) NSArray *additionalKeyPaths;
@property(nonatomic) unsigned char propertiesMask;
- (id)initWithTable:(id)arg1 modelId:(unsigned long long)arg2;
- (id)initWithModelChange:(id)arg1;

@end
