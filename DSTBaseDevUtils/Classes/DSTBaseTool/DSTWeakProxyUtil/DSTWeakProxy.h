//
//  DSTProxy.h
//  DSTBaseDevUtils
//
//  Created by shavekevin on 2019/10/12.
//
// 代码来自：YYKit <https://github.com/ibireme/YYKit>
// Copyright (c) 2015 ibireme.
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
A proxy used to hold a weak object.
It can be used to avoid retain cycles, such as the target in NSTimer or CADisplayLink.

sample code:

    @implementation MyView {
       NSTimer *_timer;
    }
    
    - (void)initTimer {
       DSTWeakProxy *proxy = [DSTWeakProxy proxyWithTarget:self];
       _timer = [NSTimer timerWithTimeInterval:0.1 target:proxy selector:@selector(tick:) userInfo:nil repeats:YES];
    }
    
    - (void)tick:(NSTimer *)timer {...}
    @end
*/
@interface DSTWeakProxy : NSProxy

/**
 The proxy target.
 */
@property (nullable, nonatomic, weak, readonly) id target;

/**
 Creates a new weak proxy for target.
 
 @param target Target object.
 
 @return A new proxy object.
 */
- (instancetype)initWithTarget:(id)target;

/**
 Creates a new weak proxy for target.
 
 @param target Target object.
 
 @return A new proxy object.
 */
+ (instancetype)proxyWithTarget:(id)target;


@end

NS_ASSUME_NONNULL_END
