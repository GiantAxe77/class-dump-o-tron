//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTPerformanceSession;

@interface DTPerformanceSessionWrapper : NSObject
{
    DTPerformanceSession *_realSession;
}

@property(readonly, retain, nonatomic) DTPerformanceSession *realSession; // @synthesize realSession=_realSession;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 target:(id)arg2 options:(id)arg3 statusCallback:(CDUnknownFunctionPointerType)arg4 error:(id *)arg5;

@end
