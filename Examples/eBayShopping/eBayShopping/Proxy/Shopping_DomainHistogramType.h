// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_HistogramEntryType;

/**
 
 A generic type used for histograms.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_DomainHistogramType : NSObject <PicoBindable> {

@private
    NSMutableArray *_domain;
    NSMutableArray *_any;

}


/**
 
 Each histogram entry shows how many matching products
 were found in each matching domain. A domain is like a high-level
 category, or a group of categories whose items share the same basic
 product characteristics.
 
 
 entry type : class Shopping_HistogramEntryType
*/

@property (nonatomic, retain) NSMutableArray *domain;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end