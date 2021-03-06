//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Automator/AMWorkflowMetaData.h>

@class AMType, NSString;

@interface AMServiceWorkflowMetaData : AMWorkflowMetaData
{
    AMType *_outputType;
    AMType *_inputType;
    NSString *_serviceApplicationBundleID;
    NSString *_serviceApplicationPath;
    BOOL _serviceProcessesInput;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) AMType *outputType; // @synthesize outputType=_outputType;
@property(retain) AMType *inputType; // @synthesize inputType=_inputType;
@property BOOL serviceProcessesInput; // @synthesize serviceProcessesInput=_serviceProcessesInput;
@property(copy) NSString *serviceApplicationPath; // @synthesize serviceApplicationPath=_serviceApplicationPath;
@property(copy) NSString *serviceApplicationBundleID; // @synthesize serviceApplicationBundleID=_serviceApplicationBundleID;
- (id)headerInputType;
- (id)metaData;
- (void)setFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithPersonality:(id)arg1;
@property(readonly, copy) NSString *inputOptionTitle;
@property(readonly) BOOL canSelectInputOption;
@property(readonly) BOOL canReplaceSelectedText;
@property BOOL replacesSelectedText;
@property(readonly) BOOL serviceInputTypeUnknown;
@property(readonly) BOOL serviceHasNoInput;
@property(readonly, copy) NSString *serviceOutputTypeIdentifier;
@property(readonly, copy) NSString *serviceInputTypeIdentifier;

@end

