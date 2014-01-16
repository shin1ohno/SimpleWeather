//
//  WXClient.h
//  SimpleWeather
//
//  Created by Ohno Shin'ichi on 1/17/14.
//  Copyright (c) 2014 Ohno Shin'ichi. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <Mantle.h>
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
#import "WXCondition.h"
#import "WXDailyForecast.h"
#import <TSMessages/TSMessage.h>

@interface WXClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;

@end
