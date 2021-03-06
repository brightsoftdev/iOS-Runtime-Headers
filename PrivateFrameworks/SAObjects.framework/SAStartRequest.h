/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand> {
}

@property BOOL handsFree;
@property(copy) NSString * motionActivity;
@property(retain) NSNumber * motionConfidence;
@property(copy) NSString * origin;
@property(copy) NSString * utterance;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)startRequest;
+ (id)startRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setOrigin:(id)arg1;
- (id)origin;
- (BOOL)handsFree;
- (void)setHandsFree:(BOOL)arg1;
- (id)utterance;
- (void)setUtterance:(id)arg1;
- (id)motionActivity;
- (void)setMotionActivity:(id)arg1;
- (id)motionConfidence;
- (void)setMotionConfidence:(id)arg1;
- (id)encodedClassName;

@end
