//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface CPClassValue : NSObject <NSCoding>
{
    Class mClass;
}

+ (id)valueWithClass:(Class)arg1;
- (Class)classValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end
