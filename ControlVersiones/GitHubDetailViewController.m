//
//  GitHubDetailViewController.m
//  ControlVersiones
//
//  Created by Jorge Martinez Carvajal on 13/12/15.
//  Copyright (c) 2015 Jorge Martinez Juan Miranda. All rights reserved.
//

#import "GitHubDetailViewController.h"

@interface GitHubDetailViewController ()
- (void)configureView;
@end

@implementation GitHubDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
