//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class CPDefinitionTableColumn;

@interface CPIconCell : NSButtonCell
{
    CPDefinitionTableColumn *mColumn;
}

- (id)definitionTreeController;
- (id)selectedDefinition;
- (id)initWithColumn:(id)arg1;
- (void)action:(id)arg1;

@end
