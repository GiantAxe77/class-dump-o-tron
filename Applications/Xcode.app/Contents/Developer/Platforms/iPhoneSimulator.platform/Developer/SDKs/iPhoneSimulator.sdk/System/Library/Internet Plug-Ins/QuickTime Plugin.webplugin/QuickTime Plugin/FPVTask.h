//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FPVTask : NSObject
{
    id _delegate;
    _Bool _complete;
    _Bool _running;
}

@property(readonly) _Bool running; // @synthesize running=_running;
@property(readonly) _Bool complete; // @synthesize complete=_complete;
@property id delegate; // @synthesize delegate=_delegate;
- (void)_completed;
- (void)cancel;
- (void)start;

@end
