//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, PRSFeedback;

@protocol SpotlightNetHelperProtocol
- (void)unitConversion:(NSString *)arg1 withReply:(void (^)(SPConversionResult *))arg2;
- (void)isLocaleSupported:(NSString *)arg1 withReply:(void (^)(BOOL, BOOL, BOOL, BOOL))arg2;
- (void)deactivate;
- (void)activate:(double)arg1;
- (void)addFeedback:(PRSFeedback *)arg1;
- (void)killFeedback;
- (void)flushFeedback;
- (void)syncFeedbackWithReply:(void (^)(BOOL))arg1;
- (void)cancelQuery:(long long)arg1;
- (void)resumeQuery:(long long)arg1 withReply:(void (^)(long long, NSString *, NSArray *))arg2;
- (void)queryWithString:(NSString *)arg1 webSearch:(BOOL)arg2 scaleFactor:(double)arg3 withReply:(void (^)(long long))arg4;
@end

