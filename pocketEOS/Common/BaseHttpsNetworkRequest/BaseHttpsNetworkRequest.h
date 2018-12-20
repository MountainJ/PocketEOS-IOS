//
//  BaseHttpsNetworkRequest.h
//  pocketEOS
//
//  Created by oraclechain on 16/04/2018.
//  Copyright © 2018 oraclechain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

typedef void (^RequestSuccessBlock)(id DAO, id data);
typedef void (^RequestFailedBlock)(id DAO, NSError *error);


typedef NS_ENUM(NSInteger,HostType)
{
      HostTypeGenerateAddress  = 1 ,
      HostTypeGetAccountInfo,
      HostTypeFreezeBalance
};

@interface BaseHttpsNetworkRequest : NSObject
/**
 *  request manager(AF_3.0 new method)
 */
@property(nonatomic, strong) AFHTTPSessionManager *networkingManager;

@property(nonatomic, strong) AFHTTPSessionManager *tronNetworkingManager;

@property (nonatomic,assign) HostType  hostType;

/**
 *  Network request timeout
 */
@property(nonatomic, assign) CGFloat timeoutInterval;

@property(nonatomic, assign) BOOL showActivityIndicator;
/**
 *  request data
 */
@property(nonatomic, strong) NSURLSessionDataTask *sessionDataTask;

/**
 *  Build request interface address
 *
 *  @return The requested interface address
 */
- (NSString *)requestUrlPath;

/**
 *  Build request parameters
 *
 *  @return The parameters of the request
 */
- (id)parameters;


/**
 get
 */
- (void)getDataSusscess:(RequestSuccessBlock)success failure:(RequestFailedBlock)failure;

/**
 *  The Post method request data
 */
- (void)postDataSuccess:(RequestSuccessBlock)success failure:(RequestFailedBlock)failure;

/**
 request Json 序列化 的 post 请求
 */
- (void)postOuterDataSuccess:(RequestSuccessBlock)success failure:(RequestFailedBlock)failure;

//生成账户
- (void)postTronDataSuccess:(RequestSuccessBlock)success failure:(RequestFailedBlock)failure;


@end
