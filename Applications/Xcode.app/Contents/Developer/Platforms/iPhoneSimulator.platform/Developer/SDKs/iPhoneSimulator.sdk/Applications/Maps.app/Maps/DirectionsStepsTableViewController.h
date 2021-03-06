//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "DirectionsManagerObserver.h"
#import "MNNavigationDebugViewsControllerDelegate.h"

@class BlurView, DirectionsController, MNNavigationDebugViewsController, NSCache, NSString, UIView;

__attribute__((visibility("hidden")))
@interface DirectionsStepsTableViewController : UITableViewController <MNNavigationDebugViewsControllerDelegate, DirectionsManagerObserver>
{
    id <DirectionsStepsTableViewControllerDelegate> _delegate;
    _Bool _needsRouteStepUpdate;
    _Bool _routeHasNoManeuvers;
    _Bool _disableScrollTo;
    BlurView *_blurView;
    NSCache *_shieldArtworkCache;
    double _tableWidthForCachedRowHeights;
    double *_routeStepRowHeights;
    MNNavigationDebugViewsController *_debugController;
    UIView *_debugFooterView;
    _Bool _traceControlsEnabled;
    DirectionsController *_directionsController;
}

@property(nonatomic) _Bool traceControlsEnabled; // @synthesize traceControlsEnabled=_traceControlsEnabled;
@property(retain, nonatomic) DirectionsController *directionsController; // @synthesize directionsController=_directionsController;
@property(nonatomic) __weak id <DirectionsStepsTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigationDebugViewsTracePlaybackDidSeek:(id)arg1;
- (void)navigationDebugViewsTracePlaybackSpeedDidChange:(id)arg1 speedMultiplier:(double)arg2;
- (id)chromeViewController;
- (void)directionsManagerDidUpdateToStepIndex:(id)arg1 stepIndex:(id)arg2;
- (void)directionsController:(id)arg1 didChangeSelectedRouteIndex:(unsigned long long)arg2;
- (void)directionsManagerDidReset:(id)arg1;
- (void)directionsControllerDidChangeStep:(id)arg1;
- (void)directionsControllerDidChangeRoute:(id)arg1;
- (void)directionsModeDidChange;
- (void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2;
- (void)directionsManager:(id)arg1 didLoadRoute:(id)arg2;
- (void)directionsManagerDidCancelLoad:(id)arg1;
- (void)directionsManagerDidStartLoad:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)directionsListEndRow;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)_rowHeightForRouteStepIndex:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)_isSingleLocationList;
- (void)_reloadDirections;
- (void)reloadData;
- (id)_shieldArtworkForType:(int)arg1 text:(id)arg2 inMapRect:(CDStruct_02837cd9)arg3;
- (void)_scrollToRouteStep;
- (unsigned long long)_directionsRowCount;
- (unsigned long long)_selectionRouteStepIndexForRowIndex:(unsigned long long)arg1;
- (unsigned long long)_routeStepIndexForRowIndex:(unsigned long long)arg1;
- (unsigned long long)_selectionRowIndexForRouteStepIndex:(unsigned long long)arg1;
- (unsigned long long)_rowIndexForRouteStepIndex:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_updateStyleValuesFromTheme;
- (_Bool)isDimmed;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)_handleLocaleChangeNotification:(id)arg1;
- (id)initWithStyle:(long long)arg1 hasBlurBackground:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

