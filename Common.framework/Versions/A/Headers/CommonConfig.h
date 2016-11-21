//
//  CommonConfig.h
//  FOUNDATION
//
//  Created by Code on 16/4/9.
//  Copyright © 2016年 Code. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/** 日志输出 */
#ifdef DEBUG
#define NSLog(k, ...) NSLog(@"[%@ in number %d]->[message: %@]", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(k), ##__VA_ARGS__])
#else
#define NSLog(k, ...)
#endif

/** 真机 */
#if TARGET_OS_IPHONE

#endif

/** 模拟器 */
#if TARGET_IPHONE_SIMULATOR

#endif

#pragma mark - Redefine

/** Application代理 */
#define kApplication (AppDelegate *)[UIApplication sharedApplication].delegate

/** NSUserDefaults */
#define kUserDefaults [NSUserDefaults standardUserDefaults]

/** 开启网路转圈 */
#define kShowNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = YES

/** 关闭网路转圈 */
#define kHideNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = NO

/** 系统版本号 */
#define kSystemVersion [[[UIDevice currentDevice] systemVersion] floatValue]

/** App当前版本号 */
#define kAppVersion [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

/** 系统语言 */
#define kPreferredLanguage [[NSLocale preferredLanguages] objectAtIndex:0]

/** 弱引用 */
#define kFoundation(k, ...) __weak __typeof(k) weak = k

/** 获取Temp目录 */
#define kTemp NSTemporaryDirectory()

/** 获取Document目录 */
#define kDocument [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]

/** 获取Cache目录 */
#define kCache [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]

#pragma mark - Colors

/** RGB颜色 */
#define kRGB(r, g, b) [UIColor colorWithRed:(r) / 255.f green:(g) / 255.f blue:(b) / 255.f alpha:1.f]

/** RGBA颜色 */
#define kRGBA(r, g, b, a) [UIColor colorWithRed:(r) / 255.f green:(g) / 255.f blue:(b) / 255.f alpha:(a)]

/** Hex颜色 0xFFFFFF */
#define kHexRGB(k, ...) [UIColor colorWithRed:((float)((k & 0xFF0000) >> 16)) / 255.f green:((float)((k & 0xFF00) >> 8)) / 255.f blue:((float)(k & 0xFF)) / 255.f alpha:1.f]

/** 随机颜色 */
#define kRandomRGB [UIColor colorWithRed:arc4random_uniform(256) / 255.f green:arc4random_uniform(256) / 255.f blue:arc4random_uniform(256) / 255.f alpha:1.f]

#pragma mark - Frames

/** 屏幕的尺寸 */
#define kScreenRect ([[UIScreen mainScreen] bounds])

/** 屏幕的长 */
#define kScreenWidth ([[UIScreen mainScreen] bounds].size.width)

/** 屏幕的高 */
#define kScreenHeight ([[UIScreen mainScreen] bounds].size.height)

/** 适配所有机型尺寸 */
#define kScreenMain(for320, for375, for414) kScreenWidth > 320.f ? (kScreenWidth > 375.f ? (for414) : (for375)) : (for320)

/** 表格的实际高度 */
#define kTableViewHeight (kScreenHeight - kNaviBarHeight - kStatusBarHeight)

/** 留白后的实际长度 */
#define kCommonWidth (kScreenWidth - kMargin * 2)

/** 间距 */
#define kMargin (kScreenMain(10.f, 10.f, 10.f))

/** TabBar高度49.f */
UIKIT_EXTERN CGFloat const kTabBarHeight;

/** NavigationBar高度64.f */
UIKIT_EXTERN CGFloat const kNavigationBarHeight;

/** StatusBar高度20.f */
UIKIT_EXTERN CGFloat const kStatusBarHeight;

#pragma mark - Fonts

UIKIT_EXTERN CGFloat const kTextTitle;
UIKIT_EXTERN CGFloat const kTextContent;
UIKIT_EXTERN CGFloat const kTextSmall;
UIKIT_EXTERN CGFloat const kTextMedium;
UIKIT_EXTERN CGFloat const kTextLarge;
UIKIT_EXTERN CGFloat const kTextHuge;

#pragma mark - Others

/** 判断空对象 */
#define kEmptyObject(k, ...) (!k || [k isKindOfClass:[NSNull class]] || ([k respondsToSelector:@selector(length)] && [(NSData *)k length] == 0) || ([k respondsToSelector:@selector(count)] && [(NSArray *)k count] == 0))

/** 代码块执行时间 */
#define TICK CFAbsoluteTime begin = CFAbsoluteTimeGetCurrent();
#define TOCK NSLog(@"Time：%f", CFAbsoluteTimeGetCurrent() - begin);

/** 动画时间0.25f */
UIKIT_EXTERN CGFloat const kTime;
