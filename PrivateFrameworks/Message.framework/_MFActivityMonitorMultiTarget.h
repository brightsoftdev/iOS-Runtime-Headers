/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject  {
    id _primaryTarget;
    NSMutableSet *_allTargets;
}


- (BOOL)addActivityTarget:(id)arg1;
- (BOOL)removeActivityTarget:(id)arg1;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)arg1;
- (void)dealloc;
- (id)displayName;
- (id)allTargets;

@end
