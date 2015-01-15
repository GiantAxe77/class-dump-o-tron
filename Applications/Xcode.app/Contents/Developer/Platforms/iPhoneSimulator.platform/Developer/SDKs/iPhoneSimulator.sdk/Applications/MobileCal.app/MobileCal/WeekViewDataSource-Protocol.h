//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalendarOccurrencesCollection, EKDayOccurrenceView, EKEvent, NSDate, WeekView;

@protocol WeekViewDataSource <NSObject>
- (CalendarOccurrencesCollection *)weekView:(WeekView *)arg1 eventsForStartDate:(NSDate *)arg2 endDate:(NSDate *)arg3;

@optional
- (EKDayOccurrenceView *)weekView:(WeekView *)arg1 occurrenceViewForEvent:(EKEvent *)arg2;
@end
