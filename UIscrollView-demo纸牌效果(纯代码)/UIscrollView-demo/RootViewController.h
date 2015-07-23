//
//  RootViewController.h
//  UIscrollView-demo
//
//  Created by apple on 14-7-29.
//  Copyright (c) 2014年 clark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iCarousel.h"

@interface RootViewController : UIViewController <iCarouselDataSource, iCarouselDelegate, UIActionSheetDelegate>
{
    BOOL wrap;
}

@property (nonatomic, strong) iCarousel *carousel;

@end
