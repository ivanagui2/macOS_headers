//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSCharacterSet;

@interface CALCharacterSetFormatter : NSFormatter
{
    NSCharacterSet *_characterSet;
}

- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (BOOL)isPartialStringValid:(id)arg1 newEditingString:(id *)arg2 errorDescription:(id *)arg3;
- (id)characterSet;
- (void)setCharacterSet:(id)arg1;
- (id)initWithCharacterSet:(id)arg1;
- (id)init;

@end

