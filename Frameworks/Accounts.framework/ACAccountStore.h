/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSArray;

@interface ACAccountStore : NSObject <XPCProxyTarget> {
    id _accountStoreProxy;
    struct dispatch_queue_s { } *_connectionQueue;
    struct _xpc_connection_s { } *_connection;
}

@property(readonly) NSArray * accounts;

+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;

- (id)accounts;
- (id)accountWithIdentifier:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)permissionForAccountType:(id)arg1;
- (void)clearPermissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (void)setPermissionGranted:(BOOL)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (id)appPermissionsForAccountType:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1;
- (id)parentAccountForAccount:(id)arg1;
- (id)credentialForAccount:(id)arg1;
- (id)typeForAccount:(id)arg1;
- (id)allDataclasses;
- (id)allAccountTypes;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(id)arg2;
- (void)sendAccountDatabaseDidChangeNotificationWithHandler:(id)arg1;
- (void)establishAccountStoreConnection;
- (void)_noteAccountStoreConnectionInterrupted;
- (void)tearDownAccountStoreConnection;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (id)accountsWithAccountType:(id)arg1;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (void)saveAccount:(id)arg1 forPID:(id)arg2 withCompletionHandler:(id)arg3;
- (void)addAccount:(id)arg1;

@end
