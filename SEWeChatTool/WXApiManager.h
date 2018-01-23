//
//  WXApiManager.h
//  niceinapp
//
//  Created by sense on 2017/12/6.
//  Copyright © 2017年 sense. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WXApi.h>

@protocol WXApiManagerDelegate <NSObject>

@optional
- (void)managerDidRecvGetMessageReq:(GetMessageFromWXReq *)request;
- (void)managerDidRecvShowMessageReq:(ShowMessageFromWXReq *)request;
- (void)managerDidRecvLaunchFromWXReq:(LaunchFromWXReq *)request;

- (void)managerDidRecvMessageResponse:(SendMessageToWXResp *)response;
- (void)managerDidRecvAuthResponse:(SendAuthResp *)response;
- (void)managerDidRecvAddCardResponse:(AddCardToWXCardPackageResp *)response;
- (void)managerDidRecvChooseCardResponse:(WXChooseCardResp *)response;
- (void)managerDidRecvChooseInvoiceResponse:(WXChooseInvoiceResp *)response;
- (void)managerDidRecvSubscribeMsgResponse:(WXSubscribeMsgResp *)response;
- (void)managerDidRecvLaunchMiniProgram:(WXLaunchMiniProgramResp *)response;

- (void)managerDidRecvPayReq:(PayReq *)request;
- (void)managerDidRecvPayResponse:(PayResp *)response;
@end

@interface WXApiManager : NSObject<WXApiDelegate>

@property (nonatomic,assign) id<WXApiManagerDelegate> delegate;

+ (instancetype)sharedManager;

@end
