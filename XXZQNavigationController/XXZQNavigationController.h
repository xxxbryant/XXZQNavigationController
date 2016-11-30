//
//  XXZQNavigationController.h
//  XXZQNavigationController
//
//  Created by XXXZQ on 16/11/24.
//  Copyright © 2016年 张琦. All rights reserved.
//

#import <UIKit/UIKit.h>

#define XXZQAnimationDuration     0.5f
#define XXZQMinX                  (0.5f * [UIScreen mainScreen].bounds.size.width)

@interface XXZQNavigationController : UINavigationController

/*
 *  是否禁用拖拽，默认禁用
 */
@property (nonatomic, assign) BOOL disableDragPop;

/*
 *  是否开启pop动画，默认关闭
 */
@property (nonatomic, assign, getter=isPopAnimated) BOOL popAnimated;

@end

@interface UIViewController (XXZQNavigationController)


/**
 *  是否开启拖拽返回
 */
@property (nonatomic, assign) BOOL enableDragPop;

/**
 *  要pop到的控制器
 */
@property (nonatomic, weak, nullable) UIViewController *viewControllerToPop;

/**
 *  是否隐藏navigationBar
 */
@property (nonatomic, assign) BOOL prefersNavigationBarHidden;

/**
 *  是否隐藏tabbar
 */
@property (nonatomic, assign) BOOL hidesTabBarWhenPushed;

/**
 *  栈中的前一个控制器
 */
@property (nonatomic, readonly, weak)  UIViewController * _Nullable lastViewControllerInStack;

/**
 *  栈中的第一个控制器
 */
@property (nonatomic, readonly, weak) UIViewController * _Nullable rootViewControllerInStack;


@end
