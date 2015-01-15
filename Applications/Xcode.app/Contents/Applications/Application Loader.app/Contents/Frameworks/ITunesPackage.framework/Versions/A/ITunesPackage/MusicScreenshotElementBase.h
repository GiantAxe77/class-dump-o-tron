//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesPackage/AbstractElement.h>

@class NSString;

@interface MusicScreenshotElementBase : AbstractElement
{
    NSString *_fileName;
    NSString *_size;
    NSString *_checksum;
    NSString *_type;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)type;
- (void)setType:(id)arg1;
- (id)checksum;
- (void)setChecksum:(id)arg1;
- (id)size;
- (void)setSize:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
