//
//  HWPreviewViewController.h
//  TestProject
//
//  Created by Coco Wu on 2017/6/13.
//  Copyright © 2017年 cyt. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HWImageModel;
@interface HWPreviewViewController : UIViewController

@property (nonatomic, assign) NSInteger index;

- (instancetype)initWithDatas:(NSArray *)datas;

@end
