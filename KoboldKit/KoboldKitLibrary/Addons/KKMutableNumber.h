//
//
// Created by Steffen Itterheim on 19.10.12.
//
//

#import <Foundation/Foundation.h>

/** Similar to NSNumber, but allows numbers to be modified (hence: mutable). It does not inherit NSNumber, the implementation
   is lightweight and encapsulates various classes like KKBoolNumber, KKInt32Number, KKDoubleNumber and so on each containing only
   a single property of the given data type. 
 
 This is what makes NSMutableNumber numbers mutable, they're regular properties of objects encapsulating integral data types.

   Once a concrete subclass of KKMutableNumber has been created using one of the initializers, the type of that number is set and can
   not be changed. For example, if you assign a BOOL value to a float number, the BOOL value will be cast to float. Likewise if you
   access the charValue property of a number whose type is float, the returned value will be cast from float to char before it is returned. */
@interface KKMutableNumber : NSObject<NSCoding, NSCopying>

/** create a mutable number of type BOOL
 @param number A number.
 */
+(id) numberWithBool:(BOOL)number;
/** create a mutable number of type char
 @param number A number.
*/
+(id) numberWithChar:(char)number;
/** create a mutable number of type double 
 @param number A number.
*/
+(id) numberWithDouble:(double)number;
/** create a mutable number of type float 
 @param number A number.
*/
+(id) numberWithFloat:(float)number;
/** create a mutable number of type int
 @param number A number.
*/
+(id) numberWithInt:(int)number;
/** create a mutable number of type NSInteger (32-Bit on iOS, 64-Bit on OS X) 
 @param number A number.
*/
+(id) numberWithInteger:(NSInteger)number;
/** create a mutable number of type long 
 @param number A number.
*/
+(id) numberWithLong:(long)number;
/** create a mutable number of type long long (64 bit integer) 
 @param number A number.
*/
+(id) numberWithLongLong:(long long)number;
/** create a mutable number of type short 
 @param number A number.
*/
+(id) numberWithShort:(short)number;
/** create a mutable number of type unsigned char 
 @param number A number.
*/
+(id) numberWithUnsignedChar:(unsigned char)number;
/** create a mutable number of type unsigned int 
 @param number A number.
*/
+(id) numberWithUnsignedInt:(unsigned int)number;
/** create a mutable number of type NSUInteger (32-Bit on iOS, 64-Bit on OS X)
 @param number A number.
*/
+(id) numberWithUnsignedInteger:(NSUInteger)number;
/** create a mutable number of type unsigned long 
 @param number A number.
*/
+(id) numberWithUnsignedLong:(unsigned long)number;
/** create a mutable number of type unsigned long long (64 bit integer) 
 @param number A number.
*/
+(id) numberWithUnsignedLongLong:(unsigned long long)number;
/** create a mutable number of type unsigned short 
 @param number A number.
*/
+(id) numberWithUnsignedShort:(unsigned short)number;

/** create a mutable number of type BOOL 
 @param number A number.
*/
-(id) initWithBool:(BOOL)number;
/** create a mutable number of type char 
 @param number A number.
*/
-(id) initWithChar:(char)number;
/** create a mutable number of type double 
 @param number A number.
*/
-(id) initWithDouble:(double)number;
/** create a mutable number of type float 
 @param number A number.
*/
-(id) initWithFloat:(float)number;
/** create a mutable number of type int 
 @param number A number.
*/
-(id) initWithInt:(int)number;
/** create a mutable number of type NSInteger (32-Bit on iOS, 64-Bit on OS X) 
 @param number A number.
*/
-(id) initWithInteger:(NSInteger)number;
/** create a mutable number of type long 
 @param number A number.
*/
-(id) initWithLong:(long)number;
/** create a mutable number of type long long (64 bit integer) 
 @param number A number.
*/
-(id) initWithLongLong:(long long)number;
/** create a mutable number of type short 
 @param number A number.
*/
-(id) initWithShort:(short)number;
/** create a mutable number of type unsigned char 
 @param number A number.
*/
-(id) initWithUnsignedChar:(unsigned char)number;
/** create a mutable number of type unsigned int 
 @param number A number.
*/
-(id) initWithUnsignedInt:(unsigned int)number;
/** create a mutable number of type NSUInteger (32-Bit on iOS, 64-Bit on OS X) 
 @param number A number.
*/
-(id) initWithUnsignedInteger:(NSUInteger)number;
/** create a mutable number of type unsigned long 
 @param number A number.
*/
-(id) initWithUnsignedLong:(unsigned long)number;
/** create a mutable number of type unsigned long long (64 bit integer) 
 @param number A number.
*/
-(id) initWithUnsignedLongLong:(unsigned long long)number;
/** create a mutable number of type unsigned short 
 @param number A number.
*/
-(id) initWithUnsignedShort:(unsigned short)number;

/** Get or set the number's value as/from type BOOL. */
@property (nonatomic) BOOL boolValue;
/** get or set the number's value as/from type char */
@property (nonatomic) char charValue;
/** get or set the number's value as/from type double */
@property (nonatomic) double doubleValue;
/** get or set the number's value as/from type float */
@property (nonatomic) float floatValue;
/** get or set the number's value as/from type int */
@property (nonatomic) int intValue;
/** get or set the number's value as/from type NSInteger */
@property (nonatomic) NSInteger integerValue;
/** get or set the number's value as/from type long long */
@property (nonatomic) long long longLongValue;
/** get or set the number's value as/from type long */
@property (nonatomic) long longValue;
/** get or set the number's value as/from type short */
@property (nonatomic) short shortValue;
/** get or set the number's value as/from type unsigned char */
@property (nonatomic) unsigned char unsignedCharValue;
/** get or set the number's value as/from type NSUInteger */
@property (nonatomic) NSUInteger unsignedIntegerValue;
/** get or set the number's value as/from type unsigned int */
@property (nonatomic) unsigned int unsignedIntValue;
/** get or set the number's value as/from type unsigned long long */
@property (nonatomic) unsigned long long unsignedLongLongValue;
/** get or set the number's value as/from type unsigned long */
@property (nonatomic) unsigned long unsignedLongValue;
/** get or set the number's value as/from type unsigned short */
@property (nonatomic) unsigned short unsignedShortValue;

@end


@interface KKBoolNumber : KKMutableNumber
{
@private
	BOOL _number;
}
-(id) initWithBool:(BOOL)boolNumber;
@end

@interface KKFloatNumber : KKMutableNumber
{
@private
	float _number;
}
-(id) initWithFloat:(float)floatNumber;
@end

@interface KKDoubleNumber : KKMutableNumber
{
@private
	double _number;
}
-(id) initWithDouble:(double)doubleNumber;
@end

// the Number is 32-Bit even on 64-Bit Mac OS
@interface KKInt32Number : KKMutableNumber
{
@private
	int32_t _number;
}
-(id) initWithInt32:(int32_t)int32Number;
@end

// the Number is 64-Bit even on 32-Bit iOS
@interface KKInt64Number : KKMutableNumber
{
@private
	int64_t _number;
}
-(id) initWithInt64:(int64_t)int64Number;
@end

