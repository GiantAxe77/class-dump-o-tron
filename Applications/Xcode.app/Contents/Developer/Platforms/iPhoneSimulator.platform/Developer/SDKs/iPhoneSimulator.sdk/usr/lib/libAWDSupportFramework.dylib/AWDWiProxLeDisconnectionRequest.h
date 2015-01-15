//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class NSString;

@interface AWDWiProxLeDisconnectionRequest : PBRequest <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_peerId;
    NSString *_sessionId;
    CDStruct_b5306035 _has;
}

@property(retain, nonatomic) NSString *peerId; // @synthesize peerId=_peerId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
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
@property(readonly, nonatomic) _Bool hasPeerId;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
