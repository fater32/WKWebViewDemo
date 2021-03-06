//
// Copyright 2009-2011 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView (TTCategory)

/**
 * Shortcut for frame.origin.x.
 *
 * Sets frame.origin.x = left
 */
@property (nonatomic) CGFloat left;

/**
 * Shortcut for frame.origin.y
 *
 * Sets frame.origin.y = top
 */
@property (nonatomic) CGFloat top;

/**
 * Shortcut for frame.origin.x + frame.size.width
 *
 * Sets frame.origin.x = right - frame.size.width
 */
@property (nonatomic) CGFloat right;

/**
 * Shortcut for frame.origin.y + frame.size.height
 *
 * Sets frame.origin.y = bottom - frame.size.height
 */
@property (nonatomic) CGFloat bottom;

/**
 * Shortcut for frame.size.width
 *
 * Sets frame.size.width = width
 */
@property (nonatomic) CGFloat width;

/**
 * Shortcut for frame.size.height
 *
 * Sets frame.size.height = height
 */
@property (nonatomic) CGFloat height;

/**
 * Shortcut for center.x
 *
 * Sets center.x = centerX
 */
@property (nonatomic) CGFloat centerX;

/**
 * Shortcut for center.y
 *
 * Sets center.y = centerY
 */
@property (nonatomic) CGFloat centerY;

/**
 * Return the x coordinate on the screen.
 */
@property (nonatomic, readonly) CGFloat ttScreenX;

/**
 * Return the y coordinate on the screen.
 */
@property (nonatomic, readonly) CGFloat ttScreenY;

/**
 * Return the x coordinate on the screen, taking into account scroll views.
 */
@property (nonatomic, readonly) CGFloat screenViewX;

/**
 * Return the y coordinate on the screen, taking into account scroll views.
 */
@property (nonatomic, readonly) CGFloat screenViewY;

/**
 * Return the view frame on the screen, taking into account scroll views.
 */
@property (nonatomic, readonly) CGRect screenFrame;

/**
 * Shortcut for frame.origin
 */
@property (nonatomic) CGPoint origin;

/**
 * Shortcut for frame.size
 */
@property (nonatomic) CGSize size;

/**
 *  Frame ignore tranform
 */
@property (nonatomic, readonly) CGRect originalFrame;

/**
 *  safeAreaInsets osVersion safe
 */
@property (nonatomic, readonly) UIEdgeInsets tt_safeAreaInsets;

/**
 *  safeAreaInsets description
 */
@property (nonatomic, readonly) NSString *desc_safeAreaInsets;


@end

@interface UIView (Additions)

@property(nonatomic, assign) UIEdgeInsets hitTestEdgeInsets;

/// 查找firstResponder
- (UIResponder *)findFirstResponder;


/**
 * @abstract 递归遍历该view，找到该view中的所有subview类型为class的view
 *
 * @param aClass subview 的 class
 * @return 所有类型为class的subview
 */
- (NSArray *)viewWithClass:(Class)aClass;

/**
 * @abstract 遍历该view的所有viewController,找到指定className的ViewController（第一个）
 *
 * @param specViewControllerClass 需要查找的ViewController的class
 * @return 找到的第一个符合条件的ViewController
 */
- (UIViewController *)findFirstViewControllerOfClass:(Class)specViewControllerClass;

/**
 * @abstract 遍历该view的所有superview,找到指定className的superview（第一个）
 *
 * @param superViewClass 需要查找的superView的class
 * @return 找到的第一个符合条件的superview
 */
- (UIView *)findNearestSuperViewWithClass:(Class)superViewClass;

@end
