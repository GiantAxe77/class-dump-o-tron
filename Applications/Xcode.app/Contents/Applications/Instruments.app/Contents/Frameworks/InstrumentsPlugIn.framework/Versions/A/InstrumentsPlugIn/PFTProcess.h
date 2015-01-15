//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "XRProcessObserver.h"

@class NSArray, NSDictionary, NSImage, NSMutableDictionary, NSString, XRDevice;

@interface PFTProcess : NSObject <XRProcessObserver, NSCopying>
{
    NSString *_userProvidedArgs;
    NSDictionary *_userProvidedEnvironment;
    NSMutableDictionary *_mutatedEnvironment;
    NSString *_executablePath;
    NSString *_bundleIdentifier;
    XRDevice *_device;
    int _pid;
    BOOL _didLaunchProcess;
    int _specifiedType;
    BOOL _subtaskPaused;
    BOOL _restricted;
    PFTProcess *_hostProcess;
    NSDictionary *_properties;
    NSMutableDictionary *_launchControlProperties;
    NSImage *_atomicProcessImage;
}

+ (id)processFromData:(id)arg1 device:(id)arg2;
+ (id)chooseProcessWithDevice:(id)arg1 targetedObject:(id)arg2 prompt:(id)arg3 initialPath:(id)arg4 useForAllApplications:(char *)arg5;
+ (id)editProcess:(id)arg1 forCommand:(id)arg2 forDevice:(id)arg3 targetedObject:(id)arg4;
+ (id)chooseProcessForCommand:(id)arg1 withSelectedProcess:(id)arg2 forDevice:(id)arg3 targetedObject:(id)arg4;
+ (id)chooseExistingProcessForCommand:(id)arg1 forInstrument:(id)arg2;
+ (void)initialize;
@property(retain) NSImage *atomicProcessImage; // @synthesize atomicProcessImage=_atomicProcessImage;
@property(readonly) NSMutableDictionary *launchControlProperties; // @synthesize launchControlProperties=_launchControlProperties;
@property(copy) NSDictionary *properties; // @synthesize properties=_properties;
@property(copy, nonatomic) PFTProcess *hostProcess; // @synthesize hostProcess=_hostProcess;
@property BOOL restricted; // @synthesize restricted=_restricted;
@property(readonly) __weak XRDevice *device; // @synthesize device=_device;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_pid;
@property(readonly) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(copy) NSString *argumentsString; // @synthesize argumentsString=_userProvidedArgs;
- (void).cxx_destruct;
- (id)functionSymbolNames;
@property(readonly, copy) NSString *description;
@property int type;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(copy) NSImage *image;
- (void)stop;
@property(readonly, getter=isRunning) BOOL running;
- (BOOL)runSuspended:(BOOL)arg1 error:(id *)arg2;
- (void)processDeathDetectedForPid:(int)arg1;
- (void)resetInitialEnvironmentAndArgs;
- (void)addEnvironmentVariable:(id)arg1 value:(id)arg2;
@property(readonly) NSArray *arguments;
@property(copy) NSDictionary *environment;
@property(readonly, nonatomic) int processDomain;
@property(readonly, nonatomic) NSArray *canonicalHostProcesses;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) NSString *displayName;
@property(readonly) NSString *processName;
- (id)templateData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_setPid:(int)arg1 asOwner:(BOOL)arg2;
@property(readonly) BOOL _isProcessOwner;
- (id)initWithDevice:(id)arg1 path:(id)arg2 bundleIdentifier:(id)arg3 arguments:(id)arg4 environment:(id)arg5 launchOptions:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
