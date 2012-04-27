//
//  SampleAppDelegate.h
//  Sample
//
//  Created by Elevate on 4/27/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SampleViewController;

@interface SampleAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SampleViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SampleViewController *viewController;

@end

