//
//  ViewController.m
//  Example
//
//  Created by shavekevin on 2019/3/28.
//  Copyright © 2019 shavekevin. All rights reserved.
//

#import "ViewController.h"
#import <DSTBaseDevUtils/UIButton+DSTPosition.h>
#import <DSTBaseDevUtils/DSTStringUtils.h>
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    BOOL curret = [DSTStringUtils isBlankString:@4];
    if (curret) {
        NSLog(@"this  is string");
    } else {
        NSLog(@"this  is   not string");

    }
}


@end
