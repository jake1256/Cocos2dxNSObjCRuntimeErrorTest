//
//  NativeUtil.cpp
//  Cocos2dxNSObjCRuntimeErrorTest
//
//  Created by Jake on 2014/10/26.
//
//

#include "NativeUtil.h"


#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#import <objc/runtime.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif

void NativeUtil::showWebBrowser(std::string url)
{
    NSString *urlString = [NSString stringWithFormat:@"%s" , url.c_str()];
    NSURL *nsUrl = [NSURL URLWithString:urlString];
    
    // ブラウザを起動する
    [[UIApplication sharedApplication] openURL:nsUrl];
}