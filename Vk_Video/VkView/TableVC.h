//
//  TableVC.h
//  Vk_Video
//
//  Created by devil1001 on 21.03.17.
//  Copyright © 2017 devil1001. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <VKSdk.h>

@interface TableVC : UITableViewController <VKSdkDelegate>

@property (strong, nonatomic) NSString *yourId;

@end
