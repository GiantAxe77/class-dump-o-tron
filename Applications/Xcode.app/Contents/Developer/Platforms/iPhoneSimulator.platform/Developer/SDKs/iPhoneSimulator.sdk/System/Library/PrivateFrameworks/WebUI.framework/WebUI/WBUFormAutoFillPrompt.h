//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBUFormAutoFillPrompt : NSObject
{
}

+ (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
+ (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
+ (void)showAutoFillPromptInWebView:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 numberOfRows:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)showAutoFillPromptInWebView:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)_actionSheetStringWithTitle:(id)arg1 message:(id)arg2;

@end
