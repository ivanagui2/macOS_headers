//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOAddressCorrectionResult : PBCodable <NSCopying>
{
    NSString *_addressID;
    NSMutableArray *_significantLocations;
}

+ (Class)significantLocationType;
@property(retain, nonatomic) NSMutableArray *significantLocations; // @synthesize significantLocations=_significantLocations;
@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)significantLocationsCount;
- (void)addSignificantLocation:(id)arg1;
- (void)clearSignificantLocations;
@property(readonly, nonatomic) BOOL hasAddressID;

@end

