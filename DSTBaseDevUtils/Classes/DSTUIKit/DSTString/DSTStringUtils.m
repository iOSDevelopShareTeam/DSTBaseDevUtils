//
//  DSTStringUtils.m
//  DSTBaseDevUtils
//
//  Created by shavekevin on 2019/8/13.
//

#import "DSTStringUtils.h"

@implementation DSTStringUtils

//判断字符串是否为空
+ (BOOL)isBlankString:(id)targetString {
    
    if (![targetString isKindOfClass:[NSString class]]) {
        NSAssert(![targetString isKindOfClass:[NSString class]], @"当前传入的不是字符串");
        return NO;
    }
    if ([targetString isKindOfClass:[NSNull class]]) {
        return YES;
    }
    if (targetString == nil || targetString == NULL) {
        return YES;
    }
    targetString = [NSString stringWithFormat:@"%@",targetString];
    if ([[targetString stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] length] == 0 ||
        [targetString length] == 0) {
        return YES;
    }
    return NO;
}


@end
