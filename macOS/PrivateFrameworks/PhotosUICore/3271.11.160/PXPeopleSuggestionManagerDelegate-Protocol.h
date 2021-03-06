//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXPeopleSuggestionManager;

@protocol PXPeopleSuggestionManagerDelegate <NSObject>
- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionsAvailable:(NSArray *)arg2;

@optional
- (void)willLoadMoreSuggestionsForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
@end

