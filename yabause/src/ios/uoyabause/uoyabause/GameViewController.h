//
//  GameViewController.h
//  uoyabause
//
//  Created by MiyamotoShinya on 2016/02/06.
//  Copyright © 2016年 devMiyax. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@interface GameViewController : GLKViewController
{
    UInt32	 iPodIsPlaying;
    NSString *selected_file;
    
}

@property (nonatomic, assign) UInt32		iPodIsPlaying;		// Whether the iPod is playing
@property (nonatomic, copy) NSString *selected_file;

@property (weak, nonatomic) IBOutlet UIImageView *left_panel;
@property (weak, nonatomic) IBOutlet UIImageView *right_panel;

@property (weak, nonatomic) IBOutlet UIView *right_button;
@property (weak, nonatomic) IBOutlet UIView *down_button;
@property (weak, nonatomic) IBOutlet UIView *up_button;
@property (weak, nonatomic) IBOutlet UIView *left_button;
@property (weak, nonatomic) IBOutlet UIView *left_trigger;
@property (weak, nonatomic) IBOutlet UIView *start_button;
@property (weak, nonatomic) IBOutlet UIView *right_trigger;
@property (weak, nonatomic) IBOutlet UIView *a_button;
@property (weak, nonatomic) IBOutlet UIView *b_button;
@property (weak, nonatomic) IBOutlet UIView *c_button;
@property (weak, nonatomic) IBOutlet UIView *x_button;
@property (weak, nonatomic) IBOutlet UIView *y_button;
@property (weak, nonatomic) IBOutlet UIView *z_button;

- (void)saveState;
- (void)loadState;

@end
