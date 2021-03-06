/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISOperation, NSString;

@interface SUBackgroundTaskOperation : ISOperation  {
    ISOperation *_operation;
    NSString *_permissionIdentifier;
    unsigned int _taskIdentifier;
}

@property(readonly) ISOperation * operation;
@property(readonly) NSString * permissionIdentifier;


- (void)dealloc;
- (void)run;
- (id)permissionIdentifier;
- (id)initWithOperation:(id)arg1 identifier:(id)arg2;
- (void)_cancelBackgroundAssertion;
- (void)_removeBackgroundAssertion;
- (void)_takeBackgroundAssertion;
- (id)operation;

@end
