//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Itay Roth on 10/31/13.
//  Copyright (c) 2013 Itay Roth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
