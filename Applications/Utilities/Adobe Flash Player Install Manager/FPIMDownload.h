//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FP_INSTALLER_FPIMLogger, NSFileHandle, NSMutableData, NSString, NSURL, NSURLConnection;

@interface FPIMDownload : NSObject
{
    NSString *m_downloadPath;
    NSFileHandle *m_downloadFileHandle;
    NSMutableData *m_data;
    unsigned long long m_bytesDownloaded;
    unsigned long long m_bytesTotal;
    int m_downloadState;
    id <FPIMDownloadProgressReceiver> m_downloadDataReceiverDelegate;
    NSURL *m_url;
    NSURLConnection *m_urlConnection;
    BOOL m_keepDownloadedDataInMemory;
    FP_INSTALLER_FPIMLogger *m_logger;
    BOOL m_asyncModeOn;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)getDownloadPath;
- (id)downloadedData;
- (BOOL)cancelDownload;
- (BOOL)startDownload;
- (void)dealloc;
- (id)initWithURL:(id)arg1 downloadPath:(id)arg2 filename:(id)arg3 logger:(id)arg4 delegate:(id)arg5 asyncModeOn:(BOOL)arg6;

@end

