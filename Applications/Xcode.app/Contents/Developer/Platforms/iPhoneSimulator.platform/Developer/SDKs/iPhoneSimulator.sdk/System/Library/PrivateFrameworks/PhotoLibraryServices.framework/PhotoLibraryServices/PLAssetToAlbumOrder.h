//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import "PLOrderKeyObject.h"

@class NSString, PLManagedAlbum, PLManagedAsset;

@interface PLAssetToAlbumOrder : PLManagedObject <PLOrderKeyObject>
{
    _Bool _isSpecial;
}

+ (id)newAssetOrderForAsset:(id)arg1 album:(id)arg2;
@property(nonatomic) _Bool isSpecial; // @synthesize isSpecial=_isSpecial;
@property(readonly, copy) NSString *description;
- (void)didSave;
- (id)childManagedObject;
- (id)secondaryOrderSortKey;

// Remaining properties
@property(retain, nonatomic) PLManagedAlbum *album; // @dynamic album;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long orderValue; // @dynamic orderValue;
@property(readonly) Class superclass;

@end
