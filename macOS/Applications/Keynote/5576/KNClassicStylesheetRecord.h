//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKModel-Protocol.h"

@class NSDictionary, NSString;

@interface KNClassicStylesheetRecord : TSPObject <TSKModel>
{
    NSDictionary *_identifierToStyleMap;
}

@property(retain, nonatomic) NSDictionary *identifierToStyleMap; // @synthesize identifierToStyleMap=_identifierToStyleMap;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct ClassicStylesheetRecordArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct ClassicStylesheetRecordArchive *)arg1 unarchiver:(id)arg2;
- (id)childEnumerator;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

