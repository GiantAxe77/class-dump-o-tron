//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPArtworkDataSource.h"

@class CPLRUDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface RURadioArtworkDataSource : NSObject <MPArtworkDataSource>
{
    unsigned long long _backgroundCacheSize;
    unsigned long long _cacheSize;
    CPLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    long long _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;
- (void).cxx_destruct;
- (void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(_Bool)arg2;
- (void)_clearCache;
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;
- (void)_handleWillEnterForegroundNotification:(id)arg1;
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_handleDidEnterBackgroundNotification:(id)arg1;
- (_Bool)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

