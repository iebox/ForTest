//
//  PhotoViewController.h
//  RPGOverview
//
//  Created by mike on 3/8/13.
//  Copyright (c) 2013 mike. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Credit.h"
#import "DescViewController.h"

@interface PhotoViewController : UIViewController
@property (nonatomic, strong) Credit *gotCredit;
@property (weak, nonatomic) IBOutlet UIImageView *viewLeveliv;
@property (weak, nonatomic) IBOutlet UIButton *showDescBtn;
@end
