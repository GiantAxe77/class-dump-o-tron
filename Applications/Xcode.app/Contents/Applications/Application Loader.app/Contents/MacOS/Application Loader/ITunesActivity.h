//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSBundle, NSImage, NSString;

@interface ITunesActivity : NSObject
{
    NSBundle *_bundle;
    NSString *_name;
    NSString *_className;
    NSString *_windowControllerClassName;
    NSString *_editorClassName;
    NSString *_longDescription;
    NSArray *_packageTypes;
    NSArray *_packageTypePrefixes;
    NSString *_displayType;
    NSString *_iconName;
    NSImage *_image;
    BOOL _openable;
    BOOL _assetOnly;
    BOOL _hasContent;
    NSArray *_childActivities;
    NSString *_nextString;
    NSString *_documentType;
}

+ (id)activitiesWithBundle:(id)arg1;
- (id)description;
- (BOOL)isFilmRelatedActivity;
- (BOOL)isPublicationRelatedActivity;
- (BOOL)isMusicRelatedActivity;
- (BOOL)isSoftwareRelatedActivity;
- (void)activateForPackage:(id)arg1 userInfo:(id)arg2;
- (void)activateForPackage:(id)arg1;
- (Class)editorClass;
- (Class)windowControllerClass;
- (Class)activityDriverClass;
- (Class)principalClass;
- (id)activate;
- (id)iconName;
- (id)icon;
- (id)packageVersionForSaving;
- (BOOL)canOpenPackage:(id)arg1;
- (BOOL)isRingtone;
- (BOOL)isVersionPartOfPackageTypePrefixes:(id)arg1;
- (BOOL)hasChildren;
- (BOOL)hasContent;
- (BOOL)isAssetOnly;
- (BOOL)isOpenable;
- (id)documentType;
- (id)nextString;
- (id)childActivities;
- (id)displayType;
- (id)packageTypePrefixes;
- (id)packageTypes;
- (id)longDescription;
- (id)editorClassName;
- (id)windowControllerClassName;
- (id)className;
- (id)name;
- (id)bundle;
- (void)dealloc;
- (id)initWithMetadata:(id)arg1 bundle:(id)arg2;

@end
