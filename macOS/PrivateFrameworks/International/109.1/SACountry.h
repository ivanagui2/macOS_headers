//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SACountry : NSObject
{
    NSString *_isoCountryCode;
}

+ (id)currentCountry;
+ (id)countryWithISOCode:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)telephoneCountryCode;
- (id)isoCountryNumber;
- (id)name;
- (id)_displayName;
- (id)isoCountryCodeAlpha2;
- (void)dealloc;
- (id)_initWithISOCode:(id)arg1;

@end

