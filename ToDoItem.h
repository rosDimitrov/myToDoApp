//
//  ToDoItem.h
//  myToDoApp
//
//  Created by Ross Whyte on 3/3/15.
//  Copyright (c) 2015 Ross Whyte. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSMutableString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@end
