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
    return @{@"owner_address" : VALIDATE_STRING(self.ownerAddress),
             @"account_address" : VALIDATE_STRING(self.accountAddress)
             };
}

@end
