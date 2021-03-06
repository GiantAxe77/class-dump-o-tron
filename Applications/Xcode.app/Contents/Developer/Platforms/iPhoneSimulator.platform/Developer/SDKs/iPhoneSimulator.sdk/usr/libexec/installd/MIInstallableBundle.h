//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MIInstallable.h"

@class MIBundleContainer, MIDataContainer, MIExecutableBundle, NSArray;

@interface MIInstallableBundle : MIInstallable
{
    _Bool _isPlaceholderInstall;
    struct SBSApplicationTerminationAssertion *_sbAssertion;
    NSArray *_pluginBundles;
    NSArray *_frameworkBundles;
    _Bool _checkIncomingUpgradeEntitlement;
    MIBundleContainer *_existingBundleContainer;
    MIBundleContainer *_bundleContainer;
    MIDataContainer *_dataContainer;
    NSArray *_pluginDataContainers;
}

@property(readonly) _Bool checkIncomingUpgradeEntitlement; // @synthesize checkIncomingUpgradeEntitlement=_checkIncomingUpgradeEntitlement;
@property(readonly) NSArray *frameworkBundles; // @synthesize frameworkBundles=_frameworkBundles;
@property(readonly) NSArray *pluginDataContainers; // @synthesize pluginDataContainers=_pluginDataContainers;
@property(readonly) NSArray *pluginBundles; // @synthesize pluginBundles=_pluginBundles;
@property(retain) MIDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(retain) MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
@property(readonly) MIBundleContainer *existingBundleContainer; // @synthesize existingBundleContainer=_existingBundleContainer;
@property(readonly) _Bool isPlaceholderInstall; // @synthesize isPlaceholderInstall=_isPlaceholderInstall;
- (void).cxx_destruct;
- (id)launchServicesDictionariesWithError:(id *)arg1;
- (_Bool)finalizeInstallationWithError:(id *)arg1;
- (_Bool)_refreshUUIDForContainer:(id)arg1 withError:(id *)arg2;
- (_Bool)postFlightInstallationWithError:(id *)arg1;
- (_Bool)_captureVPNPluginWithError:(id *)arg1;
- (_Bool)_postFlightPluginsWithError:(id *)arg1;
- (_Bool)performInstallationWithError:(id *)arg1;
- (_Bool)_captureDataFromStagingRootOrBundle:(id)arg1 toContainer:(id)arg2 withError:(id *)arg3;
- (_Bool)_writeOptionsDataToBundle:(id)arg1 orContainer:(id)arg2 error:(id *)arg3;
- (_Bool)_writeData:(id)arg1 toFileNamed:(id)arg2 inURL:(id)arg3;
- (_Bool)performVerificationWithError:(id *)arg1;
- (_Bool)performPreflightWithError:(id *)arg1;
- (_Bool)_checkCanInstallWithError:(id *)arg1;
- (void)_fixupCodeResources;
- (void)_installEmbeddedProfileInBundle:(id)arg1;
- (void)_installEmbeddedProfiles;
- (_Bool)_verifyBundleMetadataWithError:(id *)arg1;
- (_Bool)_verifySubBundleMetadataWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(int)arg3 userOptions:(id)arg4 existingBundleContainer:(id)arg5 error:(id *)arg6;

// Remaining properties
@property(retain) MIExecutableBundle *bundle;

@end

