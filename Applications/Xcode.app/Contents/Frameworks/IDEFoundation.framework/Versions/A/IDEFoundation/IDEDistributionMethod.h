//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString;

@interface IDEDistributionMethod : NSObject
{
    double _sortOrder;
    NSString *_group;
    NSSet *_requiredTeamTypes;
}

@property(readonly) NSSet *requiredTeamTypes; // @synthesize requiredTeamTypes=_requiredTeamTypes;
@property(readonly) NSString *group; // @synthesize group=_group;
@property(readonly) double sortOrder; // @synthesize sortOrder=_sortOrder;
- (void).cxx_destruct;
@property(readonly) BOOL requiresDeveloperAccount;
@property(readonly) NSString *packagingStepIdentifier;
@property(readonly) NSString *exportStepName;
@property(readonly) NSDictionary *requiredProfileEntitlements;
@property(readonly) unsigned long long provisioningProfileType;
@property(readonly) NSArray *availableICloudEnvironmentsOverride;
@property(readonly) BOOL wantsProvisioningProfiles;
@property(readonly) NSString *installerCertificateKind;
@property(readonly) NSString *certificateKind;
@property(readonly) NSArray *orderedDistributionStepClassNames;
@property(readonly) NSArray *entitlementsProcessorClasses;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *shortTitle;
@property(readonly) NSString *title;
@property(readonly, getter=isAppStoreBound) BOOL appStoreBound;
@property(readonly) int supportedTask;
- (_Bool)supportsDistributionOfArchive:(id)arg1;
@property(readonly) NSString *taskNoun;
@property(readonly) NSString *taskVerb;
- (id)initWithExtension:(id)arg1;

@end

