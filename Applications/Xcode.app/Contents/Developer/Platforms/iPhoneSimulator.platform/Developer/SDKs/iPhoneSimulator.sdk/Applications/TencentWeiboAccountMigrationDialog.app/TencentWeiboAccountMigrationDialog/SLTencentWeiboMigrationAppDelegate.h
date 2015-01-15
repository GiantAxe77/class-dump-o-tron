//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "SLTencentWeiboLoginInfoViewControllerDelegate.h"
#import "SLTencentWeiboMigrationDialogProtocol.h"
#import "SLTencentWeiboMigrationPasswordViewControllerDelegate.h"
#import "UIApplicationDelegate.h"

@class NSString, NSXPCConnection, SLTencentWeiboMigrationInfoViewController, SLTencentWeiboMigrationPasswordViewController, UINavigationController, UIWindow;

@interface SLTencentWeiboMigrationAppDelegate : UIResponder <UIApplicationDelegate, SLTencentWeiboMigrationDialogProtocol, SLTencentWeiboLoginInfoViewControllerDelegate, SLTencentWeiboMigrationPasswordViewControllerDelegate>
{
    id <SLTencentWeiboMigrationDialogListener> _listener;
    NSXPCConnection *_listenerConnection;
    UINavigationController *_navViewController;
    SLTencentWeiboMigrationInfoViewController *_infoViewController;
    SLTencentWeiboMigrationPasswordViewController *_passwordViewController;
    NSString *_username;
}

- (void).cxx_destruct;
- (void)_disconnectFromListener;
- (void)_connectToListener;
- (void)authenticationDidFailWithErrorMessage:(id)arg1;
- (void)authenticationDidSucceed;
- (void)setUsername:(id)arg1;
- (void)userDidSignInToPasswordViewController:(id)arg1;
- (void)userWillSignInToPasswordViewController:(id)arg1 withPassword:(id)arg2;
- (void)userDidCancelPasswordViewController:(id)arg1;
- (void)loginInfoViewController:(id)arg1 userDidProvideConsent:(_Bool)arg2;
- (void)_remoteSheetDidEnd;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
