///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestReminderShownToSecondaryTeamDetails` struct.
///
/// Sent a team merge request reminder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The email of the primary team admin the request was sent to.
@property (nonatomic, readonly, copy) NSString *sentTo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sentTo The email of the primary team admin the request was sent to.
///
/// @return An initialized instance.
///
- (instancetype)initWithSentTo:(NSString *)sentTo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `TeamMergeRequestReminderShownToSecondaryTeamDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails` object.
///
+ (DBTEAMLOGTeamMergeRequestReminderShownToSecondaryTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
