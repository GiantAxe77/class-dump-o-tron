//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CRLocation : PBCodable <NSCopying>
{
    double _latitude;
    double _longitude;
    double _timestamp;
    float _altitude;
    int _context;
    float _course;
    float _horizontalAccuracy;
    int _motionActivityConfidence;
    int _motionActivityType;
    float _speed;
    float _verticalAccuracy;
    struct {
        unsigned int altitude:1;
        unsigned int context:1;
        unsigned int course:1;
        unsigned int motionActivityConfidence:1;
        unsigned int motionActivityType:1;
        unsigned int speed:1;
        unsigned int verticalAccuracy:1;
    } _has;
}

@property(nonatomic) int motionActivityConfidence; // @synthesize motionActivityConfidence=_motionActivityConfidence;
@property(nonatomic) int motionActivityType; // @synthesize motionActivityType=_motionActivityType;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) float course; // @synthesize course=_course;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) float altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMotionActivityConfidence;
@property(nonatomic) _Bool hasMotionActivityType;
@property(nonatomic) _Bool hasContext;
@property(nonatomic) _Bool hasCourse;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) _Bool hasAltitude;

@end
