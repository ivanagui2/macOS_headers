//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TSWPAdditions)
+ (id)tswp_stringForValue:(unsigned int)arg1 withPageNumberFormat:(int)arg2;
+ (BOOL)tswp_isRtlAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 uBiDi:(struct UBiDi *)arg3;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2 includeFormatting:(BOOL)arg3;
+ (id)tswp_stringForValue:(unsigned int)arg1 withListNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withPageNumberFormat:(int)arg2;
+ (unsigned long long)tswp_numberForString:(id)arg1 withListNumberFormat:(int)arg2;
- (id)tswp_stringWithoutControlCharacters;
- (id)tswp_stringWithUnambiguousNeutralEnding;
- (id)tswp_stringWithAddedIsolatesBasedOn:(int)arg1;
- (BOOL)tswp_isLowerCaseFromIndex:(unsigned long long)arg1;
- (BOOL)tswp_containsIdeographs;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1 planeClassification:(long long *)arg2;
- (unsigned int)tswp_utf32CharacterAtIndex:(unsigned long long)arg1;
- (int)tswp_contentsScriptInRange:(struct _NSRange)arg1;
- (int)tswp_contentsScript;
- (struct UBiDi *)tswp_createUBiDi:(int)arg1;
- (id)tswp_replaceOccurrencesOfCharactersInSet:(id)arg1 minimumConsecutiveLength:(unsigned long long)arg2 replaceString:(id)arg3;
- (BOOL)tswp_isAllWhitespaceInRange:(struct _NSRange)arg1;
- (BOOL)tswp_isHyphenationAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(BOOL)arg3 includeHyphenation:(BOOL)arg4;
- (struct _NSRange)tswp_rangeOfWordAtCharacterIndex:(unsigned long long)arg1 range:(struct _NSRange)arg2 includePreviousWord:(BOOL)arg3;
- (struct _NSRange)tswp_rangeOfCharactersFromSet:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)tswp_findIndexOfCharacter:(unsigned short)arg1 range:(struct _NSRange)arg2;
- (id)tswp_stringByNormalizingParagraphBreaks;
@end

