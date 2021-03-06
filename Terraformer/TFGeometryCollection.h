//
//  TFGeometryCollection
//  Terraformer
//
//  Created by ryana on 5/21/14
//  Copyright (c) 2014 ESRI. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFPrimitive.h"

@class TFGeometry;

@interface TFGeometryCollection : NSObject <TFPrimitive>

@property (nonatomic, copy) NSArray *geometries;

- (instancetype)initWithGeometries:(NSArray *)geometries;

- (void)addGeometry:(TFGeometry *)geometry;

- (void)removeGeometry:(TFGeometry *)geometry;

- (NSArray *)geometriesWhichContain:(TFGeometry *)geometry;
- (NSArray *)geometriesWhichIntersect:(TFGeometry *)geometry;
- (NSArray *)geometriesWithin:(TFGeometry *)geometry;

@end