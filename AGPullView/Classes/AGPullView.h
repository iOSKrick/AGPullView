//
//
//  AGPullView
//
//  Created by Alexey Getman on 11/06/16.
//  Copyright © 2016 Alexey Getman. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AGPullMarginView;

@interface AGPullView : UIView

@property (strong, nonatomic, readonly) UIView *contentView;
@property (strong, nonatomic, readonly) AGPullMarginView *pullMarginView;

@end
