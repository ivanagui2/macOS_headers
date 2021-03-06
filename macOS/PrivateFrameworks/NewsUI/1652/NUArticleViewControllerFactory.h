//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleViewControllerFactory-Protocol.h>

@class NSHashTable, NSString;
@protocol NFResolver, NUArticleAdManagerFactory, NUArticleDataProviderFactory, NUArticleKeyCommandManager, NUDynamicTypeProviding, SXAppStateMonitor;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory>
{
    NSHashTable *_loadingListeners;
    id <NUArticleDataProviderFactory> _articleDataProviderFactory;
    id <NUArticleAdManagerFactory> _articleAdManagerFactory;
    id <NUDynamicTypeProviding> _dynamicTypeProviding;
    id <SXAppStateMonitor> _appStateMonitor;
    id <NUArticleKeyCommandManager> _keyCommandManager;
    id <NFResolver> _resolver;
}

@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <NUArticleKeyCommandManager> keyCommandManager; // @synthesize keyCommandManager=_keyCommandManager;
@property(readonly, nonatomic) id <SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, nonatomic) id <NUDynamicTypeProviding> dynamicTypeProviding; // @synthesize dynamicTypeProviding=_dynamicTypeProviding;
@property(readonly, nonatomic) id <NUArticleAdManagerFactory> articleAdManagerFactory; // @synthesize articleAdManagerFactory=_articleAdManagerFactory;
@property(readonly, nonatomic) id <NUArticleDataProviderFactory> articleDataProviderFactory; // @synthesize articleDataProviderFactory=_articleDataProviderFactory;
@property(readonly, nonatomic) NSHashTable *loadingListeners; // @synthesize loadingListeners=_loadingListeners;
- (void).cxx_destruct;
- (id)createArticleExcerptViewControllerWithArticle:(id)arg1 traits:(id)arg2;
- (id)createArticleWebViewControllerWithArticle:(id)arg1;
- (id)createArticleViewControllerWithArticle:(id)arg1;
- (id)initWithArticleDataProviderFactory:(id)arg1 articleAdManagerFactory:(id)arg2 dynamicTypeProviding:(id)arg3 appStateMonitor:(id)arg4 keyCommandManager:(id)arg5 resolver:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

