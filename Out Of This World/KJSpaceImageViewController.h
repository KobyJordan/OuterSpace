//
//  KJSpaceImageViewController.h
//  Out Of This World
//
//  Created by Koby Jordan on 6/05/2014.
//  Copyright (c) 2014 Koby Jordan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJSpaceObject.h"

@interface KJSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) KJSpaceObject *spaceObject;

@end
