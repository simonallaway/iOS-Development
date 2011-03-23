//
//  TestGITAppDelegate.h
//  TestGIT
//
//  Created by Simon Allaway on 3/22/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestGITViewController;

@interface TestGITAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestGITViewController *viewController;

@end
