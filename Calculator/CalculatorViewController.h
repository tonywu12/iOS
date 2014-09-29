//
//  CalculatorViewController.h
//  Calculator
//
//  Created by Tony Wu on 2014-09-28.
//  Copyright (c) 2014 Tony_Wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorBrain.h"

@interface CalculatorViewController : UIViewController
{
    CalculatorBrain *brain;
    IBOutlet UILabel * display;
}

- (IBAction)digitPressed:(UIButton *) sender;
- (IBAction)operationPressed:(UIButton *)sender;

@end
