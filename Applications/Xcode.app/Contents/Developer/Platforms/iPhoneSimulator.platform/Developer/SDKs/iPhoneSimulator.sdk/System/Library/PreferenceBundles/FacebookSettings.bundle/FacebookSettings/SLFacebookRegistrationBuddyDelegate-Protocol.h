//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSListController, SLFacebookRegistrationBuddy;

@protocol SLFacebookRegistrationBuddyDelegate <NSObject>
- (PSListController *)presentingViewControllerforRegistrationBuddy:(SLFacebookRegistrationBuddy *)arg1;
- (void)registrationBuddy:(SLFacebookRegistrationBuddy *)arg1 didCompleteWithUsername:(NSString *)arg2 password:(NSString *)arg3;
- (void)registrationBuddy:(SLFacebookRegistrationBuddy *)arg1 didFailWithErrorCode:(int)arg2;
- (void)registrationBuddyDidCancel:(SLFacebookRegistrationBuddy *)arg1;
@end
