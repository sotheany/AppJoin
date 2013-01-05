//
//  ThirdViewController.h
//  AppJoin
//
//  Created by Mars on 12-12-29.
//  Copyright (c) 2012年 Mars. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Place.h"
#import "AppDelegate.h"

@interface ThirdViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,MKMapViewDelegate,CLLocationManagerDelegate>
{
    ///自定义的大头针对象
    Place *place;
}
///显示行车路线的Label
@property (nonatomic, retain) UILabel *label;
///地图类
@property (nonatomic, retain) MKMapView *myMapView;
///当前位置的定位类
@property (nonatomic, retain) CLLocation *location;
///我的收藏日程数组
@property (nonatomic, retain) NSMutableArray *myDateArray;
///显示我的收藏日程的tableView
@property (retain, nonatomic) IBOutlet UITableView *dateTableView;
///segment方法，0代表显示我的日程，1是行车路线，2是我的当前位置地图
- (IBAction)segmentActive:(id)sender;




@end