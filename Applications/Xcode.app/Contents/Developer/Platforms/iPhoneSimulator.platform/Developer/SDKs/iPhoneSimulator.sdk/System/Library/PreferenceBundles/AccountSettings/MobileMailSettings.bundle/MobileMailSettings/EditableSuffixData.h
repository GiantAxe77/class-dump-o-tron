//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EditableSuffixData : NSObject
{
    NSString *_editableSuffixString;
    unsigned long long _lastLength;
}

- (void)setFieldContentsLastLength:(unsigned long long)arg1;
- (unsigned long long)fieldContentsLastLength;
- (id)suffixString;
- (void)dealloc;
- (id)initWithSuffixString:(id)arg1;

@end

