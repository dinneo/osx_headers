//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MCMimeCharset : NSObject
{
    BOOL _useBase64InHeaders;
    BOOL _canBeUsedForOutgoingMessages;
    unsigned long long _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
}

+ (id)encodingVariantsForRecipients:(id)arg1;
+ (unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2;
+ (id)preferredMimeCharset;
+ (id)charsetForEncoding:(unsigned long long)arg1;
+ (id)allMimeCharsets;
@property(readonly, nonatomic) BOOL canBeUsedForOutgoingMessages; // @synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages;
@property(readonly, nonatomic) BOOL useBase64InHeaders; // @synthesize useBase64InHeaders=_useBase64InHeaders;
@property(readonly, copy, nonatomic) NSString *charsetName; // @synthesize charsetName=_charsetName;
@property(readonly, copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property(readonly) unsigned long long encoding; // @synthesize encoding=_encoding;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (id)initWithCFEncoding:(unsigned int)arg1 primaryLanguage:(id)arg2;

@end
