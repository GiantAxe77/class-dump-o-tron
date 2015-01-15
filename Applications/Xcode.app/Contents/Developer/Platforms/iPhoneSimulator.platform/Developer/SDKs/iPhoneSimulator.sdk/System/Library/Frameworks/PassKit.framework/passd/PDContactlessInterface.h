//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PDSecureElement;

@interface PDContactlessInterface : NSObject
{
    _Bool _isInField;
    PDSecureElement *_secureElement;
    id <PDContactlessInterfaceDelegate> _delegate;
}

@property(nonatomic) id <PDContactlessInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) PDSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(readonly, nonatomic) _Bool isInField; // @synthesize isInField=_isInField;
- (_Bool)pendingLocationLookupForTransaction:(id)arg1;
- (void)preheatForTransactionEvent;
@property(readonly, nonatomic) _Bool isDetectingField;
- (void)updateFieldDetectionState;
- (void)stopCardEmulation;
- (void)startCardEmulation;
- (void)dealloc;
- (id)init;
- (id)initWithNotificationManager:(id)arg1 databaseManager:(id)arg2 delegate:(id)arg3;

@end
