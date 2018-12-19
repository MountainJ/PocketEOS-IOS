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
@property (nonatomic,strong) NSString   *ownerAddress;
@property (nonatomic,strong) NSString   *accountAddress;

@end

NS_ASSUME_NONNULL_END
