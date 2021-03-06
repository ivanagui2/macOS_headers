//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PXPeopleMeViewControllerDataSource-Protocol.h"

@class CNContact, IPXLibrary, NSString, RDPerson;

@interface IPXPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource>
{
    BOOL _requestedSuggestedPerson;
    BOOL _requestedMeContact;
    IPXLibrary *_library;
    RDPerson *_suggestedPerson;
    CNContact *_meContact;
}

@property(getter=hasRequestedMeContact) BOOL requestedMeContact; // @synthesize requestedMeContact=_requestedMeContact;
@property(getter=hasRequestedSuggestedPerson) BOOL requestedSuggestedPerson; // @synthesize requestedSuggestedPerson=_requestedSuggestedPerson;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain) RDPerson *suggestedPerson; // @synthesize suggestedPerson=_suggestedPerson;
@property(readonly) IPXLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)userDidAnswerMeViewController:(id)arg1 withResponse:(BOOL)arg2 suggestedPerson:(id)arg3;
- (id)suggestedPersonForMeViewController:(id)arg1;
- (BOOL)_hasSuggestedPerson;
- (id)_linkedPersonForContactId:(id)arg1;
- (BOOL)_hasPromptedForMe;
- (void)_persistSuggestedPersonAsMe;
- (id)_suggestedPersonForMe;
- (void)_requestMeContactWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasSuggestedPersonForMeWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceFetchNewMeIfNeeded;
- (id)initWithLibrary:(id)arg1;
- (id)fallbackSuggestedMe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

