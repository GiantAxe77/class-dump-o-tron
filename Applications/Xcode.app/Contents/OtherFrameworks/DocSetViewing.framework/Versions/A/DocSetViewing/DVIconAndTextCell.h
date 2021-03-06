//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldCell.h"

@class NSImage;

@interface DVIconAndTextCell : NSTextFieldCell
{
    NSImage *icon;
    struct CGSize preferredIconSize;
}

- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (struct CGRect)titleEditingRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)isOpaque;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)iconRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleAndIconRectForBounds:(struct CGRect)arg1;
- (struct CGSize)titleSize;
- (id)attributedTitle;
- (double)textInsetForBounds:(struct CGRect)arg1;
- (double)iconInsetForBounds:(struct CGRect)arg1;
- (struct CGSize)iconSizeForBounds:(struct CGRect)arg1;
- (void)setPreferredIconSize:(struct CGSize)arg1;
- (struct CGSize)preferredIconSize;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initTextCell:(id)arg1;

@end

