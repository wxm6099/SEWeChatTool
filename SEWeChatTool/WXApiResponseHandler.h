//
//  WXApiResponseHandler.h
//  niceinapp
//
//  Created by sense on 2017/12/6.
//  Copyright © 2017年 sense. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WXApiObject.h>

@interface WXApiResponseHandler : NSObject

+ (BOOL)respText:(NSString *)text;

+ (BOOL)respImageData:(NSData *)imageData
           MessageExt:(NSString *)messageExt
               Action:(NSString *)action
           ThumbImage:(UIImage *)thumbImage;

+ (BOOL)respLinkURL:(NSString *)urlString
              Title:(NSString *)title
        Description:(NSString *)description
         ThumbImage:(UIImage *)thumbImage;

+ (BOOL)respMusicURL:(NSString *)musicURL
             dataURL:(NSString *)dataURL
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage;

+ (BOOL)respVideoURL:(NSString *)videoURL
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage;

+ (BOOL)respEmotionData:(NSData *)emotionData
             ThumbImage:(UIImage *)thumbImage;

+ (BOOL)respFileData:(NSData *)fileData
       fileExtension:(NSString *)extension
               Title:(NSString *)title
         Description:(NSString *)description
          ThumbImage:(UIImage *)thumbImage;

+ (BOOL)respAppContentData:(NSData *)data
                   ExtInfo:(NSString *)info
                    ExtURL:(NSString *)url
                     Title:(NSString *)title
               Description:(NSString *)description
                MessageExt:(NSString *)messageExt
             MessageAction:(NSString *)action
                ThumbImage:(UIImage *)thumbImage;


@end
