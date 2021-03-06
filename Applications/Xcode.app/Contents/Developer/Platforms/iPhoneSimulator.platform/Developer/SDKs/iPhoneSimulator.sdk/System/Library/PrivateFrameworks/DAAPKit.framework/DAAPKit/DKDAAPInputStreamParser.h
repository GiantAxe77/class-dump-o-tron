//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAAPKit/DKDAAPParser.h>

#import "NSStreamDelegate.h"

@class NSInputStream, NSMutableData, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface DKDAAPInputStreamParser : DKDAAPParser <NSStreamDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableData *_streamInputBuffer;
    unsigned char _streamReadBuffer[10240];
    NSInputStream *_inputStream;
}

@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)setFinished:(_Bool)arg1;
- (void)parse;
- (id)initWithStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

