//
//  TronNetRequest.h
//  pocketEOS
//
//  Created by 张毅 on 2018/12/18.
//  Copyright © 2018年 oraclechain. All rights reserved.
//

#import "BaseHttpsNetworkRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface TronNetRequest : BaseHttpsNetworkRequest
@property (nonatomic,copy) NSString   *accountAddress;

@end

@interface TronFreezeBalanceNetRequest : BaseHttpsNetworkRequest
/*
 amount:冻结资金，单位是sun。amount最小为 1,000,000 sun, 即1TRX
 time：冻结时间，冻结资金到解冻资金的时间为3天
 resource：冻结获取的资源，0为Bandwidth Point，1为Energy。默认为0
 */
@property (nonatomic,copy) NSString      *owner_address;
@property (nonatomic,assign) long       frozen_balance;
@property (nonatomic,assign) NSInteger       frozen_duration;
@property (nonatomic,copy) NSString      *resource;

@end

NS_ASSUME_NONNULL_END
