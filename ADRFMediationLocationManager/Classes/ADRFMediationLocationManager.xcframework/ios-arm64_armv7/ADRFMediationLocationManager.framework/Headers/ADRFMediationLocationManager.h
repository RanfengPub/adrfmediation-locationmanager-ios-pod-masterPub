//
//  ADRFMediationLocationManager.h
//  ADRFMediationLocationManager
//
//  0.2.0.12221
//  Created by 陶冶明 on 2020/4/3.
//  Updated by Suancai on 2023/03/20 16:11.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, MCTCoordinateType) {
    MCTCoordinateTypeGPS = 1, // 全球卫星定位系统坐标系
    MCTCoordinateTypeNCS = 2, // 国家测绘局坐标系
    MCTCoordinateTypeBaiDu = 3, // 百度坐标系
    MCTCoordinateTypeOther = 4, // 其他坐标系
};

static NSString *latKey = @"ADRFMediationGenDeviceInfo-lat";
static NSString *lonKey = @"ADRFMediationGenDeviceInfo-lon";

@interface ADRFMediationLocationManager : NSObject
/// 国家, e.g.CN
@property (nonatomic, copy) NSString *ISOcountryCode;
/// 纬度
@property (nonatomic, strong) NSNumber *latitude;
/// 经度
@property (nonatomic, strong) NSNumber *longitude;
/// 海拔
@property (nonatomic, strong) NSNumber *altitude;
/// 坐标类型 1：全球卫星定位系统坐标系，2：国家测绘局坐标系，3：百度坐标系，4：其他坐标系
@property (nonatomic, strong) NSNumber *coordinate_type;
/// 获取坐标的时间戳, 单位 ms
@property (nonatomic, strong) NSNumber *coordinate_time;
/// 坐标精度, 单位 m
@property (nonatomic, strong) NSNumber *coordinate_accuracy;


+ (instancetype)sharedInstance;

/// 开启定位，但只进行一次，若正在定位或已经定位成功则不会在进行定位
- (void)startLocationOnly;

/// 是否可以进行 GPS 定位
- (BOOL)shouldUseGPS;


@end
