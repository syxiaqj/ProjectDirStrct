//
//  NetWorkHelper.h
//  CardiOS
//
//  Created by xqj on 14-4-25.
//  Copyright (c) 2014年 renhe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NetWorkHelper : NSObject

/**
 *  短连接请求
 *
 *  @param url        API 接口
 *  @param paramsDict 参数列表
 *
 *  @return Response 解析成Dict
 */
- (NSDictionary *)httpRequetWithAPI:(NSString *)api params:(NSDictionary *)paramsDict;

@end
