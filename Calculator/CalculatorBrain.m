//
//  CalculatorBrain.m
//  Calculator
//
//  Created by Tony Wu on 2014-09-27.
//  Copyright (c) 2014 Tony_Wu. All rights reserved.
//

#import "CalculatorBrain.h"

@implementation CalculatorBrain
- (void) setOperand:(double)anOperand
{
    operand = anOperand;
}

- (double) performOperation:(NSString *)operation
{
    if ([operation isEqual:@"sqrt"])
    {
        operand = sqrt(operand);
    }
    else
    {
        [self performWaitingOperation];
        waitingOperand = operand;
        waitingOperation = operation;
        
    }
    return operand;
}

- (void) performWaitingOperation
{
    if ([@"+" isEqual:(waitingOperation)])
    {
        operand = waitingOperand + operand;
    }
    else if([@"-" isEqual:(waitingOperation)])
    {
        
    }
}

- (NSArray *) foo:(int)zap bar:(id)pow
{
    return nil;
}
@end
