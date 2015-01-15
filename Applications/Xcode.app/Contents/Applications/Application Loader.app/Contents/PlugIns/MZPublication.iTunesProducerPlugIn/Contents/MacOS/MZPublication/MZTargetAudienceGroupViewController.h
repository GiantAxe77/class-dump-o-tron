//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MZFieldGroupViewController.h"

@class NSPopUpButton;

@interface MZTargetAudienceGroupViewController : MZFieldGroupViewController
{
    int _firstColumnTag;
    NSPopUpButton *_targetAudienceMainPopup;
}

+ (id)pluginName;
+ (id)xibName;
@property NSPopUpButton *targetAudienceMainPopup; // @synthesize targetAudienceMainPopup=_targetAudienceMainPopup;
- (void)updateConstraints;
- (void)adjustPopupButtonConstraints;
- (float)minimumLeftColumnRequired;
- (id)makeModelObject;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setupInitialModelObject;
- (id)fieldKeyRelativeToMetadata;

@end
