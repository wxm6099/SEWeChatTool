# SEWeChatTool


# 简介
对 微信SDK 的封装，使用更方便，有什么问题希望可以多多交流，顺便求个⭐️~

# 集成
#### 1. 在工程中的 Podfile 里面添加以下代码：
```
pod 'SEWeChatTool'
```
保存并执行 pod install，然后用后缀为 .xcworkspace 的文件打开工程。
命令行下执行 pod search SEWeChatTool, 如显示的 SEWeChatTool 版本不是最新的，则先执行pod repo update操作更新本地repo的内容

#### 2. 直接下载 SEWeChatTool 文件夹，全部拖入工程即可。

# 使用
#### 1. 在 appDelegate 中添加如下方法，注明协议。
```
- (BOOL)application:(UIApplication *)application openURL:(nonnull NSURL *)url sourceApplication:(nullable NSString *)sourceApplication annotation:(nonnull id)annotation
{
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
{
    return [WXApi handleOpenURL:url delegate:[WXApiManager sharedManager]];
}

```
#### 2. 在Xcode中，选择你的工程设置项，选中“TARGETS”一栏，在“info”标签栏的“URL type“添加“URL scheme”为你所注册的应用程序id。
#### 3. 在你需要使 用微信终端API的文件中import WXApiManager.h 头文件，并增加 WXApiManagerDelegate 协议。
