//
//  JENToDoItem.h
//  ToDoList
//
//  Created by Jorg on 02/06/2014.
//  Copyright (c) 2014 co.uk.jennius. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JENToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
