//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <lwawt/JavaComponentAccessibility.h>

@interface JavaTextAccessibility : JavaComponentAccessibility
{
}

- (id)initializeAttributeNamesWithEnv:(const struct JNINativeInterface_ **)arg1;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)arg1;
- (id)accessibilitySelectedTextAttribute;
- (BOOL)accessibilityIsSelectedTextAttributeSettable;
- (void)accessibilitySetSelectedTextAttribute:(id)arg1;
- (id)accessibilitySelectedTextRangeAttribute;
- (BOOL)accessibilityIsSelectedTextRangeAttributeSettable;
- (void)accessibilitySetSelectedTextRangeAttribute:(id)arg1;
- (id)accessibilityNumberOfCharactersAttribute;
- (BOOL)accessibilityIsNumberOfCharactersAttributeSettable;
- (id)accessibilityVisibleCharacterRangeAttribute;
- (BOOL)accessibilityIsVisibleCharacterRangeAttributeSettable;
- (id)accessibilityInsertionPointLineNumberAttribute;
- (BOOL)accessibilityIsInsertionPointLineNumberAttributeSettable;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityLineForIndexAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForLineAttributeForParameter:(id)arg1;
- (id)accessibilityStringForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForPositionAttributeForParameter:(id)arg1;
- (id)accessibilityRangeForIndexAttributeForParameter:(id)arg1;
- (id)getActions:(const struct JNINativeInterface_ **)arg1;

@end
