//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudLibraryOperation.h"

@interface SagaStartLoadArtworkOperation : CloudLibraryOperation
{
    unsigned long long _sagaID;
    CDUnknownBlockType _artworkLoadedCompletionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType artworkLoadedCompletionHandler; // @synthesize artworkLoadedCompletionHandler=_artworkLoadedCompletionHandler;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSagaID:(unsigned long long)arg1;

@end

