//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DATask.h"

@class NSString;

@protocol ASFetchAttachmentTaskProtocol <DATask>
- (NSString *)messageID;
- (NSString *)attachmentName;
- (id)initForMessageServerID:(NSString *)arg1 andAttachmentName:(NSString *)arg2;
@end
