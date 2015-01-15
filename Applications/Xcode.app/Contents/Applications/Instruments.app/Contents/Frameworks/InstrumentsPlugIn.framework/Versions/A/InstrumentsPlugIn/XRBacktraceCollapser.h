//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XRBacktraceCollapser : NSObject
{
    unsigned int _collapsingLevel;
}

+ (unsigned int)maxCollapsingLevel;
+ (id)collapserForDocument:(id)arg1;
+ (void)initialize;
- (id)collapsedFrames:(id)arg1;
- (unsigned int)collapsingLevel;
- (void)setCollapsingLevel:(unsigned int)arg1;
- (id)initWithCollapsingLevel:(unsigned int)arg1;

@end
