//
//  AppMacro.h
//  CardiOS
//
//  Created by xqj on 14-4-24.
//  Copyright (c) 2014年 renhe. All rights reserved.
//

#ifndef CardiOS_AppMacro_h
#define CardiOS_AppMacro_h

#pragma mark - API Config

#ifdef DEBUG
#define Host    @"http://192.168.1.2:8085/"
#else
#define Host    @"http://115.238.55.157:8085/"
#endif

#define API_Register            @"register.shtml"               //注册
#define API_Login               @"login.shtml"                  //登陆
#define API_UploadCard          @"uploadCard.shtml"             //名片上传
#define API_ReDistCard          @"reUploadCard.shtml"           //名片重新识别 Dist-distinguish Rst-result
#define API_GetCardDistRst      @"cardRecognition.shtml"        //名片识别结果
#define API_GetCardInfo         @"listCardInfo.shtml"           //获取名片详情
#define API_UpdateCardInfo      @"updateCardInfo.shtml"         //更新名片信息
#define API_GetCards            @"listUserCard.shtml"           //获取用户名片夹
#define API_UploadDToken        @"addDeviceToken.shtml"         //上报 device token
#define API_UploadMyCard        @"uploadProfileCard.shtml"      //上传我的名片 个人资料
#define API_GetMyCardDistRst    @"profileCardRecognition.shtml" //获取我的名片 识别结果 个人资料
#define API_GetMyCardInfo       @"profileCardInfo.shtml"        //获取我的名片的信息 个人资料
#define API_UpdateMyCardInfo    @"updateProfileCard.shtml"      //更新我的名片信息  个人资料
#define API_GetUsedCardsInfo    @"recAmountInfo.shtml"          //今日名片上传量信息
#define API_FBCardDistRst       @"cardRecFeedback.shtml"        //反馈名片识别结果准确与否 FB-feedback
#define API_DeleteCard          @"deleteCard.shtml"             //删除名片
#define API_CheckVersion        @"version.shtml"                //检查新版本的接口
#define API_GetRenheMember      @"renheMember.shtml"            //获取人和网用户名片

#define API_Param_


#pragma mark - NC Keys


#endif
