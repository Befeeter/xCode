//
//  GitHubAppDelegate.h
//  ControlVersiones
//
//  Created by Jorge Martinez Carvajal on 13/12/15.
//  Copyright (c) 2015 Jorge Martinez Juan Miranda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GitHubAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
