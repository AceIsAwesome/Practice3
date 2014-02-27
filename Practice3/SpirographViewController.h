//
//  SpirographViewController.h
//  Practice3
//
//  Created by Michael Vitone on 2/27/14.
//  Copyright (c) 2014 Michael Vitone. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpirographView.h"
#import "HarmonigraphView.h"

@interface SpirographViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet HarmonigraphView *harmonigraphView;

@property (weak, nonatomic) IBOutlet UISlider *lSlider;

@property (weak, nonatomic) IBOutlet UISlider *kSlider;

@property (weak, nonatomic) IBOutlet SpirographView *spirographView;

@property (weak, nonatomic) IBOutlet UITextField *stepSizeTextField;

@property (weak, nonatomic) IBOutlet UITextField *numberOfStepsTextField;

- (IBAction)lChanged:(id)sender;
- (IBAction)kChanged:(id)sender;

@property (weak, nonatomic) IBOutlet UISegmentedControl *overWriteSegmentControl;

- (IBAction)redraw:(id)sender;

@end
