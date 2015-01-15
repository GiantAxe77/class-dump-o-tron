//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEORoutePreloadSessionDelegate.h"
#import "MNBTAJobDelegate.h"

@class MNBTAJob, NSString;

__attribute__((visibility("hidden")))
@interface MapsRoutePreloadSession : NSObject <MNBTAJobDelegate, GEORoutePreloadSessionDelegate>
{
    id <GEORoutePreloadSession> _preloadSession;
    MNBTAJob *_wifiJob;
    MNBTAJob *_goodCellularJob;
}

@property(readonly) id <GEORoutePreloadSession> preloadSession; // @synthesize preloadSession=_preloadSession;
- (void).cxx_destruct;
- (void)routePreloadSessionPausedLoading:(id)arg1;
- (void)routePreloadSessionStoppedLoading:(id)arg1 wasEnabledAndNotPaused:(_Bool)arg2;
- (void)routePreloadSessionBeganLoading:(id)arg1;
- (void)_destroyBTAJobs;
- (void)_createBTAJobs;
- (void)btaJob:(id)arg1 updatedState:(id)arg2;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
