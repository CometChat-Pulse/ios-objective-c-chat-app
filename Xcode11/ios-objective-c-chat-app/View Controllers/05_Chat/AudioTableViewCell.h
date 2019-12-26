//
//  AudioTableViewCell.h
//  ios-objective-c-chat-app
//
//  Created by Budhabhooshan Patil on 12/04/19.
//  Copyright © 2019 Inscripts.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppConstants.h"

NS_ASSUME_NONNULL_BEGIN
@protocol AppAudioDelegate <NSObject>
-(void)didSelectAudioAtIndexPath:(NSInteger)tag flag:(NSInteger)flag message:(MediaMessage*)message;
@end
@interface AudioTableViewCell : UITableViewCell
+(NSString*)reuseIdentifier;
-(void)bind:(MediaMessage *)message withTailDirection:(MessageBubbleViewButtonTailDirection)tailDirection indexPath:(NSIndexPath *)indexPath;
@property (nonatomic, weak) id<AppAudioDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
