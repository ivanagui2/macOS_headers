//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@interface NSThread (TSPersistence)
+ (void)tsp_performSynchronousOperationWithThreadDictionaryObject:(id)arg1 forKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(CDUnknownBlockType)arg1;
+ (BOOL)tsp_hasReadFileAccess;
+ (void)tsp_runFinalizeHandlersForReadCoordinator:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (BOOL)tsp_isRunningFinalizeHandlersForLegacyDocument;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(CDUnknownBlockType)arg1;
+ (BOOL)tsp_isArchiverThread;
@end

