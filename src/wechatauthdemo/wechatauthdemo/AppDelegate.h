//
//  AppDelegate.h
//  wechatauthdemo
//
//  Created by Chuang Chen on 6/24/15.
//  Copyright (c) 2015 boshao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXApi.h"
#import "HomeViewController.h"
#import "LoginViewController.h"
#import "RegViewController.h"
#import "AcctViewController.h"
#import "InfoManager.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, WXApiDelegate,
    HomeViewDelegate, LoginViewDelegate, RegViewDelegate, AcctViewDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) HomeViewController *homeViewController;
@property (strong, nonatomic) LoginViewController *loginViewController;
@property (strong, nonatomic) RegViewController *regViewController;
@property (strong, nonatomic) AcctViewController *acctViewController;

@property (strong, nonatomic) InfoManager *infoMgr;

@end
