//
//  KJAddSpaceObjectViewController.h
//  Out Of This World
//
//  Created by Koby Jordan on 17/05/2014.
//  Copyright (c) 2014 Koby Jordan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KJSpaceObject.h"

@protocol KJAddSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject:(KJSpaceObject *)spaceObject;
-(void)didCancel;


@end


@interface KJAddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <KJAddSpaceObjectViewControllerDelegate> delegate;


@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *inerestingFactTextField;


- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;




@end
