//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLMomentGenerationDataManagement.h"

@class NSDictionary, NSOrderedSet;

@protocol PLMomentGenerationDataManagement_Private <PLMomentGenerationDataManagement>

@optional
- (NSDictionary *)generationOptions;
- (void)setupPhotoLibrary;
- (void)refreshObject:(id <PLMomentAssetData>)arg1 mergeChanges:(_Bool)arg2;
- (void)insertMomentIntoAllMoments:(id <PLMomentData>)arg1 atIndex:(unsigned long long)arg2;
- (void)removeMomentFromAllMoments:(id <PLMomentData>)arg1;
- (NSOrderedSet *)allMomentsInLibrary;
@end
