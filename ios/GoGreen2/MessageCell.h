//
//  MessageCell.h
//  GoGreen
//
//  Created by Jordan Rouille on 9/3/13.
//  Copyright (c) 2013 Aidan Melen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NetworkMessage.h"

#define Message_Type_ADMIN @"ADMIN"
#define Message_Type_MARKER @"MARKER"
#define Message_Type_COMMENT @"COMMENT"

@interface MessageCell : UITableViewCell

@property (nonatomic, strong) UIImageView *topBackgroundImage;
@property (nonatomic, strong) UIView *middleBackgroundImage;
@property (nonatomic, strong) UIImageView *bottomBackgroundImage;
@property (nonatomic, strong) UIButton *toggleValidity;
@property (nonatomic, strong) NetworkMessage *messageObject;
@property (nonatomic, strong) UILabel *textContentLabel;

-(id)initWithMessage:(NetworkMessage *)messageObject isBackwards:(BOOL)backwards isFirst:(BOOL)first andResueIdentifier:(NSString *)reuseIdentifier;

@end
