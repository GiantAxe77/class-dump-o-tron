//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDWiFiMetricsManagerDeviceCount : PBCodable <NSCopying>
{
    double _timeSinceBoot;
    unsigned long long _timestamp;
    unsigned int _deviceCount;
    unsigned int _deviceIdentifierMap;
    struct {
        unsigned int timeSinceBoot:1;
        unsigned int timestamp:1;
        unsigned int deviceCount:1;
        unsigned int deviceIdentifierMap:1;
    } _has;
}

@property(nonatomic) unsigned int deviceIdentifierMap; // @synthesize deviceIdentifierMap=_deviceIdentifierMap;
@property(nonatomic) double timeSinceBoot; // @synthesize timeSinceBoot=_timeSinceBoot;
@property(nonatomic) unsigned int deviceCount; // @synthesize deviceCount=_deviceCount;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeviceIdentifierMap;
@property(nonatomic) _Bool hasTimeSinceBoot;
@property(nonatomic) _Bool hasDeviceCount;
@property(nonatomic) _Bool hasTimestamp;

@end
