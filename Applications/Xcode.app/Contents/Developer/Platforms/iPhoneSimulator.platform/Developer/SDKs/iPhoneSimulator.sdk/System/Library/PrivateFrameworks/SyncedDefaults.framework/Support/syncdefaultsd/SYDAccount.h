//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AAAccount, AAAccountManager, NSDictionary, NSURL;

@interface SYDAccount : NSObject
{
    AAAccountManager *_accountManager;
    AAAccount *_account;
    _Bool _allowsCellular;
    NSDictionary *_accountProperties;
    _Bool _needsToReloadAccount;
}

+ (id)enabledAccountForManager:(id)arg1;
@property(readonly, nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
- (id)description;
- (id)credentials;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)shutdown;
- (void)_accountsChangedNotification;
- (void)_loadAccountIfNecessary;
- (void)dealloc;
- (id)init;

@end

