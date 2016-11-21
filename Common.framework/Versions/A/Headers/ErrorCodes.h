//
//  ErrorCodes.h
//  FOUNDATION
//
//  Created by Code on 16/4/14.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ErrorCodes : NSObject

/**
 *  网络请求中，系统给出的错误码对应的错误描述
 *
 *  @param code 错误码
 *
 *  @return 返回错误描述
 */
+ (NSString *)urlLoadingSystemErrorCodes:(NSInteger)code;

@end
