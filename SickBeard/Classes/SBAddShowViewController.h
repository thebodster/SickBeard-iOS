//
//  SBAddShowViewController.h
//  SickBeard
//
//  Created by Colin Humber on 9/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBAddShowDelegate.h"

@interface SBAddShowViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate> {
	NSArray *results;
	NSString *currentLanguage;
	BOOL isSearching;
}

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UIPickerView *languagePickerView;
@property (nonatomic, strong) IBOutlet UITextField *showNameTextField;
@property (nonatomic, weak) id<SBAddShowDelegate> delegate;


@end
