//
//  ViewController.h
//  LEColorPickerDemo
//
//  Created by Luis Enrique Espinoza Severino on 11-12-12.
//  Copyright (c) 2012 LuisEspinoza. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ATPagingView.h"

@interface ViewController : UIViewController<ATPagingViewDelegate>
{
    IBOutlet UIActivityIndicatorView *_activityIndicator;
    IBOutlet ATPagingView *_pagingView;
    IBOutlet UITextView *_titleTextField;
    IBOutlet UITextView *_bodyTextField;
    IBOutlet UIView *_outputView;
    
    NSMutableArray *_imagesNamesArray;
}
@end
