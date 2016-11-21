//
//  NSData+Common.h
//  FOUNDATION
//
//  Created by Code on 16/11/15.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (Common)

/** 返回 NSString 类型的小写加密字符串 */
- (NSString *)md5String;

/** 返回 NSData 类型的小写加密字符串 */
- (NSData *)md5Data;

@end
