//
//  LoginVC.h
//  sampleApp
//
//  Created by Ahmad Hassan on 28/06/15.
//  Copyright (c) 2015 Ahmad Hassan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginVC : UIViewController
- (IBAction)loginbtnclicked:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *email;
@property (weak, nonatomic) IBOutlet UITextField *password;

@end
