//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVSpeechSynthesizerDelegate.h"

@class AVSpeechSynthesizer, NSArray, NSDictionary, NSString;

@interface SpeakCorrections : NSObject <AVSpeechSynthesizerDelegate>
{
    AVSpeechSynthesizer *_synthesizer;
    _Bool _correctionCanceled;
    NSDictionary *_keyboardToLanguage;
    NSArray *_availableLanguageCodes;
}

+ (void)_safeUpdateRingerState;
+ (void)_updateRingerState;
+ (void)disable;
+ (void)enable;
+ (void)updateStatus;
+ (void)initialize;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)_speakCorrection:(id)arg1;
- (void)loadUIAccessibilityIfNecessary;
- (void)_correctionDisplayed:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_ringerChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
