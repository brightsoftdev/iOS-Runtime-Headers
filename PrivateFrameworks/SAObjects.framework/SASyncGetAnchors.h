/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASyncGetAnchors : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * sources;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)getAnchors;
+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setSources:(id)arg1;
- (id)sources;
- (id)encodedClassName;

@end
