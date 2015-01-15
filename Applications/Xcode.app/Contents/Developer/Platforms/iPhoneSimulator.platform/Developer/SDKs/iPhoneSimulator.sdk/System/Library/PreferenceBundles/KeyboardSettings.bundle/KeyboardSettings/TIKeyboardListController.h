//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

@class NSMutableArray, PSSpecifier, TIAboutKeyboardPrivacyController;

@interface TIKeyboardListController : PSListController
{
    NSMutableArray *_keyboardsArray;
    PSSpecifier *_groupSeparator;
    PSSpecifier *_addNewInputModeSpecifier;
    _Bool _newKeyboardsAdded;
    unsigned long long _totalKeyboardsCount;
    unsigned long long _numberOfEnabledKeyboards;
    _Bool deletingRow;
    TIAboutKeyboardPrivacyController *_aboutPrivacyController;
}

+ (id)displayNameForHardwareLayout:(id)arg1;
+ (id)keyboardDisplayNameForIdentifier:(id)arg1;
+ (id)availableSoftwareLayoutsForBaseInputMode:(id)arg1;
+ (id)availableInputModesForLanguage:(id)arg1;
+ (id)supportedInputModesForLanguage:(id)arg1;
+ (id)softwareLayoutsForBaseInputMode:(id)arg1;
+ (id)supportedBaseInputModesForLanguage:(id)arg1;
+ (void)setInputModes:(id)arg1;
+ (id)inputModes;
+ (void)_reorderLanguagesForEnabledKeyboards:(id)arg1;
@property(retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController; // @synthesize aboutPrivacyController=_aboutPrivacyController;
@property(nonatomic) _Bool newKeyboardsAdded; // @synthesize newKeyboardsAdded=_newKeyboardsAdded;
@property(readonly, nonatomic) NSMutableArray *keyboardsArray; // @synthesize keyboardsArray=_keyboardsArray;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_addInputModes:(id)arg1;
- (id)normalizedIdentifierForInputMode:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)_writeKeyboards;
- (void)addNewKeyboards:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (id)specifiers;
- (void)reloadSpecifiers;
- (id)specifierForExtensionInputMode:(id)arg1;
- (id)specifierForInputMode:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateEditButtonState;
- (_Bool)allKeyboardsEnabled;
- (void)dealloc;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;

@end
