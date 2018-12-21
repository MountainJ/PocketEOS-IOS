//
//  TronNetRequest.m
//  pocketEOS
//
//  Created by 张毅 on 2018/12/18.
//  Copyright © 2018年 oraclechain. All rights reserved.
//

#import "TronNetRequest.h"

@implementation TronNetRequest

-(id)parameters{
    return @{
             @"address" : VALIDATE_STRING(self.accountAddress)
             };
}

@end

@implementation TronFreezeBalanceNetRequest

-(id)parameters{
    return @{
             @"owner_address" : VALIDATE_STRING(self.owner_address),
             @"resource" : VALIDATE_STRING(self.resource),
             @"frozen_balance" : @(self.frozen_balance),
             @"frozen_duration" : @(self.frozen_duration)
             };
}

@end



