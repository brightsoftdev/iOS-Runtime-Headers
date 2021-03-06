/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCallbackRegistry : NSObject  {
    struct __CFBag { } *_observers;
    struct dispatch_queue_s { } *_readWriteQueue;
}

+ (id)sharedCallbackRegistry;
+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)callbackObserver:(id)arg1;
- (void)unregisterCallbackObserver:(id)arg1;
- (void)registerCallbackObserver:(id)arg1;
- (void)finalize;

@end
