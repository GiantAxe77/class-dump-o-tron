//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "_UIDocumentPickerServiceInvalidating.h"

@class NSString, _UIDocumentPickerContainerModel, _UIDocumentPickerViewServiceViewController, _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerViewController : UIViewController <_UIDocumentPickerServiceInvalidating>
{
    _Bool _rootContainer;
    UIViewController *_childViewController;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    _UINavigationControllerPalette *_searchPalette;
}

@property(nonatomic, getter=isRootContainer) _Bool rootContainer; // @synthesize rootContainer=_rootContainer;
@property(retain, nonatomic) _UINavigationControllerPalette *searchPalette; // @synthesize searchPalette=_searchPalette;
@property(nonatomic) _UIDocumentPickerViewServiceViewController *serviceViewController; // @synthesize serviceViewController=_serviceViewController;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)_tryExportingFile:(id)arg1 toLocation:(id)arg2;
- (id)_mangledFilenameForURL:(id)arg1;
- (void)_pickCurrentLocationForUpload:(id)arg1;
- (void)_doneButtonPressed;
- (void)_updateForServiceView;
- (void)invalidate;
- (void)teardownPalettes;
- (void)setupPalettes;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)displayModeChanged;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;
- (void)ensureChildViewController;
- (id)url;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
