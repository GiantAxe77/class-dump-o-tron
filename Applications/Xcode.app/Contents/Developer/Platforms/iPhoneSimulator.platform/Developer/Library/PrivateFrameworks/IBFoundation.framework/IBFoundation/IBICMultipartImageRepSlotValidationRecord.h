//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBICPseudoXMLGeneration.h"
#import "NSCoding.h"

@class IBICMultipartImageRepSlot, NSString;

@interface IBICMultipartImageRepSlotValidationRecord : NSObject <NSCoding, IBICPseudoXMLGeneration>
{
    _Bool _required;
    IBICMultipartImageRepSlot *_slot;
    NSString *_versionOfIntroduction;
    NSString *_versionOfObsolescence;
    NSString *_missingRequiredMessage;
    NSString *_obsoleteMessage;
}

@property(readonly, copy) NSString *obsoleteMessage; // @synthesize obsoleteMessage=_obsoleteMessage;
@property(readonly, copy) NSString *missingRequiredMessage; // @synthesize missingRequiredMessage=_missingRequiredMessage;
@property(readonly, copy) NSString *versionOfObsolescence; // @synthesize versionOfObsolescence=_versionOfObsolescence;
@property(readonly, copy) NSString *versionOfIntroduction; // @synthesize versionOfIntroduction=_versionOfIntroduction;
@property(readonly, getter=isRequired) _Bool required; // @synthesize required=_required;
@property(readonly) IBICMultipartImageRepSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (id)ibic_pseudoXMLWithIndent:(unsigned long long)arg1;
- (id)ibic_pseudoXML;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)appliesToMinimumDeploymentTarget:(id)arg1;
- (id)initWithSlot:(id)arg1 isRequired:(_Bool)arg2 versionOfIntroduction:(id)arg3 versionOfObsolescence:(id)arg4 missingRequiredMessage:(id)arg5 obsoleteMessage:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
