//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SLFacebookRegistrationInfo, SLFacebookRegistrationInfoPrompt;

@protocol SLFacebookRegistrationInfoPromptDelegate <NSObject>
- (void)registrationInfoPrompt:(SLFacebookRegistrationInfoPrompt *)arg1 didUpdateRegistrationInfo:(SLFacebookRegistrationInfo *)arg2;
- (void)registrationInfoPromptDidCancel:(SLFacebookRegistrationInfoPrompt *)arg1;
@end

