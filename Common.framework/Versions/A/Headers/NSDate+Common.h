//
//  NSDate+Common.h
//  FOUNDATION
//
//  Created by Code on 16/11/15.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSDate (Common)

#pragma mark - 日期组件属性

/** 年份 */
@property (nonatomic, readonly) NSInteger year;

/** 月份 (1~12) */
@property (nonatomic, readonly) NSInteger month;

/** 日期 (1~31) */
@property (nonatomic, readonly) NSInteger day;

/** 小时 (0~23) */
@property (nonatomic, readonly) NSInteger hour;

/** 分钟 (0~59) */
@property (nonatomic, readonly) NSInteger minute;

/** 秒钟 (0~59) */
@property (nonatomic, readonly) NSInteger second;

/** 纳秒 */
@property (nonatomic, readonly) NSInteger nanosecond;

/** 星期 (1~7, 默认周日为1) */
@property (nonatomic, readonly) NSInteger weekday;

/** 本月星期数量 (如 weekday = 1 weekdayOrdinal = 2, 则表示本月的第二个周日) */
@property (nonatomic, readonly) NSInteger weekdayOrdinal;

/** 本月周数量 (1~5) */
@property (nonatomic, readonly) NSInteger weekOfMonth;

/** 本年周数量 (1~53) */
@property (nonatomic, readonly) NSInteger weekOfYear;

/** 本周所在年份 */
@property (nonatomic, readonly) NSInteger yearForWeekOfYear;

/** 季度 */
@property (nonatomic, readonly) NSInteger quarter;

/** 判断本月是否是闰月 */
@property (nonatomic, readonly) BOOL kLeapMonth;

/** 判断本年是否是闰年 */
@property (nonatomic, readonly) BOOL kLeapYear;

/** 判断日期是否是今日 */
@property (nonatomic, readonly) BOOL kToday;

/** 判断日期是否是昨日 */
@property (nonatomic, readonly) BOOL kYesterday;

#pragma mark - 日期常用扩展

/**
 *  当前日期增加年份
 *
 *  @param years 增加的年份
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingYears:(NSInteger)years;

/**
 *  当前日期增加月份
 *
 *  @param months 增加的月份
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingMonths:(NSInteger)months;

/**
 *  当前日期增加星期
 *
 *  @param weeks 增加的星期
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingWeeks:(NSInteger)weeks;

/**
 *  当前日期增加天数
 *
 *  @param days 增加的天数
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingDays:(NSInteger)days;

/**
 *  当前日期增加小时
 *
 *  @param days 增加的小时
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingHours:(NSInteger)hours;

/**
 *  当前日期增加分钟
 *
 *  @param days 增加的分钟
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingMinutes:(NSInteger)minutes;

/**
 *  当前日期增加秒钟
 *
 *  @param days 增加的秒钟
 *
 *  @return 返回日期
 */
- (nullable NSDate *)dateByAddingSeconds:(NSInteger)seconds;

#pragma mark - 日期格式转换

/**
 *  通过需要转换的格式，把日期格式化成指定格式
 *  例如: http://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns
 *
 *  @param format 需要转换的格式 (@"yyyy-MM-dd HH:mm:ss")
 *
 *  @return 返回格式化后的日期
 */
- (nullable NSString *)stringWithFormat:(NSString *)format;

/**
 *  通过需要转换的格式、时区、地区，把日期格式化成指定格式
 *
 *  @param format 需要转换的格式 (@"yyyy-MM-dd HH:mm:ss")
 *  @param region 时区
 *  @param zone   地区
 *
 *  @return 返回格式化后的日期
 */
- (nullable NSString *)stringWithFormat:(NSString *)format
                                   zone:(nullable NSTimeZone *)zone
                                 region:(nullable NSLocale *)region;

/** 日期格式装换成 ISO8601 格式 */
- (nullable NSString *)stringWithISOFormat;

/**
 *  通过需要转换的格式，把日期格式化成指定格式
 *
 *  @param date   需要转换的日期
 *  @param format 需要转换的格式 (@"yyyy-MM-dd HH:mm:ss")
 *
 *  @return 返回格式化后的日期
 */
+ (nullable NSDate *)dateWithString:(NSString *)date format:(NSString *)format;

/**
 *  通过需要转换的格式、时区、地区，把日期格式化成指定格式
 *
 *  @param date   需要转换的日期
 *  @param format 需要转换的格式 (@"yyyy-MM-dd HH:mm:ss")
 *  @param zone   时区
 *  @param region 地区
 *
 *  @return 返回格式化后的日期
 */
+ (nullable NSDate *)dateWithString:(NSString *)date
                             format:(NSString *)format
                               zone:(nullable NSTimeZone *)zone
                             region:(nullable NSLocale *)region;

/**
 *  日期格式装换成 ISO8601 格式 ("2010-07-09T16:13:30+12:00")
 *
 *  @param date 需要转换的日期
 *
 *  @return 返回格式化后的日期
 */
+ (nullable NSDate *)dateWithISOFormatString:(NSString *)date;

@end
NS_ASSUME_NONNULL_END
