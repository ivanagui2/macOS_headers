//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol TNodeObserverProtocol <NSObject>

@optional
- (void)queryStopped:(const struct TFENode *)arg1;
- (void)childrenSpatialDataChanged:(const struct TFENode *)arg1;
- (void)aliasTargetChanged:(const struct TFENode *)arg1;
- (void)openChildListUpdated:(const struct TFENode *)arg1;
- (void)syncCompleted:(const struct TFENode *)arg1;
- (void)openSyncCompleted:(const struct TFENode *)arg1;
- (void)openSyncStarted:(const struct TFENode *)arg1;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(NSDictionary *)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)nodeGoingAway:(const struct TFENode *)arg1;
- (void)nodeMoved:(const struct TFENode *)arg1;
- (void)nodeDeleted:(const struct TFENode *)arg1 fromObservedNode:(const struct TFENode *)arg2;
- (void)nodeChanged:(const struct TFENode *)arg1 inObservedNode:(const struct TFENode *)arg2 property:(unsigned int)arg3;
- (void)nodeAdded:(const struct TFENode *)arg1 toObservedNode:(const struct TFENode *)arg2;
@end

