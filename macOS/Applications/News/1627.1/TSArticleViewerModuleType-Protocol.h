//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, TSArticleContext, UIViewController;
@protocol FCHeadlineProviding;

@protocol TSArticleViewerModuleType
- (UIViewController *)createViewControllerForArticleID:(NSString *)arg1 headline:(id <FCHeadlineProviding>)arg2 articleContext:(TSArticleContext *)arg3 notificationSenderChannelID:(NSString *)arg4 articlePresentationStyle:(long long)arg5 showShareSheet:(BOOL)arg6 forceArticleUpdate:(BOOL)arg7;
@end

