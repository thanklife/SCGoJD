//
//  SCCommentWebController.h
//  SCGoJD
//
//  Created by mac on 15/9/27.
//  Copyright (c) 2015年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SCCommentWebController : UIViewController
/**
 *  创建并返回一个SCCommentWebController对象,需要传入skuId参数进行数据请求
 *
 *  @param skuId 商品编号skuId
 *
 *  @return 一个SCCommentWebController对象
 */
- (instancetype)initWithSkuId:(NSString *)skuId;

@end
