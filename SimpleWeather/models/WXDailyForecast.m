//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Ohno Shin'ichi on 1/17/14.
//  Copyright (c) 2014 Ohno Shin'ichi. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];

    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";

    return paths;
}

@end
