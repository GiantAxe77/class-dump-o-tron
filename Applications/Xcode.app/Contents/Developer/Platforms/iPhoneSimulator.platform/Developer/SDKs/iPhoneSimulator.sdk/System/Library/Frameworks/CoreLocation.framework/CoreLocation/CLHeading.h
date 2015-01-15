//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface CLHeading : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, nonatomic) double z;
@property(readonly, nonatomic) double y;
@property(readonly, nonatomic) double x;
@property(readonly, nonatomic) double headingAccuracy;
@property(readonly, nonatomic) double trueHeading;
@property(readonly, nonatomic) double magneticHeading;
- (id)shortDescription;
@property(readonly, copy, nonatomic) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClientHeading:(CDStruct_b560b707)arg1;

@end
