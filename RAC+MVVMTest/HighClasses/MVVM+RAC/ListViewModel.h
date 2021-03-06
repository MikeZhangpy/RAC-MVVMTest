//
//  ListViewModel.h
//  RAC+MVVMTest
//
//  Created by ZpyZp on 16/1/20.
//  Copyright © 2016年 zpy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>

@interface ListViewModel : NSObject
@property (nonatomic, strong, readonly) RACCommand *listRequestCommand;
@property (nonatomic, strong) NSArray *models;
@end
