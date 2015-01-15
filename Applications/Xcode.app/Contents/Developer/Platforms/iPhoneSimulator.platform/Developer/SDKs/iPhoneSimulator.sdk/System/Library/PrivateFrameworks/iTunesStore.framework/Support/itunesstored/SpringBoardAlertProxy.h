//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, SSXPCConnection;

@interface SpringBoardAlertProxy : NSObject
{
    id <SpringBoardAlertProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_inputConnection;
    NSObject<OS_xpc_object> *_inputEndpoint;
    SSXPCConnection *_outputConnection;
}

@property(readonly) NSObject<OS_xpc_object> *XPCEndpoint; // @synthesize XPCEndpoint=_inputEndpoint;
- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (void)_disconnect;
@property __weak id <SpringBoardAlertProxyDelegate> delegate;
- (void)sendMessage:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;

@end
