//
//  SourceViewController.m
//  Example
//
//  Created by shavekevin on 2019/10/12.
//  Copyright © 2019 shavekevin. All rights reserved.
//

#import "SourceViewController.h"
#import <DSTBaseDevUtils/DSTWeakProxy.h>

@interface SourceViewController ()

@property (nonatomic, strong) NSTimer * schemeTimer;

@property (nonatomic, assign) NSInteger  timeValue;


@end

@implementation SourceViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self setupViews];
    [self setupData];
    [self setupLayout];
    [self privateMethodAction];
    
}

- (void)setupViews {
    
    self.view.backgroundColor = [UIColor whiteColor];
    
}

- (void)setupData {
    self.timeValue = 0;
}

- (void)setupLayout {
    
}

- (void)privateMethodAction {
    
    [self.schemeTimer fire];
}



- (void)printLog {
    self.timeValue ++;
    NSLog(@"timeValue is  %@",@(self.timeValue));
}

- (NSTimer *)schemeTimer {
    if (!_schemeTimer) {
        _schemeTimer = [NSTimer timerWithTimeInterval:5.0f target:[DSTWeakProxy proxyWithTarget:self] selector:@selector(printLog) userInfo:nil repeats:YES];
        [[NSRunLoop currentRunLoop] addTimer:_schemeTimer forMode:NSRunLoopCommonModes];
    }
    return _schemeTimer;
}

- (void)dealloc {
    if (_schemeTimer) {
        [_schemeTimer  invalidate];
        _schemeTimer = nil;
    }
    NSLog(@"已dellaoc");
}

@end
