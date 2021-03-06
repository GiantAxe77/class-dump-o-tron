//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Xcode3UI/Xcode3BuildPropertyEditor.h>

@class DVTGradientImageButton, DVTTableView, IDEControlGroup, NSArray, NSArrayController, NSButton, NSMutableArray;

@interface Xcode3StringListBuildPropertyEditor : Xcode3BuildPropertyEditor
{
    NSMutableArray *_arrangedObjects;
    DVTTableView *_stringListTableView;
    NSArrayController *_stringListController;
    IDEControlGroup *_controlGroup;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
}

+ (id)keyPathsForValuesAffectingContent;
@property(copy, nonatomic) NSArray *arrangedObjects; // @synthesize arrangedObjects=_arrangedObjects;
@property(retain, nonatomic) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) IDEControlGroup *controlGroup; // @synthesize controlGroup=_controlGroup;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (struct CGSize)minimumEditorSizeForContent:(id)arg1;
- (struct CGSize)currentEditorSize;
- (void)awakeFromNib;
- (void)loadView;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)_scrollSelectionIntoViewAndEdit:(id)arg1;
- (long long)columnForAutoEditing;
- (void)removeArrangedObjectsAtIndexes:(id)arg1;
- (void)insertArrangedObjects:(id)arg1 atIndexes:(id)arg2;
- (id)content;
- (void)setContent:(id)arg1;
- (id)stringsFromDictionaries:(id)arg1;
- (id)dictionariesFromStrings:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

