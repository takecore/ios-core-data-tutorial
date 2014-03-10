//
//  CoreDataViewController.h
//  CoreData
//
//  Created by 大谷 武寛 on 2014/03/11.
//  Copyright (c) 2014年 Takehiro Ohtani. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreDataAppDelegate.h"

@interface CoreDataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *phone;
@property (strong, nonatomic) IBOutlet UILabel *status;

- (IBAction)saveData:(id)sender;
- (IBAction)findContact:(id)sender;

@end
