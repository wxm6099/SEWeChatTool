//
//  SendMessageToWXReq+requestWithTextOrMediaMessage.h
//  niceinapp
//
//  Created by sense on 2017/12/6.
//  Copyright © 2017年 sense. All rights reserved.
//

#import "WXApiObject.h"

@interface SendMessageToWXReq (requestWithTextOrMediaMessage)

+ (SendMessageToWXReq *)requestWithText:(NSString *)text
                         OrMediaMessage:(WXMediaMessage *)message
                                  bText:(BOOL)bText
                                InScene:(enum WXScene)scene;

@end
