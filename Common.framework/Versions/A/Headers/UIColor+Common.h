//
//  UIColor+Common.h
//  FOUNDATION
//
//  Created by Code on 16/11/16.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIColor (Common)

/**
 *  通过十六进制生成颜色，"#" 或 "0x" 不是必须的
 *
 *  @param hex 十六进制颜色值 (@"0xF0F", @"66CCFF", @"#66CCFF88")
 *
 *  @return 返回十六进制颜色
 */
+ (nullable UIColor *)colorWithHexString:(NSString *)hex;

/**
 *  通过RGB生成颜色
 *
 *  @param rgbValue 颜色值
 *  @param alpha    透明度
 *
 *  @return 返回RGB颜色
 */
+ (UIColor *)colorWithRGB:(uint32_t)rgbValue alpha:(CGFloat)alpha;

@end
NS_ASSUME_NONNULL_END
