//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAccessibilityElement.h"

@class UITextField;

@interface UIAccessibilityTextFieldElement : UIAccessibilityElement
{
    UITextField *_textField;
}

@property(nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (id)_accessibilityHandwritingAttributes;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilitySpeakThisString;
- (void)_accessibilitySetIsSpeakThisElement:(_Bool)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (_Bool)_accessibilityIsScannerElement;
- (struct CGRect)accessibilityFrame;
- (_Bool)_accessibilityHasTextOperations;
- (void)_accessibilitySelectAll;
- (_Bool)_accessibilityOverridesInstructionsHint;
- (void)_accessibilityDelete;
- (void)_accessibilityReplace;
- (void)_accessibilityPaste;
- (void)_accessibilitySelect;
- (void)_accessibilityCut;
- (void)_accessibilityCopy;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityPerformEscape;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (struct CGPoint)accessibilityActivationPoint;
- (_Bool)accessibilityElementsHidden;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityValue;
- (id)_accessibilityUserTestingParent;

@end
