// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Controls the order of product (not item) searches.
 
 
 @ingroup ShoppingInterface
*/

/**
 
 Sort by product popularity (as determined by eBay).
 (This is the default sort order.)
 
*/
extern NSString *const Shopping_ProductSortCodeType_POPULARITY;

/**
 
 Sort by average rating.
 
*/
extern NSString *const Shopping_ProductSortCodeType_RATING;

/**
 
 Sort by the number of reviews on eBay.
 
*/
extern NSString *const Shopping_ProductSortCodeType_REVIEW_COUNT;

/**
 
 Sort by the number of active items listed with this product.
 
*/
extern NSString *const Shopping_ProductSortCodeType_ITEM_COUNT;

/**
 
 Sort by the product title.
 
*/
extern NSString *const Shopping_ProductSortCodeType_TITLE;

/**
 
 Reserved for values that are not available in the version of the schema
 you are using. If eBay adds a new value to this code type as of a
 newer version, we return CustomCode instead when you specify a
 lower request version.
 
*/
extern NSString *const Shopping_ProductSortCodeType_CUSTOM_CODE;
