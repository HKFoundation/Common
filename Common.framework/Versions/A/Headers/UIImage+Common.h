//
//  UIImage+Common.h
//  FOUNDATION
//
//  Created by Code on 16/11/16.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (Common)

/**
 *  通过颜色生成一张尺寸 1*1 的图片
 *
 *  @param color 需要的颜色
 *
 *  @return 返回颜色图片
 */
+ (nullable UIImage *)imageWithColor:(UIColor *)color;

/**
 *  通过图片尺寸、图片显示类型，重新绘制图片
 *
 *  @param rect        图片尺寸
 *  @param contentMode 图片显示的类型
 *  @param clips       是否裁剪
 */
- (void)drawInRect:(CGRect)rect contentMode:(UIViewContentMode)contentMode clipsToBounds:(BOOL)clips;

/**
 *  通过图片尺寸，重新裁剪并返回新的图片
 *
 *  @param size 图片尺寸
 *
 *  @return 返回图片
 */
- (nullable UIImage *)imageByResizeToSize:(CGSize)size;

/**
 *  通过图片尺寸、图片显示类型，重新裁剪并返回新的图片
 *
 *  @param size        图片尺寸
 *  @param contentMode 图片显示类型
 *
 *  @return 返回图片
 */
- (nullable UIImage *)imageByResizeToSize:(CGSize)size contentMode:(UIViewContentMode)contentMode;

@end
NS_ASSUME_NONNULL_END
