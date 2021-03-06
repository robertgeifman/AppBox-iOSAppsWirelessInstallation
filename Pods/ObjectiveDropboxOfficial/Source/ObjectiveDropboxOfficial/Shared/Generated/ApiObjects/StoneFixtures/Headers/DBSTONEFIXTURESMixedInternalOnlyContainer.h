///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSTONEFIXTURESMixedInternalOnlyContainer;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MixedInternalOnlyContainer` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSTONEFIXTURESMixedInternalOnlyContainer : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) NSNumber *publicValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param publicValue (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPublicValue:(nullable NSNumber *)publicValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MixedInternalOnlyContainer` struct.
///
@interface DBSTONEFIXTURESMixedInternalOnlyContainerSerializer : NSObject

///
/// Serializes `DBSTONEFIXTURESMixedInternalOnlyContainer` instances.
///
/// @param instance An instance of the
/// `DBSTONEFIXTURESMixedInternalOnlyContainer` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSTONEFIXTURESMixedInternalOnlyContainer` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSTONEFIXTURESMixedInternalOnlyContainer *)instance;

///
/// Deserializes `DBSTONEFIXTURESMixedInternalOnlyContainer` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSTONEFIXTURESMixedInternalOnlyContainer` API object.
///
/// @return An instantiation of the `DBSTONEFIXTURESMixedInternalOnlyContainer`
/// object.
///
+ (DBSTONEFIXTURESMixedInternalOnlyContainer *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
