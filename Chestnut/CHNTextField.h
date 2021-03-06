//
//  CHNTextField.h
//  Chestnut-demo
//
//  Created by Theodore Felix Leo on 19/8/15.
//  Copyright (c) 2015 jyllandsgatan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CHNTextField : UITextField

@property (strong, nonatomic) NSNumberFormatter *formatter;
@property (assign, nonatomic) BOOL shouldClearOnBeginEditing;
@property (strong, nonatomic) NSDecimalNumber *amount;

- (NSString *)decimalAmountString;
- (void)setDecimalAmountString:(NSString *)decimalAmountString;

@end
