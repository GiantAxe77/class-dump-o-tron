//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface AAURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_urlSession;
    NSMutableDictionary *_pendingCompletionsByTask;
    NSMutableDictionary *_receivedDataByTask;
    NSObject<OS_dispatch_queue> *_sessionQueue;
}

+ (id)sharedURLSession;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)beginDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginDataTaskWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_URLSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
