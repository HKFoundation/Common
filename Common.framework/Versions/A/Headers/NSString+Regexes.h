//
//  NSString+Regexes.h
//  FOUNDATION
//
//  Created by Code on 16/11/15.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Regexes)

/**
 *  判断邮箱的有效性
 *
 *  @param email 邮箱
 *
 *  @return 返回布尔值表示邮箱是否有效
 */
+ (BOOL)regexEmail:(NSString *)email;

/**
 *  判断手机号码的有效性
 *
 *  @param phoneNum 手机号码
 *
 *  @return 返回布尔值表示手机号码是否有效
 */
+ (BOOL)regexMobilePhoneNumber:(NSString *)phoneNum;

/**
 *  判断身份证号码的有效性
 *
 *  @param cardNum 身份证号码
 *
 *  @return 返回布尔值表示身份证号码是否有效
 */
+ (BOOL)regexIDCardNumber:(NSString *)cardNum;

@end
