/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SACalendarDefaultSourceGet : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;

+ (id)defaultSourceGet;
+ (id)defaultSourceGetWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end
