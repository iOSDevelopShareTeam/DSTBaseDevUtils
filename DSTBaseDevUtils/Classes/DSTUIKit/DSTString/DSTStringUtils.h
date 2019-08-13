//
//  DSTStringUtils.h
//  DSTBaseDevUtils
//
//  Created by shavekevin on 2019/8/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @file        DSTStringUtils.h
 * @brief       NSObject check class tool.
 * @author      shavekevin
 * @version     1.0
 * @date        2019-08-13
 *
 */
@interface DSTStringUtils : NSObject
// 判断当前传入的是否是空字符串
/**
 *  Current content is String or NOT
 *  判断当前传入的是否是空字符串
 *  @return Y/N
 */

+ (BOOL)isBlankString:(id)targetString;

@end

NS_ASSUME_NONNULL_END
