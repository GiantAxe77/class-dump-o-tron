//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumberFormatter.h"

@interface XRRulerTimeFormatter : NSNumberFormatter
{
    BOOL _fixedPrecision;
    double _unitsToMinutes;
}

+ (id)stringForObjectValue:(id)arg1;
+ (id)stringFromNumber:(id)arg1;
+ (id)stringForDouble:(double)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (void)setFixedPrecision:(BOOL)arg1;
- (id)init;
- (id)initWithUnits:(id)arg1;

@end
