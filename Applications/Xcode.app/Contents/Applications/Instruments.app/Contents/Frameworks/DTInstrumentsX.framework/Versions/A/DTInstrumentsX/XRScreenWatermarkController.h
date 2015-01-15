//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSAnimationDelegate.h"

@class NSImageView, NSString, NSTextField, NSTimer, NSViewAnimation;

@interface XRScreenWatermarkController : NSWindowController <NSAnimationDelegate>
{
    NSViewAnimation *_windowFadeAnimation;
    NSTimer *_autoCloseDelay;
    NSTextField *_messageField;
    NSImageView *_imageField;
}

+ (id)watermarkImageForPurpose:(int)arg1;
+ (struct CGRect)preferedContentRectForScreen:(id)arg1;
@property __weak NSImageView *imageField; // @synthesize imageField=_imageField;
@property __weak NSTextField *messageField; // @synthesize messageField=_messageField;
- (void).cxx_destruct;
- (void)close;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)animationDidEnd:(id)arg1;
@property(readonly, nonatomic, getter=isClosing) BOOL closing;
- (void)displayMessage:(id)arg1 purpose:(int)arg2;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
