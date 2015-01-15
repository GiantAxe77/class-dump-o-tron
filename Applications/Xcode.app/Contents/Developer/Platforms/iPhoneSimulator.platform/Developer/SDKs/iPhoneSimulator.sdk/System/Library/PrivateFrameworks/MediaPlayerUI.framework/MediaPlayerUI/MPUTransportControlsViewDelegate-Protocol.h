//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUTransportControlsView, UIButton<MPUTransportButton>, UIImage;

@protocol MPUTransportControlsViewDelegate <NSObject>
- (UIImage *)transportControlsView:(MPUTransportControlsView *)arg1 imageForTransportButtonWithControlType:(long long)arg2;

@optional
- (struct CGSize)transportControlsView:(MPUTransportControlsView *)arg1 adjustedMaximumTransportButtonSizeWithProposedSize:(struct CGSize)arg2;
- (struct CGRect)transportControlsView:(MPUTransportControlsView *)arg1 adjustedFrameOfTransportButtonWithControlType:(long long)arg2 proposedFrame:(struct CGRect)arg3;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 prepareTransportButton:(UIButton<MPUTransportButton> *)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 tapOnAccessoryButtonType:(long long)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 longPressEndOnControlType:(long long)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 longPressBeginOnControlType:(long long)arg2;
- (void)transportControlsView:(MPUTransportControlsView *)arg1 tapOnControlType:(long long)arg2;
@end
