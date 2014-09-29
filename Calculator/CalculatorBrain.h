//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Tony Wu on 2014-09-27.
//  Copyright (c) 2014 Tony_Wu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject
{
    double operand;
    double waitingOperand;
    NSString * waitingOperation;
}

- (void) setOperand:(double) anOperand;
- (double) performOperation:(NSString *) operation;
- (NSArray *) foo:(int)zap bar:(id) pow;

@end
