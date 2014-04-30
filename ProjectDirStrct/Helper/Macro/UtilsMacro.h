//
//  UtilsMacro.h
//  CardiOS
//
//  Created by xqj on 14-4-24.
//  Copyright (c) 2014年 renhe. All rights reserved.
//

#ifndef CardiOS_UtilsMacro_h
#define CardiOS_UtilsMacro_h

#pragma mark
#pragma mark - Color

#define ColorWithRGB(r, g, b) [UIColor colorWithRed: (r) / 255.0f green: (g) / 255.0f blue: (b) / 255.0f alpha:1.0]
#define ColorWithRGBA(r, g, b, a) [UIColor colorWithRed: (r) / 255.0f green: (g) / 255.0f blue: (b) / 255.0f alpha:(a)]
#define ColorWithHexValue(hexValue) [UIColor colorWithRed:((float)((hexValue & 0xFF0000) >> 16))/255.0 green:((float)((hexValue & 0xFF00) >> 8))/255.0 blue:((float)(hexValue & 0xFF))/255.0 alpha:1.0]

#pragma mark
#pragma mark - Log

#ifdef DEBUG
#define NSLog(format, ...) do {\
fprintf(stderr, "-----------------------------------------\n");             \
fprintf(stderr, "File: %s / Func: %s / Line: %d\n",                         \
[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
__func__, __LINE__);                                                        \
(NSLog)((format), ##__VA_ARGS__);                                           \
fprintf(stderr, "-----------------------------------------\n\n");           \
} while (0)
#else
#define NSLog(format, ...) nil
#endif

#define Log_Key_Error                       @"LogError"
#define Log_HttpReqError                    @"HttpRequestError"
#define Log_HttpResError                    @"HttpResponseError"

#pragma mark
#pragma mark - Device

#define iOS7OrLater (NSFoundationVersionNumber > NSFoundationVersionNumber_iOS_6_1)
#define Inch4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#pragma mark
#pragma mark - View Const

#define NAV_HEIGHT      iOS7OrLater ? 64.0 : 44.0
#define NAV_ITEM_HEIGHT 44.0
#define TABBAR_HEIGHT   49.0
#define SCREEN_WIDTH    320.0
#define SCREEN_HEIGHT   Inch4 ? 568 : 480
#pragma mark - Path

#define HomePath NSHomeDirectory()
#define CachePath [NSHomeDirectory() stringByAppendingPathComponent:@"Library/Caches"]
#define DocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define LibraryPath [NSHomeDirectory() stringByAppendingPathComponent:@"Library"]
#define TempPath NSTemporaryDirectory()
#define MainBoundPath [[NSBundle mainBundle] bundlePath]
#define ResourcePath [[NSBundle mainBundle] resourcePath]
#define ExecutablePath [[NSBundle mainBundle] executablePath]

#endif
