//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding>
{
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
    _Bool _legacy;
    long long _domain;
    NEKeychainItem *_oldItem;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) _Bool legacy; // @synthesize legacy=_legacy;
@property(copy) NEKeychainItem *oldItem; // @synthesize oldItem=_oldItem;
@property(readonly) long long domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)migrateFromPreferences:(struct __SCPreferences *)arg1;
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;
- (void)remove;
- (void)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4;
- (id)copyKindForPasswordType:(long long)arg1;
- (id)copyPassword;
- (_Bool)copyDataFromKeychainItem:(void *)arg1 outPassword:(id *)arg2 outIdentifier:(id *)arg3 outPersistentReference:(id *)arg4;
@property(copy) NSString *password;
@property(copy) NSData *persistentReference;
- (void)setIdentifierInternal:(id)arg1;
@property(copy) NSString *identifier;
- (id)descriptionWithIndent:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2;
- (id)initWithPassword:(id)arg1 domain:(long long)arg2;

@end
