//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSUIActivityDocumentManager : NSObject
{
}

+ (id)sharedManager;
- (void)documentDidChangeFileType:(id)arg1;
- (void)documentDidChangeFileURL:(id)arg1;
- (void)documentDidClose:(id)arg1;
- (void)documentDidOpen:(id)arg1;
- (void)removeAutomaticUserActivityForDocument:(id)arg1;
- (void)updateAutomaticUserActivityForDocument:(id)arg1;
- (BOOL)userActivityIsAutomaticForDocument:(id)arg1;
- (id)userActivityTypeForDocument:(id)arg1;
- (BOOL)documentIsUbiquitous:(id)arg1;

@end

