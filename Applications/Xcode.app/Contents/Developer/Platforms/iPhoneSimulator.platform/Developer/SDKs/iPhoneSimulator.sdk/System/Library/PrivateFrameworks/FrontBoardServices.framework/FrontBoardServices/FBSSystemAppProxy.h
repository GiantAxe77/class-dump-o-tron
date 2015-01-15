//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSBaseXPCClient.h"

@interface FBSSystemAppProxy : BSBaseXPCClient
{
    _Bool _uiApplicationClient;
}

+ (id)sharedInstance;
@property(getter=isUIApplicationClient, setter=setUIApplicationClient:) _Bool uiApplicationClient; // @synthesize uiApplicationClient=_uiApplicationClient;
- (void)fireCompletion:(CDUnknownBlockType)arg1 openAppErrorCode:(long long)arg2;
- (void)fireCompletion:(CDUnknownBlockType)arg1 pidResult:(int)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 bundleIDResult:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)clientCallbackQueue;
- (void)_sendMessageType:(long long)arg1 withMessage:(CDUnknownBlockType)arg2 withReplyHandler:(CDUnknownBlockType)arg3 waitForReply:(_Bool)arg4;
- (void)shutdownAndReboot:(_Bool)arg1;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(_Bool)arg3 withDescription:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)sendActions:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)canActivateApplication:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)pidForApplication:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)systemApplicationBundleIdentifierWithResult:(CDUnknownBlockType)arg1;
- (_Bool)isClientLoggingEnabled;
- (void)setNextWakeInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationBundleID:(id)arg1 requestBrightness:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)badgeValueForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setBadgeValue:(id)arg1 forBundleID:(id)arg2;
- (void)checkInUIApplication;
- (void)queue_connectionWasCreated;
- (void)invalidate;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end
