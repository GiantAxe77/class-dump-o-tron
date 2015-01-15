//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, PFUbiquityPeer, PFUbiquityStoreMetadata;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerState : NSManagedObject
{
}

+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3;
+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(_Bool)arg4;
- (id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *lastProcessedTransactionLogURL; // @dynamic lastProcessedTransactionLogURL;
@property(retain, nonatomic) PFUbiquityPeer *peer; // @dynamic peer;
@property(retain, nonatomic) PFUbiquityStoreMetadata *storeMetadata; // @dynamic storeMetadata;
@property(retain, nonatomic) NSString *storeName; // @dynamic storeName;
@property(retain, nonatomic) NSNumber *transactionNumber; // @dynamic transactionNumber;

@end
