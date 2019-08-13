//
//  UIButton+Position.h
//  Example
//
//  Created by shavekevin on 2019/3/28.
//  Copyright © 2019 shavekevin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
/**
 *  @brief button 上设置图片和文字位置和间距
 */
typedef NS_ENUM(NSInteger, DSTImagePosition) {
    /**
     *  图片在左，文字在右，默认
     */
    eDSTImagePositionLeft = 0,
    /**
     *  图片在右，文字在左
     */
    eDSTImagePositionRight = 1,
    /**
     *  图片在上，文字在下
     */
    eDSTImagePositionTop = 2,
    /**
     *  图片在下，文字在上
     */
    eDSTImagePositionBottom = 3,
};

@interface UIButton (DSTPosition)

/**
 @author shavekevin, 16-05-11
 
 @brief set image position just for UIbutton
 
 @param postion 设置button上图片显示的位置
 @param spacing 间距
 
 @since ugc
 */
- (void)setImagePosition:(DSTImagePosition)postion spacing:(CGFloat)spacing;

/**
 
 @brief 设置图片显示的位置，不改变ControlState
 
 @param postion 设置button上图片显示的位置
 @param spacing 间距
 */
- (void)setImageOriginStatePosition:(DSTImagePosition)postion spacing:(CGFloat)spacing;

/**
 重置
 */
- (void)reset;

@end

NS_ASSUME_NONNULL_END
