//
//  GetMessageFromWXResp+responseWithTextOrMediaMessage.m
//  niceinapp
//
//  Created by sense on 2017/12/6.
//  Copyright © 2017年 sense. All rights reserved.
//

#import "GetMessageFromWXResp+responseWithTextOrMediaMessage.h"

@implementation GetMessageFromWXResp (responseWithTextOrMediaMessage)

+ (GetMessageFromWXResp *)responseWithText:(NSString *)text
                            OrMediaMessage:(WXMediaMessage *)message
                                     bText:(BOOL)bText {
    GetMessageFromWXResp *resp = [[GetMessageFromWXResp alloc] init];
    resp.bText = bText;
    if (bText)
        resp.text = text;
    else
        resp.message = message;
    return resp;
}

@end
