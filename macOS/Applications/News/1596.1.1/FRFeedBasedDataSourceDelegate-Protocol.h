//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FCFeedDescriptor, FRFeedBasedDataSource, FRSubscriptionButton, NSArray, NSIndexPath;
@protocol FCTagProviding;

@protocol FRFeedBasedDataSourceDelegate <NSObject>
- (void)feedDataSourceDidReloadData:(FRFeedBasedDataSource *)arg1;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 wantsToPerformUpdate:(FRDataSourceUpdate * (^)(void))arg2;

@optional
- (BOOL)feedDataSourceShouldAnimateLoadOfCellImages:(FRFeedBasedDataSource *)arg1;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 presentNotificationManagerForTag:(id <FCTagProviding>)arg2;
- (BOOL)feedDataSourceShouldLoadImagesForCells:(FRFeedBasedDataSource *)arg1;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 unmuteFeed:(FCFeedDescriptor *)arg2;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 unsubscribedWithFeed:(FCFeedDescriptor *)arg2;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 subscribedWithFeed:(FCFeedDescriptor *)arg2 indexPathRow:(long long)arg3 preSubscribedTagIDs:(NSArray *)arg4;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 toggleMuteSubscription:(id <FCTagProviding>)arg2 subscriptionButton:(FRSubscriptionButton *)arg3;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 toggleSubscription:(id <FCTagProviding>)arg2 subscriptionButton:(FRSubscriptionButton *)arg3;
- (void)feedDataSource:(FRFeedBasedDataSource *)arg1 toggleSubscription:(FCFeedDescriptor *)arg2 subscriptionButton:(FRSubscriptionButton *)arg3 indexPath:(NSIndexPath *)arg4;
@end

