//
//  Alfred.h
//  WeChatTweak
//
//  Created by Sunnyyoung on 2017/9/10.
//  Copyright © 2017年 Sunnyyoung. All rights reserved.
//

#import <YYModel/YYModel.h>
#import <GCDWebServer/GCDWebServer.h>
#import <GCDWebServer/GCDWebServerDataResponse.h>

@interface AlfredManager : NSObject

+ (instancetype)sharedInstance;

- (void)startListener;
- (void)stopListener;

@end
