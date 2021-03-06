//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCSIntegrationStepDelegate.h"

@class NSMutableArray, NSOperationQueue, NSString, XCSBuildingIntegration, XCSFileLogDestination, XCSIntegration, XCSIntegrationStep;

__attribute__((visibility("hidden")))
@interface XCSIntegrationExecutor : NSObject <XCSIntegrationStepDelegate>
{
    XCSBuildingIntegration *_buildingIntegration;
    id <XCSIntegrationExecutorDelegate> _delegate;
    NSOperationQueue *_queue;
    XCSIntegrationStep *_currentStep;
    XCSFileLogDestination *_buildServiceLogDestination;
    XCSFileLogDestination *_sourceControlLogDestination;
    NSMutableArray *_warnings;
}

@property(retain, nonatomic) NSMutableArray *warnings; // @synthesize warnings=_warnings;
@property(retain, nonatomic) XCSFileLogDestination *sourceControlLogDestination; // @synthesize sourceControlLogDestination=_sourceControlLogDestination;
@property(retain, nonatomic) XCSFileLogDestination *buildServiceLogDestination; // @synthesize buildServiceLogDestination=_buildServiceLogDestination;
@property(retain, nonatomic) XCSIntegrationStep *currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <XCSIntegrationExecutorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) XCSBuildingIntegration *buildingIntegration; // @synthesize buildingIntegration=_buildingIntegration;
- (void).cxx_destruct;
- (id)integrationIssueFromError:(id)arg1 type:(unsigned long long)arg2 fixItType:(id)arg3;
- (void)integrationStepDidFinishWithoutError:(id)arg1;
- (void)integrationStep:(id)arg1 didFinishWithError:(id)arg2 result:(long long)arg3;
- (void)integrationStep:(id)arg1 didContinueWithError:(id)arg2;
- (void)integrationStepDidBegin:(id)arg1;
@property(readonly, nonatomic) XCSIntegration *integration;
- (void)completeIntegration;
- (void)saveIntegrationIssues;
- (void)saveIntegration;
- (void)enqueueIntegrationStepFromBlock:(CDUnknownBlockType)arg1;
- (void)teardownLogDestinations;
- (void)setupLogDestinations;
- (id)triggersStepForPhase:(unsigned long long)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithBuildingIntegration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

