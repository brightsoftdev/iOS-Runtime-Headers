/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURedeemCodeView, NSString;



@interface SURedeemCodeViewController : SUViewController 
{
    NSString *_code;
    SURedeemCodeView *_entryView;
}

+ (BOOL)canRedeem;

- (id)init;
- (id)initWithCode:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_cancel:(id)arg1;
- (void)_redeem:(id)arg1;
- (void)_textFieldChanged:(id)arg1;

@end