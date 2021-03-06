//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"
#import "NSSplitViewDelegate.h"
#import "XCFosterParentHostProtocol.h"
#import "XCSelectionSource.h"

@class NSArray, NSButton, NSColor, NSMenu, NSPopUpButton, NSScrollView, NSSplitView, NSString, NSTreeController, PBXControlScrollView, PBXExtendedOutlineView, SCMSandboxOwner, XCSCMDataSource, XCSCMSmartGroup;

@interface PBXCVSModule : PBXProjectModule <NSSplitViewDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource, XCSelectionSource, XCFosterParentHostProtocol>
{
    NSSplitView *_splitview;
    PBXExtendedOutlineView *_scmSandboxOutlineView;
    PBXExtendedOutlineView *_scmActivityOutlineView;
    NSTreeController *_scmActivityTreeController;
    NSMenu *_scmContextualMenu;
    PBXControlScrollView *_scmScrollView;
    NSScrollView *_activityScrollView;
    NSButton *_clearSCMLogButton;
    NSButton *_transcriptToggleSwitch;
    NSPopUpButton *_viewOptionPopup;
    PBXExtendedOutlineView *_pluginSandboxOutlineView;
    NSTreeController *_pluginSandboxTreeController;
    BOOL _viewLoaded;
    BOOL _SCMTranscriptExpanded;
    struct CGRect _SCMTranscriptRect;
    int _filterType;
    XCSCMDataSource *_dataSource;
    XCSCMSmartGroup *_smartGroup;
    SCMSandboxOwner *_scmSandbox;
    NSArray *_sandboxSortDescriptors;
    NSArray *_sandboxEntrySortDescriptors;
    NSColor *_toplevelItemTextColor;
    NSColor *_errorItemTextColor;
    NSColor *_warningItemTextColor;
    NSColor *_otherItemTextColor;
}

+ (id)pendingIconImage;
- (id)sandboxEntrySortDescriptors;
- (void)setSandboxEntrySortDescriptors:(id)arg1;
- (id)sandboxSortDescriptors;
- (void)setSandboxSortDescriptors:(id)arg1;
- (id)projectItemPaths;
- (id)project;
- (void)noteNeedsUpdateForItem:(id)arg1;
- (void)reloadDataForProxies;
- (id)windowOfSelection;
- (BOOL)wantsToRetainFocusDuringSelection;
- (void)revealItems:(id)arg1 select:(BOOL)arg2;
- (id)xcSelection;
- (id)selectedProjectItemPaths;
- (id)representedObjectArrayForArray:(id)arg1;
- (id)selectedProjectItems;
- (void)takeContentConfigurationFromDictionary:(id)arg1;
- (id)contentConfigurationDictionary;
- (void)removeColumnForIdentifier:(id)arg1 fromTable:(id)arg2;
- (id)addColumnForIdentifier:(id)arg1 toTable:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 willReturnMenu:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)outlineView:(id)arg1 menuForTableColumn:(id)arg2 row:(long long)arg3;
- (void)doubleClickAction:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (id)selectedRootEntry;
- (id)selectedEntries;
- (void)clearSCMLog:(id)arg1;
- (void)addToBookmarks:(id)arg1;
- (void)revealCurrentFileInGroupTree:(id)arg1;
- (BOOL)_revealReferencesInGroupTree:(id)arg1;
- (id)_referencesForCurrentSelection;
- (id)_bookmarksForCurrentSelection;
- (id)bookmarkForSandboxEntry:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)showHideTranscript:(id)arg1;
- (void)_setFilterPreference:(id)arg1;
- (void)setFilter:(int)arg1;
- (id)dockMenuItems;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)becomeActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScmSandbox:(id)arg1;
- (id)scmSandbox;
- (id)myself;
- (void)viewDidLoad;
- (void)configurationChanged:(id)arg1;
- (void)stateChanged:(id)arg1;
- (void)loadSandboxView;
- (void)awakeFromNib;
- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (id)label;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

