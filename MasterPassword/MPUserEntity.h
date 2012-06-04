//
//  MPUserEntity.h
//  MasterPassword-iOS
//
//  Created by Maarten Billemont on 04/06/12.
//  Copyright (c) 2012 Lyndir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class MPElementEntity;

@interface MPUserEntity : NSManagedObject

@property (nonatomic, retain) NSData * keyID;
@property (nonatomic, retain) NSDate * lastUsed;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * saveKey;
@property (nonatomic, retain) NSNumber * avatar;
@property (nonatomic, retain) NSSet *elements;
@end

@interface MPUserEntity (CoreDataGeneratedAccessors)

- (void)addElementsObject:(MPElementEntity *)value;
- (void)removeElementsObject:(MPElementEntity *)value;
- (void)addElements:(NSSet *)values;
- (void)removeElements:(NSSet *)values;

@end