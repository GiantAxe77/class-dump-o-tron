//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSEditableListController.h"

#import "UIActionSheetDelegate.h"

@class NSArray, NSMutableDictionary, NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface SafariStorageSettingsController : PSEditableListController <UIActionSheetDelegate>
{
    id _modalAlert;
    PSSpecifier *_totalUsageSpecifier;
    NSArray *_deleteButtonSpecifiers;
    NSMutableDictionary *_domainSpecifiers;
    NSArray *_sortedDomains;
    _Bool _cancelDomainSpecifierUpdate;
}

+ (void)deleteAllData;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setEditable:(_Bool)arg1;
- (void)_showDeleteAllOriginsAlert;
- (id)specifiers;
- (void)_deleteOriginData:(id)arg1;
- (void)_deleteAllOrigins;
- (id)_getSpecifierDiskUsage:(id)arg1;
- (void)_createDomainSpecifiers;
- (void)showAllDomainSpecifiers;
- (void)_addDomainSpecifiers;
- (void)_updateTotalUsageSpecifier;
- (id)_totalUsageString;
- (void)_addCookieDomainsToDictionary:(id)arg1;
- (void)_addWebSecurityDomainsToDictionary:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_addDomain:(id)arg1 withUsage:(unsigned long long)arg2 toDictionary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
