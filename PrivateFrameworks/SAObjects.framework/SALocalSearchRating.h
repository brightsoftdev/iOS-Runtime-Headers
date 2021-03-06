/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable> {
}

@property int count;
@property(copy) NSString * description;
@property(copy) NSString * providerId;
@property double value;

+ (id)rating;
+ (id)ratingWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (int)count;
- (id)description;
- (void)setDescription:(id)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (void)setCount:(int)arg1;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (id)encodedClassName;

@end
