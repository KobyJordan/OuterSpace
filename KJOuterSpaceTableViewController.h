//
//  KJOuterSpaceTableViewController.h
//  Out Of This World
//
//  Created by Koby Jordan on 4/05/2014.
//  Copyright (c) 2014 Koby Jordan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJAddSpaceObjectViewController.h"

@interface KJOuterSpaceTableViewController : UITableViewController <KJAddSpaceObjectViewControllerDelegate>


@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;


@end
