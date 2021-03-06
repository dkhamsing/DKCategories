//
//  UIViewController+DK.h
//
//  Created by dkhamsing on 4/15/14.
//

#import <UIKit/UIKit.h>

/* Category for UIController. */
@interface UIViewController (DK)

/**
 Add list of views as subviews to the receiver's view.
 @param subViews List of views.
 */
- (void)dk_addSubviews:(NSArray *)subviews;


/**
 Returns YES if the device has a small screen (iPhone 4s and older, checks for the 960-by-640 resolution). 
 @return Boolean that specifies if the screen is small.
 */
- (BOOL)dk_isSmallScreen;


#pragma mark - Child View Controller

//  See https://developer.apple.com/library/ios/featuredarticles/ViewControllerPGforiPhoneOS/CreatingCustomContainerViewControllers/CreatingCustomContainerViewControllers.html#//apple_ref/doc/uid/TP40007457-CH18-SW6 for more information.

/**
 Adds child view controller to receiver.
 @param childController Child view controller.
 */
- (void)dk_addChildController:(UIViewController*)childController;


/**
 Removes child view controller from receiver.
 @param childController Child view controller.
 */
- (void)dk_removeChildController:(UIViewController*)childController;


@end
