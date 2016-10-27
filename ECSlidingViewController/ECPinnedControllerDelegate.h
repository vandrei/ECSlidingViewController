//
//  ECPinnedViewController.h
//  AntenaPlay
//
//  Created by Andrei Vasilescu on 21/10/2016.
//  Copyright © 2016 mready. All rights reserved.
//

@protocol ECPinnedControllerDelegate <NSObject>

- (BOOL)hasPinnedLeftViewController;
- (BOOL)hasPinnedRightViewController;

@end

#endif /* ECPinnedViewController_h */
