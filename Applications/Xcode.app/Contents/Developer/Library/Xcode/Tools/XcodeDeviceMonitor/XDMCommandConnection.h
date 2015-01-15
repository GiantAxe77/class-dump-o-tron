//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSError, NSInputStream, NSMutableData, NSMutableSet, NSOutputStream, NSRecursiveLock, NSSet, NSString;

@interface XDMCommandConnection : NSObject <NSStreamDelegate>
{
    BOOL _isOpen;
    BOOL _hasSpaceAvailable;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _inputBufferCapacity;
    unsigned long long _outputBufferCapacity;
    id <iCloudCommandConnectionDelegate> _delegate;
    NSString *_name;
    NSError *_error;
    NSMutableSet *_runLoopModesMutable;
    NSMutableData *_inputBuffer;
    NSRecursiveLock *_inputBufferLock;
    NSMutableData *_outputBuffer;
    NSRecursiveLock *_outputBufferLock;
}

+ (id)errorWithCode:(long long)arg1;
@property(nonatomic) BOOL hasSpaceAvailable; // @synthesize hasSpaceAvailable=_hasSpaceAvailable;
@property(retain, nonatomic) NSRecursiveLock *outputBufferLock; // @synthesize outputBufferLock=_outputBufferLock;
@property(retain, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(retain, nonatomic) NSRecursiveLock *inputBufferLock; // @synthesize inputBufferLock=_inputBufferLock;
@property(retain, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(readonly, nonatomic) NSMutableSet *runLoopModesMutable; // @synthesize runLoopModesMutable=_runLoopModesMutable;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) BOOL isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) id <iCloudCommandConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long outputBufferCapacity; // @synthesize outputBufferCapacity=_outputBufferCapacity;
@property(nonatomic) unsigned long long inputBufferCapacity; // @synthesize inputBufferCapacity=_inputBufferCapacity;
@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendCommand:(id)arg1;
- (void)processOutput;
- (void)processInput;
- (void)parseCommandsInBuffer;
- (unsigned long long)parseCommandData:(id)arg1;
- (void)close;
- (void)closeWithError:(id)arg1;
- (void)didClose;
- (void)willCloseWithError:(id)arg1;
- (void)open;
- (void)logAtLevel:(unsigned char)arg1 withFormat:(id)arg2;
- (void)logAtLevel:(unsigned char)arg1 withFormat:(id)arg2 arguments:(struct __va_list_tag [1])arg3;
@property(readonly, copy, nonatomic) NSSet *runLoopModes;
- (void)removeRunLoopMode:(id)arg1;
- (void)addRunLoopMode:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
