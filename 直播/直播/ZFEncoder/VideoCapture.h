//
//  VideoCapture.h
//  直播
//
//  Created by zhangzhifu on 2017/3/13.
//  Copyright © 2017年 seemygo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoCapture : NSObject

- (void)startCapturing:(UIView *)preView;
- (void)stopCapturing;

@end
