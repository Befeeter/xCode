//
//  GitHubDetailViewController.h
//  ControlVersiones
//
//  Created by Jorge Martinez Carvajal on 13/12/15.
//  Copyright (c) 2015 Jorge Martinez Juan Miranda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GitHubDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
