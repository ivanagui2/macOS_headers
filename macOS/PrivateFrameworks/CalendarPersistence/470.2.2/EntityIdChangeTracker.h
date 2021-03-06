//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface EntityIdChangeTracker : NSObject
{
    NSMutableDictionary *oldById;
    NSMutableDictionary *oldByIdentity;
    NSString *entityName;
}

+ (id)objectIdentityOf:(id)arg1;
- (void)findChangedIds:(id)arg1;
- (void)remap:(id)arg1 to:(id)arg2 forObject:(id)arg3 into:(id)arg4;
- (void)removeKey:(id)arg1 forObject:(id)arg2 into:(id)arg3;
- (void)extractAllIdsAndIdentities:(id)arg1;
- (void)extractExtraInfo:(id)arg1 withId:(id)arg2;
- (id)fetchAll;
- (id)getIdentityString:(id)arg1;
- (id)getObjectID:(id)arg1;
- (id)init;

@end

