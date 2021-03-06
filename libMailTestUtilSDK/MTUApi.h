//
//  MTUApi.h
//  libMailTestUtilSDK
//
//  Created by H-YXH on 3/17/15.
//  Copyright (c) 2015 migo Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MTUObject.h"

@protocol MTUApiDeleagte <NSObject>

- (void)onReceiveRequest:(MTUBaseReq *)request;
- (void)onReceiveResponse:(MTUBaseResp *)response;

@end

@interface MTUApi : NSObject

+ (BOOL)registerApp:(NSString *)appID;

+ (BOOL)isMailMasterInstalled;

+ (BOOL)isMailMasterSupportApi;

+ (BOOL)openMailMaster;

+ (NSError *)updateOpenAppUrlScheme:(NSString *)open
                      testUrlScheme:(NSString *)test;

+ (BOOL)handleOpenURL: (NSURL *)url
             delegate: (id<MTUApiDeleagte>)delegate;

+ (BOOL)sendReq:(MTUBaseReq *)req;

+ (BOOL)sendResp:(MTUBaseResp *)resp;

@end
