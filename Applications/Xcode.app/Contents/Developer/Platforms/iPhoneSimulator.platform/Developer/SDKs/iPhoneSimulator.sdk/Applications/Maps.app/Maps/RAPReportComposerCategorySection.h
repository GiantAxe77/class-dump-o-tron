//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPTablePartSection.h"

@class RAPCategoryQuestion;

__attribute__((visibility("hidden")))
@interface RAPReportComposerCategorySection : RAPTablePartSection
{
    RAPCategoryQuestion *_question;
    CDUnknownBlockType _selection;
}

- (void).cxx_destruct;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (id)cellForRowAtIndex:(long long)arg1;
- (long long)rowsCount;
- (id)initWithCategoryQuestion:(id)arg1 selection:(CDUnknownBlockType)arg2;

@end
