//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSMemoryEntity.h"

#import "NSCopying.h"

@class NSArray, SSDownloadPolicy;

@interface Download : SSMemoryEntity <NSCopying>
{
    NSArray *_assets;
    SSDownloadPolicy *_downloadPolicy;
}

+ (Class)databaseEntityClass;
@property(copy, nonatomic) SSDownloadPolicy *downloadPolicy; // @synthesize downloadPolicy=_downloadPolicy;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_setThumbnailImageWithExternalAssets:(id)arg1 error:(id *)arg2;
- (_Bool)_setDatabasePropertiesWithExternalMetadata:(id)arg1 error:(id *)arg2;
- (_Bool)_setAssetsWithExternalAssets:(id)arg1 error:(id *)arg2;
- (void)unionNetworkConstraints:(id)arg1;
- (void)removeAssetsWithAssetType:(id)arg1;
- (id)copyStoreDownloadMetadata;
- (id)assetForAssetIdentifier:(long long)arg1;
- (id)anyAssetForAssetType:(id)arg1;
- (void)dealloc;
- (id)initWithStoreDownload:(id)arg1;
- (id)initWithExternalManifestDictionary:(id)arg1;
- (id)initWithClientXPCDownload:(id)arg1;
- (id)initWithMicroPaymentDownload:(id)arg1 clientID:(id)arg2;

@end
