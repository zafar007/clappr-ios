//
//  CLPCore.h
//  Clappr
//
//  Created by Gustavo Barbosa on 1/12/15.
//  Copyright (c) 2015 globo.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CLPUIObject.h"

@class CLPMediaControl;

@interface CLPCore : CLPUIObject

@property (nonatomic, copy, readonly) NSArray *sources;
@property (nonatomic, copy, readonly) NSArray *containers;
@property (nonatomic, strong, readonly) CLPMediaControl *mediaControl;

- (instancetype)initWithSources:(NSArray *)sources;

@end
