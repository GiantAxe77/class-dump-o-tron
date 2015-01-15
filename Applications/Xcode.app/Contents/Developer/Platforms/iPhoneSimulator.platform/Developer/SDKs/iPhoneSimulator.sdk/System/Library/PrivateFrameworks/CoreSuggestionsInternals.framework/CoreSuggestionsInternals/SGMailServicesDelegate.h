//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSSearchDelegate.h"

@class NSError, NSObject<OS_dispatch_semaphore>, NSString;

@interface SGMailServicesDelegate : NSObject <MSSearchDelegate>
{
    NSObject<OS_dispatch_semaphore> *_done;
    CDUnknownBlockType _callback;
    _Bool _ignoreEmpty;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (_Bool)search:(id)arg1 didFindResults:(id)arg2;
- (void)wait;
- (id)initWithCallback:(CDUnknownBlockType)arg1 ignoreEmpty:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
