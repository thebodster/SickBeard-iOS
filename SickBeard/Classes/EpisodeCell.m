//
//  EpisodeCell.m
//  SickBeard
//
//  Created by Colin Humber on 12/9/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "EpisodeCell.h"
#import "SBCellBackground.h"

@implementation EpisodeCell

@synthesize episodeNameLabel;
@synthesize airdateLabel;
@synthesize badgeView;

- (void)awakeFromNib {
	self.badgeView.outline = NO;
	self.badgeView.font = [UIFont boldSystemFontOfSize:12];
	self.badgeView.horizontalAlignment = LKBadgeViewHorizontalAlignmentRight;
}

- (void)commonInit {
	self.backgroundView = [[SBCellBackground alloc] init];
	self.selectedBackgroundView = [[SBCellBackground alloc] init];
}

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
		[self commonInit];
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder {
	self = [super initWithCoder:aDecoder];
	
	if (self) {
		[self commonInit];
	}
	
	return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}


- (BOOL)canBecomeFirstResponder {
	return YES;
}


@end
