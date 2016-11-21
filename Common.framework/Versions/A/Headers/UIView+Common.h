//
//  UIView+Common.h
//  FOUNDATION
//
//  Created by Code on 16/11/16.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Common)

/** frame.origin.x = hk_originX */
@property (nonatomic) CGFloat hk_originX;

/** frame.origin.y = hk_originY */
@property (nonatomic) CGFloat hk_originY;

/** frame.origin.x = hk_rightX - frame.size.width */
@property (nonatomic) CGFloat hk_rightX;

/** frame.origin.y = hk_bottomY - frame.size.height */
@property (nonatomic) CGFloat hk_bottomY;

/** frame.size.width = hk_width */
@property (nonatomic) CGFloat hk_width;

/** frame.size.height = hk_height */
@property (nonatomic) CGFloat hk_height;

/** center.x = hk_centerX */
@property (nonatomic) CGFloat hk_centerX;

/** center.y = hk_centerY */
@property (nonatomic) CGFloat hk_centerY;

/** frame.origin */
@property (nonatomic) CGPoint hk_origin;

/** frame.size */
@property (nonatomic) CGSize hk_size;

@end
