//
//  GitHubMasterViewController.h
//  ControlVersiones
//
//  Created by Jorge Martinez Carvajal on 13/12/15.
//  Copyright (c) 2015 Jorge Martinez Juan Miranda. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface GitHubMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
