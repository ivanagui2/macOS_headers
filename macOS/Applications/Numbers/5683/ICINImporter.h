//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICImporter.h"

@interface ICINImporter : ICImporter
{
}

+ (id)iWorkNumbersNestedFilename;
- (id)iWorkNestedFilename;
- (id)indexXmlFilename;
- (id)createStateWithDocumentRoot:(id)arg1 delegate:(id)arg2;
- (id)processorWithOutputPath:(struct __CFString *)arg1 outputType:(int)arg2 previewRequest:(struct __QLPreviewRequest *)arg3;
- (BOOL)importWithState:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initialTemplateName;

@end

