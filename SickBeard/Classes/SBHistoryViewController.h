//
//  SBHistoryViewController.h
//  SickBeard
//
//  Created by Colin Humber on 11/8/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBBaseTableViewController.h"
#import "EGORefreshTableHeaderView.h"

typedef enum {
	SBHistoryTypeSnatched,
	SBHistoryTypeDownloaded
} SBHistoryType;

@interface SBHistoryViewController : SBBaseTableViewController <UIActionSheetDelegate> {
	NSMutableArray *history;
	SBHistoryType historyType;
}

- (IBAction)showHistoryActions:(id)sender;
- (IBAction)done:(id)sender;

@end
