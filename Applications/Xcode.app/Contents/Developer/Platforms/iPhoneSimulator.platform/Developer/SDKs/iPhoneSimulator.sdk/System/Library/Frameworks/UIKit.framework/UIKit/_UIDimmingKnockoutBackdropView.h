//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UIDimmingKnockoutBackdropView : UIView
{
    _UIBackdropView *backdropView;
    UIView *dimmingKnockoutView;
}

- (void)dealloc;
@property double cornerRadius;
- (id)_dimmingKnockoutBackgroundColorForBackdropStyle:(long long)arg1;
- (id)_filterForBackdropStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1;

@end
