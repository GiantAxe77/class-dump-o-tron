//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XRBrush : NSObject
{
}

+ (Class)graphSequenceClass;
+ (struct XRPathAttribute)defaultPathAttribute;
+ (id)brushForStyle:(id)arg1;
+ (id)colorForNumber:(unsigned long long)arg1;
+ (void)initialize;
- (int)trackMarkerPosition;
- (double)minPixelsForRun:(id)arg1 datasource:(id)arg2 usingScale:(struct CGSize)arg3;
- (void)run:(id)arg1 datasource:(id)arg2 applyStyleForGraphAtIndex:(long long)arg3;
- (void)run:(id)arg1 datasource:(id)arg2 applyStyleToPath:(id)arg3 graphAtIndex:(long long)arg4;
- (void)run:(id)arg1 datasource:(id)arg2 renderSummaryLabelInRect:(struct CGRect)arg3;
- (BOOL)run:(id)arg1 datasource:(id)arg2 renderLabelForGraphAtIndex:(long long)arg3 visibleRect:(struct CGRect)arg4;
- (void)run:(id)arg1 datasource:(id)arg2 renderLabelsForSequences:(id)arg3 usingScale:(struct CGSize)arg4 graphAtIndex:(long long)arg5;
- (void)run:(id)arg1 datasource:(id)arg2 renderPathGroup:(id)arg3 sequences:(id)arg4 usingScale:(struct CGSize)arg5 graphAtIndex:(long long)arg6;
- (id)run:(id)arg1 datasource:(id)arg2 createPathForSequences:(id)arg3 inRect:(struct CGRect)arg4 usingScale:(struct CGSize)arg5 peakValue:(double *)arg6 graphAtIndex:(long long)arg7;

@end
