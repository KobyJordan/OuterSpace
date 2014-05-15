//
//  KJSpaceDataViewController.h
//  Out Of This World
//
//  Created by Koby Jordan on 15/05/2014.
//  Copyright (c) 2014 Koby Jordan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJSpaceObject.h"

@interface KJSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) KJSpaceObject *spaceObject;

@end
