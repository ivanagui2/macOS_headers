//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSData, NSError, NSSet, NSString, NSUUID, SFPeerDevice;

@protocol SFActivityAdvertiserClient <NSObject>
- (void)pairedDevicesChanged:(NSSet *)arg1;
- (void)didSendPayloadForActivityIdentifier:(NSUUID *)arg1 toDevice:(SFPeerDevice *)arg2 error:(NSError *)arg3;
- (void)activityPayloadForAdvertisementPayload:(NSData *)arg1 command:(NSString *)arg2 requestedByDevice:(SFPeerDevice *)arg3 withCompletionHandler:(void (^)(NSUUID *, NSData *, NSError *))arg4;
@end

