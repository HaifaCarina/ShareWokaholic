//
//  AppDelegate.h
//  ShareWokaholic
//
//  Created by Haifa Carina Baluyos on 10/29/12.
//  Copyright (c) 2012 NMG Resources, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RootViewController.h"
#import "FBConnect.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate, FBSessionDelegate,FBDialogDelegate, FBRequestDelegate> {
    RootViewController *viewController;
    Facebook *facebook;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) RootViewController *viewController;
@property (nonatomic, retain) Facebook *facebook;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
