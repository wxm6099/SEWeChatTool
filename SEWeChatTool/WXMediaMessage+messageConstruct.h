//
//  WXMediaMessage+messageConstruct.h
//  niceinapp
//
//  Created by sense on 2017/12/6.
//  Copyright © 2017年 sense. All rights reserved.
//

#import "WXApiObject.h"

@interface WXMediaMessage (messageConstruct)

+ (WXMediaMessage *)messageWithTitle:(NSString *)title
                         Description:(NSString *)description
                              Object:(id)mediaObject
                          MessageExt:(NSString *)messageExt
                       MessageAction:(NSString *)action
                          ThumbImage:(UIImage *)thumbImage
                            MediaTag:(NSString *)tagName;

@end
