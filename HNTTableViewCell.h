//
//  HNTTableViewCell.h
//  demo
//
//  Created by 东哥 on 2022/4/12.
//

#import <UIKit/UIKit.h>

#import "HNTAccountModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface HNTTableViewCell : UITableViewCell

@property(nonatomic,weak)HNTAccountModel        *model;

@property(nonatomic,assign)NSInteger    mark;

@end

NS_ASSUME_NONNULL_END
