//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class SKUIIndexBarControl;

@interface SKUICollectionView : UICollectionView
{
    _Bool _delegateWantsWillLayoutSubviews;
    _Bool _externalShowsHorizontalScrollIndicator;
    _Bool _externalShowsVerticalScrollIndicator;
    double _overrideBoundsWidth;
    SKUIIndexBarControl *_indexBarControl;
}

@property(retain, nonatomic) SKUIIndexBarControl *indexBarControl; // @synthesize indexBarControl=_indexBarControl;
@property(nonatomic) double overrideBoundsWidth; // @synthesize overrideBoundsWidth=_overrideBoundsWidth;
- (void).cxx_destruct;
- (void)_updateShowsScrollIndicators;
- (void)_updateIndexBarControlFrame;
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGRect)bounds;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end
