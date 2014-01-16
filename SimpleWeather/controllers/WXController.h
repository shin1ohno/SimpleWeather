//
//  WXController.h
//  SimpleWeather
//
//  Created by Ohno Shin'ichi on 1/17/14.
//  Copyright (c) 2014 Ohno Shin'ichi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TSMessage.h>
#import <LBBlurredImage/UIImageView+LBBlurredImage.h>
#import "WXManager.h"

@interface WXController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate>

@property (nonatomic, strong) UIImageView *backgroundImageView;
@property (nonatomic, strong) UIImageView *blurredImageView;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, assign) CGFloat screenHeight;

@end
