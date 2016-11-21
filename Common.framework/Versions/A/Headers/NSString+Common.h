//
//  NSString+Common.h
//  FOUNDATION
//
//  Created by Code on 16/11/15.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSString (Common)

/** 返回 NSString 类型的小写加密字符串 */
- (nullable NSString *)md5String;

/**
 *  通过文本字体、宽度和高度范围、换行模式，计算文本的宽度和高度
 *
 *  @param font 文本字体
 *  @param size 文本宽度和高度
 *  @param mode 文本换行模式
 *
 *  @return 返回文本尺寸
 */
- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)mode;

/**
 *  通过文本字体，计算文本的宽度
 *
 *  @param font 文本字体
 *
 *  @return 返回文本宽度
 */
- (CGFloat)widthForFont:(UIFont *)font;

/**
 *  通过文本字体、文本宽度，计算文本的高度
 *
 *  @param font  文本字体
 *  @param width 文本宽度
 *
 *  @return 返回文本高度
 */
- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;

@end
NS_ASSUME_NONNULL_END
